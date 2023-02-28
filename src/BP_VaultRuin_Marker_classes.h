// BlueprintGeneratedClass BP_VaultRuin_Marker.BP_VaultRuin_Marker_C
// Size: 0x39c (Inherited: 0x304)
struct ABP_VaultRuin_Marker_C : ABP_Marker_Base_C {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	struct FString DoorName; // 0x318(0x10)
	struct TArray<struct FString> Out Actors; // 0x328(0x10)
	struct FString MetricsName; // 0x338(0x10)
	struct FString PuzzleVault_ChestType; // 0x348(0x10)
	struct FName SaveStatName; // 0x358(0x08)
	struct FString Underwater for KIO; // 0x360(0x10)
	struct FString Vault Name; // 0x370(0x10)
	float Chest Radius Check; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct FString PuzzleVaultChestName; // 0x388(0x10)
	bool Use New Marker; // 0x398(0x01)
	bool Bar Off; // 0x399(0x01)
	bool Text Off; // 0x39a(0x01)
	bool Show Debug Chest Owner Radius; // 0x39b(0x01)

	void AddBeaconToPuzzleVaultChests(); // Function BP_VaultRuin_Marker.BP_VaultRuin_Marker_C.AddBeaconToPuzzleVaultChests // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateVaultChestOwnerData(); // Function BP_VaultRuin_Marker.BP_VaultRuin_Marker_C.UpdateVaultChestOwnerData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_VaultRuin_Marker.BP_VaultRuin_Marker_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_VaultRuin_Marker.BP_VaultRuin_Marker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Report PuzzleVaultChestName(); // Function BP_VaultRuin_Marker.BP_VaultRuin_Marker_C.Report PuzzleVaultChestName // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_VaultRuin_Marker(int32_t EntryPoint); // Function BP_VaultRuin_Marker.BP_VaultRuin_Marker_C.ExecuteUbergraph_BP_VaultRuin_Marker // (Final|UbergraphFunction) // @ game+0x38a7480
};

