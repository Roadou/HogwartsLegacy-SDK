// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x4c0 (Inherited: 0x4b0)
struct UCustomMeshComponent : UMeshComponent {
	char pad_4B0[0x10]; // 0x4b0(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x25dbb60
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0x25dbb40
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x25dba90
};

