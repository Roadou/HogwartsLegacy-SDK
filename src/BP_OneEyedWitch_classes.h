// BlueprintGeneratedClass BP_OneEyedWitch.BP_OneEyedWitch_C
// Size: 0x289 (Inherited: 0x248)
struct ABP_OneEyedWitch_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* Box; // 0x250(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x258(0x08)
	struct UObjectStateComponent* ObjectState; // 0x260(0x08)
	struct USceneComponent* Scene; // 0x268(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	struct ASceneRigActor* SRACTor; // 0x280(0x08)
	bool debugNoTravel; // 0x288(0x01)

	void Check All GDW Missions(bool& GDWs Inactive); // Function BP_OneEyedWitch.BP_OneEyedWitch_C.Check All GDW Missions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_OneEyedWitch.BP_OneEyedWitch_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_OneEyedWitch.BP_OneEyedWitch_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OneEyedWitch.BP_OneEyedWitch_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void COM_07_updated(struct UObject* Caller, struct FName& String); // Function BP_OneEyedWitch.BP_OneEyedWitch_C.COM_07_updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenDungeonLevel(struct UObject* Caller); // Function BP_OneEyedWitch.BP_OneEyedWitch_C.OpenDungeonLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GDW_01_Updated(struct UObject* Caller, struct FName& String); // Function BP_OneEyedWitch.BP_OneEyedWitch_C.GDW_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinishedHandlerBackupLevelOpen(); // Function BP_OneEyedWitch.BP_OneEyedWitch_C.FinishedHandlerBackupLevelOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OneEyedWitch(int32_t EntryPoint); // Function BP_OneEyedWitch.BP_OneEyedWitch_C.ExecuteUbergraph_BP_OneEyedWitch // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

