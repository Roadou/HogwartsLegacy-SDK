// BlueprintGeneratedClass WE_ENEMY_ENCOUNTER_INFERI.WE_ENEMY_ENCOUNTER_INFERI_C
// Size: 0x278 (Inherited: 0x250)
struct AWE_ENEMY_ENCOUNTER_INFERI_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct FGameplayTag Tag; // 0x258(0x08)
	struct TArray<struct FGameplayTag> LocatedTags; // 0x260(0x10)
	struct ADynamicObjectVolume* DynamicObjectVolume_1_ExecuteUbergraph_WE_ENEMY_ENCOUNTER_INFERI_RefProperty; // 0x270(0x08)

	void ReceiveBeginPlay(); // Function WE_ENEMY_ENCOUNTER_INFERI.WE_ENEMY_ENCOUNTER_INFERI_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_WE_ENEMY_ENCOUNTER_INFERI(int32_t EntryPoint); // Function WE_ENEMY_ENCOUNTER_INFERI.WE_ENEMY_ENCOUNTER_INFERI_C.ExecuteUbergraph_WE_ENEMY_ENCOUNTER_INFERI // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};
