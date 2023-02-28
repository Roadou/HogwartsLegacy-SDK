// BlueprintGeneratedClass BP_WandTool.BP_WandTool_C
// Size: 0x6a8 (Inherited: 0x5c0)
struct ABP_WandTool_C : AWandTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct USkeletalMeshComponent* SK_Wand; // 0x5c8(0x08)
	struct FComboSplitData ComboSplitData; // 0x5d0(0x38)
	struct FTimerHandle FinisherTimerHandle; // 0x608(0x08)
	struct FTimerHandle ComboTimerHandle; // 0x610(0x08)
	struct FComboSplitData HeavyComboSplitData; // 0x618(0x38)
	struct FTimerHandle HeavyFinisherTimerHandle; // 0x650(0x08)
	struct FTimerHandle HeavyComboTimerHandle; // 0x658(0x08)
	struct UNiagaraComponent* ComboFinisherEffect; // 0x660(0x08)
	bool MothFollowing; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	struct ABP_OppugnoSpell_C* HardRefToOppugnoSpell; // 0x670(0x08)
	struct ABP_ExpelliarmusSpell_C* HardRefToExpelliarmusSpell; // 0x678(0x08)
	struct UDataTable* WandStyleData; // 0x680(0x08)
	struct USkeletalMesh* Current Wand Mesh Asset; // 0x688(0x08)
	struct UMaterialInstanceDynamic* Wand Dynamic Material; // 0x690(0x08)
	bool StarterWand; // 0x698(0x01)
	char pad_699[0x3]; // 0x699(0x03)
	float StarterWandProjectileSpeedMultiplier; // 0x69c(0x04)
	struct FName WandStyle; // 0x6a0(0x08)

	struct UMeshComponent* GetWandMesh(); // Function BP_WandTool.BP_WandTool_C.GetWandMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Create Wand(struct USkeletalMesh*& New Wand Mesh Asset, struct UTexture2D* TipDTexture, struct UTexture2D* TipNTexture, struct UTexture2D* TipMROTexture, struct UTexture2D* HandleDTexture, struct UTexture2D* HandleNTexture, struct UTexture2D* HandleMROTexture, bool Force, struct UMaterialInstanceDynamic*& Wand MID); // Function BP_WandTool.BP_WandTool_C.Create Wand // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Assign Skeletal Mesh Asset(struct USkinnedMeshComponent*& Mesh Component, struct USkeletalMesh*& Mesh Asset); // Function BP_WandTool.BP_WandTool_C.Assign Skeletal Mesh Asset // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WandTool.BP_WandTool_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_0055B6AC46721F5CE836AA9E366D0F29(struct UObject* Loaded); // Function BP_WandTool.BP_WandTool_C.OnLoaded_0055B6AC46721F5CE836AA9E366D0F29 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_227F03C34C43721E008652B57453C981(struct UObject* Loaded); // Function BP_WandTool.BP_WandTool_C.OnLoaded_227F03C34C43721E008652B57453C981 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_5867A7E746A9CA997A25E3AD69B69E55(struct UObject* Loaded); // Function BP_WandTool.BP_WandTool_C.OnLoaded_5867A7E746A9CA997A25E3AD69B69E55 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_37A9E9014EFC37E0A67828B37114B2E4(struct UObject* Loaded); // Function BP_WandTool.BP_WandTool_C.OnLoaded_37A9E9014EFC37E0A67828B37114B2E4 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_F3B947B4403481EDD5698AA143F14623(struct UObject* Loaded); // Function BP_WandTool.BP_WandTool_C.OnLoaded_F3B947B4403481EDD5698AA143F14623 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_BE44268D4D3D1064BB1C159231E445E0(struct UObject* Loaded); // Function BP_WandTool.BP_WandTool_C.OnLoaded_BE44268D4D3D1064BB1C159231E445E0 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_A0077CDF44E6650F785A2BAC001D7FA1(struct UObject* Loaded); // Function BP_WandTool.BP_WandTool_C.OnLoaded_A0077CDF44E6650F785A2BAC001D7FA1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinisherTimerElapsed(); // Function BP_WandTool.BP_WandTool_C.FinisherTimerElapsed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CancelComboSplitTimer(); // Function BP_WandTool.BP_WandTool_C.CancelComboSplitTimer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ComboTimerExpired(); // Function BP_WandTool.BP_WandTool_C.ComboTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartComboSplitTimer(struct FComboSplitData ComboSplitData); // Function BP_WandTool.BP_WandTool_C.StartComboSplitTimer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetCombos(); // Function BP_WandTool.BP_WandTool_C.ResetCombos // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WandTool.BP_WandTool_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StartHeavyComboSplitTimer(struct FComboSplitData ComboSplitData); // Function BP_WandTool.BP_WandTool_C.StartHeavyComboSplitTimer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HeavyFinisherTimerExpired(); // Function BP_WandTool.BP_WandTool_C.HeavyFinisherTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HeavyComboTimerExpired(); // Function BP_WandTool.BP_WandTool_C.HeavyComboTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideWand(struct UObject* Caller); // Function BP_WandTool.BP_WandTool_C.HideWand // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowWand(struct UObject* Caller); // Function BP_WandTool.BP_WandTool_C.ShowWand // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CancelHeavyComboSplitTimer(); // Function BP_WandTool.BP_WandTool_C.CancelHeavyComboSplitTimer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetLightCombo(); // Function BP_WandTool.BP_WandTool_C.ResetLightCombo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetHeavyCombo(); // Function BP_WandTool.BP_WandTool_C.ResetHeavyCombo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetWandStyle(struct FName WandStyle); // Function BP_WandTool.BP_WandTool_C.SetWandStyle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WandTool.BP_WandTool_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WandTool(int32_t EntryPoint); // Function BP_WandTool.BP_WandTool_C.ExecuteUbergraph_BP_WandTool // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

