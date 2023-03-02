// BlueprintGeneratedClass Combat_Challenge_OL_Ruins_B.Combat_Challenge_OL_Ruins_B_C
// Size: 0x338 (Inherited: 0x250)
struct ACombat_Challenge_OL_Ruins_B_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TSoftObjectPtr<UWorld> Level - Combat_Challenge_OL_Arena; // 0x258(0x28)
	bool levelisloaded; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge1_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x288(0x08)
	struct AStaticMeshActor* Cuber_Level_Locator_Ruins_OL_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x290(0x08)
	struct ASceneRigActor* CAM_TotemActivation_SR_2_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x298(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge20_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x2a0(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge19_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x2a8(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge18_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x2b0(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge17_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x2b8(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge16_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x2c0(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge15_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x2c8(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge14_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x2d0(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge13_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x2d8(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge12_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x2e0(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge11_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x2e8(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge10_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x2f0(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge9_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x2f8(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge8_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x300(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge7_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x308(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge6_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x310(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge5_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x318(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge4_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x320(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge3_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x328(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge2_ExecuteUbergraph_Combat_Challenge_OL_Ruins_B_RefProperty; // 0x330(0x08)

	void ReceiveBeginPlay(); // Function Combat_Challenge_OL_Ruins_B.Combat_Challenge_OL_Ruins_B_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Reloading(struct UObject* Caller); // Function Combat_Challenge_OL_Ruins_B.Combat_Challenge_OL_Ruins_B_C.Reloading // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadCombatChallenge(struct UObject* Caller); // Function Combat_Challenge_OL_Ruins_B.Combat_Challenge_OL_Ruins_B_C.LoadCombatChallenge // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CombatChallenge_B_LevelShown(); // Function Combat_Challenge_OL_Ruins_B.Combat_Challenge_OL_Ruins_B_C.CombatChallenge_B_LevelShown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CamCutTotemActivation(struct UObject* Caller); // Function Combat_Challenge_OL_Ruins_B.Combat_Challenge_OL_Ruins_B_C.CamCutTotemActivation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnActorBeginOverlap_Event_1(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Combat_Challenge_OL_Ruins_B.Combat_Challenge_OL_Ruins_B_C.OnActorBeginOverlap_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_Combat_Challenge_OL_Ruins_B(int32_t EntryPoint); // Function Combat_Challenge_OL_Ruins_B.Combat_Challenge_OL_Ruins_B_C.ExecuteUbergraph_Combat_Challenge_OL_Ruins_B // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

