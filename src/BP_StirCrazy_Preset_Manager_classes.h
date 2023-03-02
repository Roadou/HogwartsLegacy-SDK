// BlueprintGeneratedClass BP_StirCrazy_Preset_Manager.BP_StirCrazy_Preset_Manager_C
// Size: 0x350 (Inherited: 0x280)
struct ABP_StirCrazy_Preset_Manager_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct TArray<struct ABP_StirCrazy_Master_Preset_C*> Stove_A_Presets; // 0x290(0x10)
	struct TArray<struct ABP_StirCrazy_Master_Preset_C*> Stove_BB_Presets; // 0x2a0(0x10)
	struct TArray<struct ABP_StirCrazy_Master_Preset_C*> Stove_B_Presets; // 0x2b0(0x10)
	struct TArray<struct ABP_StirCrazy_Master_Preset_C*> Stove_Teashop_Presets; // 0x2c0(0x10)
	struct AActor* Hit_Actor; // 0x2d0(0x08)
	struct FString Hit_Actor_Name; // 0x2d8(0x10)
	char pad_2E8[0x8]; // 0x2e8(0x08)
	struct FTransform Hit_Actor_Transform; // 0x2f0(0x30)
	struct TArray<struct FName> Fetched_Rows; // 0x320(0x10)
	struct UDataTable* DataTable_REF; // 0x330(0x08)
	struct TArray<struct FGameplayTag> Gameplay Tags; // 0x338(0x10)
	struct ABP_StirCrazy_Master_Preset_C* Random Element; // 0x348(0x08)

	struct FString Debug_Hit_Actor(struct AActor* Hit_Object); // Function BP_StirCrazy_Preset_Manager.BP_StirCrazy_Preset_Manager_C.Debug_Hit_Actor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Detect_Stove(); // Function BP_StirCrazy_Preset_Manager.BP_StirCrazy_Preset_Manager_C.Detect_Stove // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_StirCrazy_Preset_Manager.BP_StirCrazy_Preset_Manager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Setup_Cauldrons(); // Function BP_StirCrazy_Preset_Manager.BP_StirCrazy_Preset_Manager_C.Setup_Cauldrons // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Setup_Mugs(); // Function BP_StirCrazy_Preset_Manager.BP_StirCrazy_Preset_Manager_C.Setup_Mugs // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupCooking(); // Function BP_StirCrazy_Preset_Manager.BP_StirCrazy_Preset_Manager_C.SetupCooking // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StirCrazy_Preset_Manager(int32_t EntryPoint); // Function BP_StirCrazy_Preset_Manager.BP_StirCrazy_Preset_Manager_C.ExecuteUbergraph_BP_StirCrazy_Preset_Manager // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

