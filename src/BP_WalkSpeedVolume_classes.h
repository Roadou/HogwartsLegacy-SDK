// BlueprintGeneratedClass BP_WalkSpeedVolume.BP_WalkSpeedVolume_C
// Size: 0x289 (Inherited: 0x248)
struct ABP_WalkSpeedVolume_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBillboardComponent* Billboard; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x258(0x08)
	enum class E_Hog_CamTriggerShape TrigShape; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct ABiped_Player* Player; // 0x268(0x08)
	struct ABP_XS_Rock_C* ToDestroy; // 0x270(0x08)
	enum class ETargetSpeedMode Speed; // 0x278(0x01)
	enum class ETargetSpeedMode SpeedModifier; // 0x279(0x01)
	bool No Jump; // 0x27a(0x01)
	bool Overlapped; // 0x27b(0x01)
	bool No Dodge; // 0x27c(0x01)
	bool NoSprint; // 0x27d(0x01)
	bool CasualMode; // 0x27e(0x01)
	char pad_27F[0x1]; // 0x27f(0x01)
	int32_t Delta; // 0x280(0x04)
	int32_t StackValue; // 0x284(0x04)
	bool EndPlayCalled; // 0x288(0x01)

	void SetContexts(struct ABiped_Character* InActor, int32_t InDelta); // Function BP_WalkSpeedVolume.BP_WalkSpeedVolume_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopSpeedMode(struct AActor* InputPin); // Function BP_WalkSpeedVolume.BP_WalkSpeedVolume_C.PopSpeedMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PushSpeedMode(struct AActor* InActor); // Function BP_WalkSpeedVolume.BP_WalkSpeedVolume_C.PushSpeedMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WalkSpeedVolume.BP_WalkSpeedVolume_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WalkSpeedVolume.BP_WalkSpeedVolume_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WalkSpeedVolume.BP_WalkSpeedVolume_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WalkSpeedVolume.BP_WalkSpeedVolume_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_WalkSpeedVolume.BP_WalkSpeedVolume_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_WalkSpeedVolume.BP_WalkSpeedVolume_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WalkSpeedVolume.BP_WalkSpeedVolume_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WalkSpeedVolume(int32_t EntryPoint); // Function BP_WalkSpeedVolume.BP_WalkSpeedVolume_C.ExecuteUbergraph_BP_WalkSpeedVolume // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

