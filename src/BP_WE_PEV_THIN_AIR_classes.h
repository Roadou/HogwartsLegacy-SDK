// BlueprintGeneratedClass BP_WE_PEV_THIN_AIR.BP_WE_PEV_THIN_AIR_C
// Size: 0x2c8 (Inherited: 0x280)
struct ABP_WE_PEV_THIN_AIR_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ABP_Station_C* StudentStation; // 0x290(0x08)
	struct ABP_DB_Lightweight_Character_C* Peeves; // 0x298(0x08)
	struct ATriggerSphere* JumpScareTriggerRef; // 0x2a0(0x08)
	struct UScheduledEntity* StudentHoboSE; // 0x2a8(0x08)
	struct UCustomizableCharacterComponent* CustomizationComponent; // 0x2b0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2b8(0x08)
	bool AdmireDialoguePlaying; // 0x2c0(0x01)
	bool PlayerInRadius; // 0x2c1(0x01)
	bool PeevesLoaded; // 0x2c2(0x01)
	char pad_2C3[0x1]; // 0x2c3(0x01)
	int32_t StudentExitDialogue; // 0x2c4(0x04)

	void DestroyStation(); // Function BP_WE_PEV_THIN_AIR.BP_WE_PEV_THIN_AIR_C.DestroyStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PutHoboInStation(); // Function BP_WE_PEV_THIN_AIR.BP_WE_PEV_THIN_AIR_C.PutHoboInStation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerJumpscareEvent(); // Function BP_WE_PEV_THIN_AIR.BP_WE_PEV_THIN_AIR_C.TriggerJumpscareEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCharacterLoaded(struct AActor* Character); // Function BP_WE_PEV_THIN_AIR.BP_WE_PEV_THIN_AIR_C.OnCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_PEV_THIN_AIR.BP_WE_PEV_THIN_AIR_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_WE_PEV_THIN_AIR_JumpScareTriggerRef_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_WE_PEV_THIN_AIR.BP_WE_PEV_THIN_AIR_C.BndEvt__BP_WE_PEV_THIN_AIR_JumpScareTriggerRef_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PlayExitDialogue(); // Function BP_WE_PEV_THIN_AIR.BP_WE_PEV_THIN_AIR_C.PlayExitDialogue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStudentFleshLoaded(struct AActor* Actor); // Function BP_WE_PEV_THIN_AIR.BP_WE_PEV_THIN_AIR_C.OnStudentFleshLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_PEV_THIN_AIR.BP_WE_PEV_THIN_AIR_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_PEV_THIN_AIR(int32_t EntryPoint); // Function BP_WE_PEV_THIN_AIR.BP_WE_PEV_THIN_AIR_C.ExecuteUbergraph_BP_WE_PEV_THIN_AIR // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

