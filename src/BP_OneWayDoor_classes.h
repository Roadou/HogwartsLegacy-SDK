// BlueprintGeneratedClass BP_OneWayDoor.BP_OneWayDoor_C
// Size: 0x2cd (Inherited: 0x248)
struct ABP_OneWayDoor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_CastleDun_Column_F_B1; // 0x250(0x08)
	struct UStaticMeshComponent* SM_CastleDun_Column_F_B; // 0x258(0x08)
	struct UStaticMeshComponent* SM_CastleDun_GoblinDoor_A_Frame; // 0x260(0x08)
	struct UStaticMeshComponent* SM_CastleDun_BeamBracket_A2; // 0x268(0x08)
	struct UStaticMeshComponent* SM_CastleDun_BeamBracket_A3; // 0x270(0x08)
	struct UStaticMeshComponent* SM_CastleDun_BeamBracket_A1; // 0x278(0x08)
	struct UStaticMeshComponent* SM_CastleDun_BeamBracket_A; // 0x280(0x08)
	struct UChildActorComponent* BP_CampB_2m_PostA; // 0x288(0x08)
	struct UStaticMeshComponent* SM_C_Dun_Gob_Door_Lt; // 0x290(0x08)
	struct UStaticMeshComponent* SM_C_Dun_Gob_Door_Rt; // 0x298(0x08)
	struct USceneComponent* Scene1; // 0x2a0(0x08)
	struct USceneComponent* Root; // 0x2a8(0x08)
	float Open_NewTrack_0_115CD9FE4C8BC96F0A87E19EA4C3A035; // 0x2b0(0x04)
	enum class ETimelineDirection Open__Direction_115CD9FE4C8BC96F0A87E19EA4C3A035; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* Open; // 0x2b8(0x08)
	float OpenAmount; // 0x2c0(0x04)
	struct FName Stat; // 0x2c4(0x08)
	bool NoBeam; // 0x2cc(0x01)

	void UserConstructionScript(); // Function BP_OneWayDoor.BP_OneWayDoor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Open__FinishedFunc(); // Function BP_OneWayDoor.BP_OneWayDoor_C.Open__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Open__UpdateFunc(); // Function BP_OneWayDoor.BP_OneWayDoor_C.Open__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Open__AudioTrigger2__EventFunc(); // Function BP_OneWayDoor.BP_OneWayDoor_C.Open__AudioTrigger2__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Open__audio_triger__EventFunc(); // Function BP_OneWayDoor.BP_OneWayDoor_C.Open__audio_triger__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OneWayDoor.BP_OneWayDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Broken_Event_2(); // Function BP_OneWayDoor.BP_OneWayDoor_C.Broken_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_OneWayDoor.BP_OneWayDoor_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_OneWayDoor.BP_OneWayDoor_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceOpen(); // Function BP_OneWayDoor.BP_OneWayDoor_C.ForceOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_OneWayDoor.BP_OneWayDoor_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_OneWayDoor.BP_OneWayDoor_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OneWayDoor(int32_t EntryPoint); // Function BP_OneWayDoor.BP_OneWayDoor_C.ExecuteUbergraph_BP_OneWayDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

