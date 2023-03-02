// BlueprintGeneratedClass HS_AH_Tech.HS_AH_Tech_C
// Size: 0x320 (Inherited: 0x250)
struct AHS_AH_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	int32_t CompeltedEVs; // 0x258(0x04)
	int32_t NumberOfEVs; // 0x25c(0x04)
	struct TArray<struct ANone*> WE_Carts; // 0x260(0x10)
	struct TArray<struct AActor*> Wave1Goblins; // 0x270(0x10)
	struct FName Her_01_CP07_MissionName; // 0x280(0x08)
	struct FString Her_01_CP07_InteractString; // 0x288(0x10)
	int32_t HER_BanditCampEnemiesKilled; // 0x298(0x04)
	bool Aware; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct AEncounterVolume* HS_AH_HER01_Freetime_EV_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x2a0(0x08)
	struct AEncounterVolume* HS_AH_HER01_Freetime2_EV_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x2a8(0x08)
	struct AEncounterVolume* HS_AH_HER01_Freetime3_EV_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x2b0(0x08)
	struct AEncounterVolume* HS_AH_HER01_Patrol1_EV_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x2b8(0x08)
	struct AEncounterVolume* HS_AH_HER01_Patrol2_EV_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x2c0(0x08)
	struct AEncounterVolume* HS_AH_HER01_Patrol3_EV_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x2c8(0x08)
	struct AEncounterVolume* HS_AH_HER01_Patrol4_EV_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x2d0(0x08)
	struct AEncounterVolume* HS_AH_HER01_Patrol5_EV_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x2d8(0x08)
	struct ADynamicObjectVolume* TowerWatch_HS_AN_LOC_Common_1_DOV_0_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x2e0(0x08)
	struct ADynamicObjectVolume* HS_AH_GC_COM_14_GoblinEvent_LOC_Common_1_DOV_0_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x2e8(0x08)
	struct ANone* BP_TentEntrance_2_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x2f0(0x08)
	struct AEncounterVolume* HS_AH_GC_COM_14_GoblinEvent_EV_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x2f8(0x08)
	struct ADynamicObjectVolume* HS_AH_GC_COM_14_GoblinEvent_LOC_Common_1_DOV_1_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x300(0x08)
	struct ADynamicObjectVolume* HS_AH_GC_COM_14_GoblinEvent_LOC_Common_1_DOV_2_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x308(0x08)
	struct ABP_Swing_Open_Gate_GobTempCamp_C* BP_Swing_Open_Gate_GobTempCamp_2_ExecuteUbergraph_HS_AH_Tech_RefProperty; // 0x310(0x08)
	struct ANone* BP_AutosaveTrigger_2_EdGraph_1_RefProperty; // 0x318(0x08)

	void CheckBanditCampCleared(); // Function HS_AH_Tech.HS_AH_Tech_C.CheckBanditCampCleared // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Delegate_TentInteracted(); // Function HS_AH_Tech.HS_AH_Tech_C.Delegate_TentInteracted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HS_AH_Tech.HS_AH_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void HER_01_Updated(struct UObject* Caller, struct FName& String); // Function HS_AH_Tech.HS_AH_Tech_C.HER_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AllEnemiesDead(); // Function HS_AH_Tech.HS_AH_Tech_C.AllEnemiesDead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchedOn(); // Function HS_AH_Tech.HS_AH_Tech_C.SwitchedOn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LookoutDead(); // Function HS_AH_Tech.HS_AH_Tech_C.LookoutDead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AllEnemiesSpawned(); // Function HS_AH_Tech.HS_AH_Tech_C.AllEnemiesSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFleshLoadComplete(struct AActor* Actor); // Function HS_AH_Tech.HS_AH_Tech_C.OnFleshLoadComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Play Wave 2 dialogue(struct AActor* SpawnedActor, struct FName& GroupName); // Function HS_AH_Tech.HS_AH_Tech_C.Play Wave 2 dialogue // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SplineMoverCart(struct UObject* Caller, struct AActor* Actor); // Function HS_AH_Tech.HS_AH_Tech_C.SplineMoverCart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoblinWave1Spawn(struct AActor* SpawnedActor, struct FName& GroupName); // Function HS_AH_Tech.HS_AH_Tech_C.GoblinWave1Spawn // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AH_Tech_TriggerBox2_3_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HS_AH_Tech.HS_AH_Tech_C.BndEvt__HS_AH_Tech_TriggerBox2_3_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void HER_01_CP07_Updated(struct UObject* Caller, struct FName& String); // Function HS_AH_Tech.HS_AH_Tech_C.HER_01_CP07_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Play GoblinsDefeatedDialogue(); // Function HS_AH_Tech.HS_AH_Tech_C.Play GoblinsDefeatedDialogue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HS_AH_BanditCamp_Complete(struct UObject* Caller); // Function HS_AH_Tech.HS_AH_Tech_C.HS_AH_BanditCamp_Complete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Bind On All Enemies Spawned(); // Function HS_AH_Tech.HS_AH_Tech_C.Bind On All Enemies Spawned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Bind On All Enemies Dead(); // Function HS_AH_Tech.HS_AH_Tech_C.Bind On All Enemies Dead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Enemies Ignore Archie Bickle(); // Function HS_AH_Tech.HS_AH_Tech_C.Enemies Ignore Archie Bickle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Setup COM_14 Goblin Camp(); // Function HS_AH_Tech.HS_AH_Tech_C.Setup COM_14 Goblin Camp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Setup Lookout Event(); // Function HS_AH_Tech.HS_AH_Tech_C.Setup Lookout Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Bind On Bandit Camp Complete(); // Function HS_AH_Tech.HS_AH_Tech_C.Bind On Bandit Camp Complete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Bind On HER_01_CP07 Updated(); // Function HS_AH_Tech.HS_AH_Tech_C.Bind On HER_01_CP07 Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_14_Updated(struct UObject* Caller, struct FName& String); // Function HS_AH_Tech.HS_AH_Tech_C.COM_14_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_14_Status(); // Function HS_AH_Tech.HS_AH_Tech_C.COM_14_Status // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void First Line Complete(); // Function HS_AH_Tech.HS_AH_Tech_C.First Line Complete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void 2nd Line Complete(); // Function HS_AH_Tech.HS_AH_Tech_C.2nd Line Complete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AH_Tech_HS_AH_BanditCamp_Exterior02_LOC_Patrol_1_DOV_0_K2Node_ActorBoundEvent_3_AllEnemiesDeadEvent__DelegateSignature(); // Function HS_AH_Tech.HS_AH_Tech_C.BndEvt__HS_AH_Tech_HS_AH_BanditCamp_Exterior02_LOC_Patrol_1_DOV_0_K2Node_ActorBoundEvent_3_AllEnemiesDeadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void GateOpened(); // Function HS_AH_Tech.HS_AH_Tech_C.GateOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_AH_Tech(int32_t EntryPoint); // Function HS_AH_Tech.HS_AH_Tech_C.ExecuteUbergraph_HS_AH_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

