// BlueprintGeneratedClass BP_CoinPouch.BP_CoinPouch_C
// Size: 0x368 (Inherited: 0x350)
struct ABP_CoinPouch_C : ABP_InventoryObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	int32_t Max Knut Count; // 0x358(0x04)
	int32_t Min Knut Count; // 0x35c(0x04)
	struct FRandomStream Random Seed; // 0x360(0x08)

	void UserConstructionScript(); // Function BP_CoinPouch.BP_CoinPouch_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_CoinPouch.BP_CoinPouch_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_CoinPouch.BP_CoinPouch_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ShowNonCinematicElements(struct UObject* Caller); // Function BP_CoinPouch.BP_CoinPouch_C.ShowNonCinematicElements // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideNonCinematicElements(struct UObject* Caller); // Function BP_CoinPouch.BP_CoinPouch_C.HideNonCinematicElements // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CoinPouch(int32_t EntryPoint); // Function BP_CoinPouch.BP_CoinPouch_C.ExecuteUbergraph_BP_CoinPouch // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

