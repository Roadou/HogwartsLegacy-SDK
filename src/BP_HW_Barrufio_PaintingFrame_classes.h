// BlueprintGeneratedClass BP_HW_Barrufio_PaintingFrame.BP_HW_Barrufio_PaintingFrame_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_HW_Barrufio_PaintingFrame_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_HW_Barrufio_BG; // 0x250(0x08)
	struct UBoxComponent* AnimationTrigger_Box; // 0x258(0x08)
	struct USkeletalMeshComponent* SK_HW_Baruffio; // 0x260(0x08)
	struct UStaticMeshComponent* SM_Frame; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	struct AActor* EndOfDrawer; // 0x278(0x08)

	void SwitchOn(struct AActor* SwitchActor); // Function BP_HW_Barrufio_PaintingFrame.BP_HW_Barrufio_PaintingFrame_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_HW_Barrufio_PaintingFrame.BP_HW_Barrufio_PaintingFrame_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_HW_BAS_PaintingFrame_AnimationTrigger_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_HW_Barrufio_PaintingFrame.BP_HW_Barrufio_PaintingFrame_C.BndEvt__BP_HW_BAS_PaintingFrame_AnimationTrigger_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_HW_BAS_PaintingFrame_AnimationTrigger_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_HW_Barrufio_PaintingFrame.BP_HW_Barrufio_PaintingFrame_C.BndEvt__BP_HW_BAS_PaintingFrame_AnimationTrigger_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Barrufio_PaintingFrame(int32_t EntryPoint); // Function BP_HW_Barrufio_PaintingFrame.BP_HW_Barrufio_PaintingFrame_C.ExecuteUbergraph_BP_HW_Barrufio_PaintingFrame // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

