// BlueprintGeneratedClass BP_Sanc_AmbientPainting_12.BP_Sanc_AmbientPainting_11_C
// Size: 0x2d0 (Inherited: 0x2a8)
struct ABP_Sanc_AmbientPainting_11_C : ATransfigurationObjectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UChildActorComponent* Painting; // 0x2b0(0x08)
	struct UConjurationSurfaceShapeComponent* ConjurationSurfaceShape; // 0x2b8(0x08)
	struct UConjurationSnappingWallComponent* ConjurationSnappingWall; // 0x2c0(0x08)
	struct USceneComponent* Root; // 0x2c8(0x08)

	void ReceiveBeginPlay(); // Function BP_Sanc_AmbientPainting_12.BP_Sanc_AmbientPainting_11_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ObjectConjured(); // Function BP_Sanc_AmbientPainting_12.BP_Sanc_AmbientPainting_11_C.ObjectConjured // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationCancelled(); // Function BP_Sanc_AmbientPainting_12.BP_Sanc_AmbientPainting_11_C.ObjectTransformationCancelled // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationConfirmed(); // Function BP_Sanc_AmbientPainting_12.BP_Sanc_AmbientPainting_11_C.ObjectTransformationConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectVanished(); // Function BP_Sanc_AmbientPainting_12.BP_Sanc_AmbientPainting_11_C.ObjectVanished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanc_AmbientPainting_12(int32_t EntryPoint); // Function BP_Sanc_AmbientPainting_12.BP_Sanc_AmbientPainting_11_C.ExecuteUbergraph_BP_Sanc_AmbientPainting_12 // (Final|UbergraphFunction) // @ game+0x38a7480
};

