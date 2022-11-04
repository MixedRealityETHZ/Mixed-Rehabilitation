using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental;
using Microsoft.MixedReality.SceneUnderstanding;
using System.Linq;



// Detect the floor
public class SceneUnderstanding : MonoBehaviour
{
    public SceneObject floor;
    public GameObject parentGo;
    public Scene scene;
    public MeshCollider meshCollider;

    void Start()
    {
        QueryAndUpdateScene();
    }
    
    public async void QueryAndUpdateScene()
    {
        SceneQuerySettings querySettings;

        querySettings.EnableSceneObjectQuads = true;
        querySettings.EnableSceneObjectMeshes = true;
        querySettings.EnableOnlyObservedSceneObjects = false;
        querySettings.EnableWorldMesh = true;
        querySettings.RequestedMeshLevelOfDetail = SceneMeshLevelOfDetail.Fine;

        // Initialize new scene
        Scene scene = await SceneObserver.ComputeAsync(querySettings, 10.0f);
    }

    public void Update()
    {
        if (scene != null)
        {
            var floors = scene.SceneObjects.Where(obj => obj.Kind == SceneObjectKind.Floor).ToArray();
            if (floors.Length > 0)
            {
                floor = floors[0];
                Debug.Log("Floor found");

                // Find largest floor
                float largestArea = 0;
                SceneObject largestFloor = floors[0];

                foreach (var floor in floors)
                {
                    if (floor.Quads.Count > 0)
                    {
                        float area = 0;
                        foreach (var quad in floor.Quads)
                        {
                            area += quad.Extents.X * quad.Extents.Y;
                        }
                        if (area > largestArea)
                        {
                            largestArea = area;
                            largestFloor = floor;
                        }
                    }
                }
                floor = largestFloor;
            }
        }
    }

    public void UpdateCollisionMesh()
    {
        if (floor != null)
        {
            var mesh = floor.ColliderMeshes[0];

            var indices = new uint[mesh.TriangleIndexCount];
            mesh.GetTriangleIndices(indices);
            var indicesAsInt = indices.Cast<int>().ToArray();

            var vertices = new System.Numerics.Vector3[mesh.VertexCount];
            mesh.GetVertexPositions(vertices);

            // Create a mesh collider
            Mesh unityMesh = new Mesh();
            unityMesh.SetVertices(vertices.Select(v => new Vector3(v.X, v.Y, v.Z)).ToList());
            unityMesh.SetIndices(indicesAsInt, MeshTopology.Triangles, 0);
            unityMesh.RecalculateNormals();
            unityMesh.RecalculateBounds();

            meshCollider.sharedMesh = unityMesh;
        }
    }
}
