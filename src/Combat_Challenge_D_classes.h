// BlueprintGeneratedClass Combat_Challenge_D.Combat_Challenge_D_C
// Size: 0x338 (Inherited: 0x250)
struct ACombat_Challenge_D_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TSoftObjectPtr<UWorld> Level - Combat_Challenge_D_OL_Arena; // 0x258(0x28)
	bool levelisloaded; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct AStaticMeshActor* Cuber_Level_Locator_Challenge_D_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x288(0x08)
	struct ASceneRigActor* CAM_TotemActivation_CCD_SR_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x290(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D20_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x298(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D19_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x2a0(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D18_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x2a8(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D17_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x2b0(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D16_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x2b8(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D15_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x2c0(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D14_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x2c8(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D13_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x2d0(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D12_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x2d8(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D11_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x2e0(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D10_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x2e8(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D9_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x2f0(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D8_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x2f8(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D7_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x300(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D6_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x308(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D5_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x310(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D4_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x318(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D3_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x320(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D2_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x328(0x08)
	struct ABP_Vase_CombatChallenge_C* BP_Vase_CombatChallenge_D1_ExecuteUbergraph_Combat_Challenge_D_RefProperty; // 0x330(0x08)

	void ReceiveBeginPlay(); // Function Combat_Challenge_D.Combat_Challenge_D_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Reloading(struct UObject* Caller); // Function Combat_Challenge_D.Combat_Challenge_D_C.Reloading // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadCombatChallenge(struct UObject* Caller); // Function Combat_Challenge_D.Combat_Challenge_D_C.LoadCombatChallenge // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CombatChallenge_B_LevelShown(); // Function Combat_Challenge_D.Combat_Challenge_D_C.CombatChallenge_B_LevelShown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CamCutTotemActivation(struct UObject* Caller); // Function Combat_Challenge_D.Combat_Challenge_D_C.CamCutTotemActivation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnActorBeginOverlap_Event_1(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Combat_Challenge_D.Combat_Challenge_D_C.OnActorBeginOverlap_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_Combat_Challenge_D(int32_t EntryPoint); // Function Combat_Challenge_D.Combat_Challenge_D_C.ExecuteUbergraph_Combat_Challenge_D // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

