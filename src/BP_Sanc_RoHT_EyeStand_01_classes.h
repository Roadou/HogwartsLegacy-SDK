// BlueprintGeneratedClass BP_Sanc_RoHT_EyeStand_01.BP_Sanc_RoHT_EyeStand_01_C
// Size: 0x282 (Inherited: 0x248)
struct ABP_Sanc_RoHT_EyeStand_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x250(0x08)
	struct USphereComponent* TriggerVolume; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float TriggerRadius; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct UABP_RoHT_EyeStand_C* AnimBlueprint; // 0x270(0x08)
	struct ABiped_Player* Player; // 0x278(0x08)
	bool bAsleep; // 0x280(0x01)
	bool bDisabled; // 0x281(0x01)

	void UserConstructionScript(); // Function BP_Sanc_RoHT_EyeStand_01.BP_Sanc_RoHT_EyeStand_01_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Sanc_RoHT_EyeStand_01.BP_Sanc_RoHT_EyeStand_01_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sanc_RoHT_EyeStand_01.BP_Sanc_RoHT_EyeStand_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Sanc_RoHT_EyeStand_01.BP_Sanc_RoHT_EyeStand_01_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void DisillusionmentStart(); // Function BP_Sanc_RoHT_EyeStand_01.BP_Sanc_RoHT_EyeStand_01_C.DisillusionmentStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisillusionmentEnd(); // Function BP_Sanc_RoHT_EyeStand_01.BP_Sanc_RoHT_EyeStand_01_C.DisillusionmentEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Enable(bool bEnable); // Function BP_Sanc_RoHT_EyeStand_01.BP_Sanc_RoHT_EyeStand_01_C.Enable // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanc_RoHT_EyeStand_01(int32_t EntryPoint); // Function BP_Sanc_RoHT_EyeStand_01.BP_Sanc_RoHT_EyeStand_01_C.ExecuteUbergraph_BP_Sanc_RoHT_EyeStand_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

