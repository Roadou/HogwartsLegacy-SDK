// BlueprintGeneratedClass HN_AO_Mission.HN_AO_Mission_C
// Size: 0x290 (Inherited: 0x250)
struct AHN_AO_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct FString Defeat_NamedInferi; // 0x258(0x10)
	struct FString Get_Item_B; // 0x268(0x10)
	struct FString Get_Item; // 0x278(0x10)
	struct ADynamicObjectVolume* COM_10_NamedInferi_LOC_Patrol_1_DOV_ExecuteUbergraph_HN_AO_Mission_RefProperty; // 0x288(0x08)

	void ReceiveBeginPlay(); // Function HN_AO_Mission.HN_AO_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void COM_10_NamedInferi_Dead(); // Function HN_AO_Mission.HN_AO_Mission_C.COM_10_NamedInferi_Dead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_10_BardolphSpawned(); // Function HN_AO_Mission.HN_AO_Mission_C.COM_10_BardolphSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HN_AO_Mission(int32_t EntryPoint); // Function HN_AO_Mission.HN_AO_Mission_C.ExecuteUbergraph_HN_AO_Mission // (Final|UbergraphFunction) // @ game+0x38a7480
};

