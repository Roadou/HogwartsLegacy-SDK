// BlueprintGeneratedClass HN_AP_Mission.HN_AP_Mission_C
// Size: 0x2d0 (Inherited: 0x250)
struct AHN_AP_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ANone* MoonCalfBiscuitCage; // 0x258(0x08)
	struct ADynamicObjectVolume* COM_23_EncounterDOV; // 0x260(0x08)
	struct TArray<struct AActor*> COM_23 Spawned poachers; // 0x268(0x10)
	struct APerceptionPointBox* PerceptionBox; // 0x278(0x08)
	struct AActor* Biscuit Ref; // 0x280(0x08)
	struct UAkAudioEvent* Gate Crash AK; // 0x288(0x08)
	struct TSoftObjectPtr<ADynamicObjectVolume> _tech_EnemyDOV; // 0x290(0x28)
	struct ADynamicObjectVolume* SNS_03_DOV_FemaleThestral_HN_AP_ExecuteUbergraph_HN_AP_Mission_RefProperty; // 0x2b8(0x08)
	struct ADynamicObjectVolume* SNS_03_DOV_MaleThestral_HN_AP_ExecuteUbergraph_HN_AP_Mission_RefProperty; // 0x2c0(0x08)
	struct ANone* COM_23_MoonCalfCage_0_ExecuteUbergraph_HN_AP_Mission_RefProperty; // 0x2c8(0x08)

	void Biscuit's Cage Opened(struct AActor* Who); // Function HN_AP_Mission.HN_AP_Mission_C.Biscuit's Cage Opened // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PoacherSpawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AP_Mission.HN_AP_Mission_C.PoacherSpawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BiscuitSpawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AP_Mission.HN_AP_Mission_C.BiscuitSpawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SNS_03(); // Function HN_AP_Mission.HN_AP_Mission_C.SNS_03 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HN_AP_Mission.HN_AP_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SNS_03_Update(struct UObject* Caller, struct FName& String); // Function HN_AP_Mission.HN_AP_Mission_C.SNS_03_Update // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AllCOM23 Poachers dead Dialogue(); // Function HN_AP_Mission.HN_AP_Mission_C.AllCOM23 Poachers dead Dialogue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM23_PostLoadNavAdjsut(); // Function HN_AP_Mission.HN_AP_Mission_C.COM23_PostLoadNavAdjsut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HN_AP_Mission(int32_t EntryPoint); // Function HN_AP_Mission.HN_AP_Mission_C.ExecuteUbergraph_HN_AP_Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

