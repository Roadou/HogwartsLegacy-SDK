// BlueprintGeneratedClass BP_TransfigurationPreviewPlacementAnimator.BP_TransfigurationPreviewPlacementAnimator_C
// Size: 0x269 (Inherited: 0x258)
struct ABP_TransfigurationPreviewPlacementAnimator_C : ATransfigurationPlacementAnimator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x260(0x08)
	bool PreviewAttached; // 0x268(0x01)

	void AttachPreviewObject(struct ATransfigurationPreviewActor* InPreviewActor); // Function BP_TransfigurationPreviewPlacementAnimator.BP_TransfigurationPreviewPlacementAnimator_C.AttachPreviewObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DetachPreviewObject(); // Function BP_TransfigurationPreviewPlacementAnimator.BP_TransfigurationPreviewPlacementAnimator_C.DetachPreviewObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TransfigurationPreviewPlacementAnimator(int32_t EntryPoint); // Function BP_TransfigurationPreviewPlacementAnimator.BP_TransfigurationPreviewPlacementAnimator_C.ExecuteUbergraph_BP_TransfigurationPreviewPlacementAnimator // (Final|UbergraphFunction) // @ game+0x38a7480
};

