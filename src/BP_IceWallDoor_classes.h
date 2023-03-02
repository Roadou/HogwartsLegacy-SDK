// BlueprintGeneratedClass BP_IceWallDoor.BP_IceWallDoor_C
// Size: 0x319 (Inherited: 0x248)
struct ABP_IceWallDoor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* InteractPoint; // 0x250(0x08)
	struct UStaticMeshComponent* Plane; // 0x258(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x260(0x08)
	struct USceneComponent* Scene; // 0x268(0x08)
	bool StartOff; // 0x270(0x01)
	bool VisibleAtStart; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct ASceneRigActor* EnterSceneRig; // 0x278(0x08)
	struct FMissionName MissionName; // 0x280(0x08)
	int32_t ProgressGoal; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FString RequiredMissionStep; // 0x290(0x10)
	struct FString MissionStepToComplete; // 0x2a0(0x10)
	bool MissionEditorFastTravel; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FFastTravelLocationName Location Name; // 0x2b4(0x08)
	enum class EFT_TravelType FastTravelType; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct FName SetMission; // 0x2c0(0x08)
	bool AlwaysOn; // 0x2c8(0x01)
	bool UseLocalTeleport; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct AActor* TeleportLocation; // 0x2d0(0x08)
	struct UMaterialInstanceDynamic* MAT_IceDoor; // 0x2d8(0x08)
	struct UTexture* VFX_Reflection_CubeMap; // 0x2e0(0x08)
	float VFX_Reflection_Brightness; // 0x2e8(0x04)
	struct FName BeaconID; // 0x2ec(0x08)
	struct FName BeaconWorld; // 0x2f4(0x08)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FString Beacon Name; // 0x300(0x10)
	int64_t BeaconHandle; // 0x310(0x08)
	enum class ERespawnReason Respawn Reason; // 0x318(0x01)

	struct FName GetUniqueBeaconId(); // Function BP_IceWallDoor.BP_IceWallDoor_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_IceWallDoor.BP_IceWallDoor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_IceWallDoor.BP_IceWallDoor_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVJ_01_CP4a_Updated(struct UObject* Caller, struct FName& String); // Function BP_IceWallDoor.BP_IceWallDoor_C.EVJ_01_CP4a_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_IceWallDoor.BP_IceWallDoor_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinishedPlaying(); // Function BP_IceWallDoor.BP_IceWallDoor_C.FinishedPlaying // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CompleteMissionStep(); // Function BP_IceWallDoor.BP_IceWallDoor_C.CompleteMissionStep // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVC_01_CP2_3_Updated(struct UObject* Caller, struct FName& String); // Function BP_IceWallDoor.BP_IceWallDoor_C.EVC_01_CP2_3_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FIG_07_SUB_Tomb2_Updated(struct UObject* Caller, struct FName& String); // Function BP_IceWallDoor.BP_IceWallDoor_C.FIG_07_SUB_Tomb2_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVT_01_CP5_Updated(struct UObject* Caller, struct FName& String); // Function BP_IceWallDoor.BP_IceWallDoor_C.EVT_01_CP5_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_IceWallDoor.BP_IceWallDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_IceWallDoor.BP_IceWallDoor_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ANone* AutosaveActor); // Function BP_IceWallDoor.BP_IceWallDoor_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PRC_01_CP4_End_Updated(struct UObject* Caller, struct FName& String); // Function BP_IceWallDoor.BP_IceWallDoor_C.PRC_01_CP4_End_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FGT_01_CP2_C_Updated(struct UObject* Caller, struct FName& String); // Function BP_IceWallDoor.BP_IceWallDoor_C.FGT_01_CP2_C_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnlockDoor(); // Function BP_IceWallDoor.BP_IceWallDoor_C.UnlockDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RegisterBeacon(); // Function BP_IceWallDoor.BP_IceWallDoor_C.RegisterBeacon // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnregisterBeacon(); // Function BP_IceWallDoor.BP_IceWallDoor_C.UnregisterBeacon // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ANone* AutosaveActor); // Function BP_IceWallDoor.BP_IceWallDoor_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_IceWallDoor(int32_t EntryPoint); // Function BP_IceWallDoor.BP_IceWallDoor_C.ExecuteUbergraph_BP_IceWallDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

