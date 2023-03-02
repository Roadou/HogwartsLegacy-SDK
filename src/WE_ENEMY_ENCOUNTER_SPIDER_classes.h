// BlueprintGeneratedClass WE_ENEMY_ENCOUNTER_SPIDER.WE_ENEMY_ENCOUNTER_SPIDER_C
// Size: 0x278 (Inherited: 0x250)
struct AWE_ENEMY_ENCOUNTER_SPIDER_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct FGameplayTag Tag; // 0x258(0x08)
	struct TArray<struct FGameplayTag> LocatedTags; // 0x260(0x10)
	struct ADynamicObjectVolume* DynamicObjectVolume_1_ExecuteUbergraph_WE_ENEMY_ENCOUNTER_SPIDER_RefProperty; // 0x270(0x08)

	void ReceiveBeginPlay(); // Function WE_ENEMY_ENCOUNTER_SPIDER.WE_ENEMY_ENCOUNTER_SPIDER_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_WE_ENEMY_ENCOUNTER_SPIDER(int32_t EntryPoint); // Function WE_ENEMY_ENCOUNTER_SPIDER.WE_ENEMY_ENCOUNTER_SPIDER_C.ExecuteUbergraph_WE_ENEMY_ENCOUNTER_SPIDER // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

