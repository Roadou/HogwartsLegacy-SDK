// BlueprintGeneratedClass WE_ICE_GARDEN_ARTWORK.WE_ICE_GARDEN_ARTWORK_C
// Size: 0x288 (Inherited: 0x250)
struct AWE_ICE_GARDEN_ARTWORK_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct FGameplayTagContainer SelectedWorldEventLocationTag; // 0x258(0x20)
	bool FoundLocationTag; // 0x278(0x01)
	bool FoundCreatureTag; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
	struct ADynamicObjectVolume* DynamicObjectVolume_ExecuteUbergraph_WE_ICE_GARDEN_ARTWORK_RefProperty; // 0x280(0x08)

	void HandleSpecifiedCreatures(struct FGameplayTag Selection); // Function WE_ICE_GARDEN_ARTWORK.WE_ICE_GARDEN_ARTWORK_C.HandleSpecifiedCreatures // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function WE_ICE_GARDEN_ARTWORK.WE_ICE_GARDEN_ARTWORK_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_WE_ICE_GARDEN_ARTWORK(int32_t EntryPoint); // Function WE_ICE_GARDEN_ARTWORK.WE_ICE_GARDEN_ARTWORK_C.ExecuteUbergraph_WE_ICE_GARDEN_ARTWORK // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

