// BlueprintGeneratedClass BP_HW_GorgonPainting.BP_HW_GorgonPainting_C
// Size: 0x300 (Inherited: 0x2d8)
struct ABP_HW_GorgonPainting_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2e0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2f0(0x08)
	struct UMaterialInterface* Material; // 0x2f8(0x08)

	void InteractionInitiated(); // Function BP_HW_GorgonPainting.BP_HW_GorgonPainting_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ResetCog(); // Function BP_HW_GorgonPainting.BP_HW_GorgonPainting_C.ResetCog // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_GorgonPainting(int32_t EntryPoint); // Function BP_HW_GorgonPainting.BP_HW_GorgonPainting_C.ExecuteUbergraph_BP_HW_GorgonPainting // (Final|UbergraphFunction) // @ game+0x38a7480
};

