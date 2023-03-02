// BlueprintGeneratedClass BP_Sanc_PaintingCanvasLarge_04A.BP_Sanc_PaintingCanvasLarge_04A_C
// Size: 0x2e0 (Inherited: 0x2a8)
struct ABP_Sanc_PaintingCanvasLarge_04A_C : ATransfigurationObjectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UStaticMeshComponent* StaticMeshComponent1; // 0x2b0(0x08)
	struct UStaticMeshComponent* StaticMeshComponent0; // 0x2b8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse1; // 0x2c0(0x08)
	struct UConjurationSnappingWallComponent* ConjurationSnappingWall; // 0x2c8(0x08)
	struct UConjurationSurfaceShapeComponent* ConjurationSurfaceShape; // 0x2d0(0x08)
	struct USceneComponent* SharedRoot; // 0x2d8(0x08)

	void ObjectConjured(); // Function BP_Sanc_PaintingCanvasLarge_04A.BP_Sanc_PaintingCanvasLarge_04A_C.ObjectConjured // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationCancelled(); // Function BP_Sanc_PaintingCanvasLarge_04A.BP_Sanc_PaintingCanvasLarge_04A_C.ObjectTransformationCancelled // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationConfirmed(); // Function BP_Sanc_PaintingCanvasLarge_04A.BP_Sanc_PaintingCanvasLarge_04A_C.ObjectTransformationConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectVanished(); // Function BP_Sanc_PaintingCanvasLarge_04A.BP_Sanc_PaintingCanvasLarge_04A_C.ObjectVanished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_Sanc_PaintingCanvasLarge_04A.BP_Sanc_PaintingCanvasLarge_04A_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanc_PaintingCanvasLarge_04A(int32_t EntryPoint); // Function BP_Sanc_PaintingCanvasLarge_04A.BP_Sanc_PaintingCanvasLarge_04A_C.ExecuteUbergraph_BP_Sanc_PaintingCanvasLarge_04A // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

