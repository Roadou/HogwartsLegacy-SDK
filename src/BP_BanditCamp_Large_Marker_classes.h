// BlueprintGeneratedClass BP_BanditCamp_Large_Marker.BP_BanditCamp_Large_Marker_C
// Size: 0x365 (Inherited: 0x304)
struct ABP_BanditCamp_Large_Marker_C : ABP_Marker_Base_C {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	struct FString Tile ID; // 0x318(0x10)
	struct FString Name; // 0x328(0x10)
	struct FString RootName; // 0x338(0x10)
	bool Has Save Data; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FString S is for Save; // 0x350(0x10)
	float Chest Radius Check; // 0x360(0x04)
	bool Show Debug Sphere; // 0x364(0x01)

	void UpdateBanditCastleChestOwnerData(); // Function BP_BanditCamp_Large_Marker.BP_BanditCamp_Large_Marker_C.UpdateBanditCastleChestOwnerData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_BanditCamp_Large_Marker.BP_BanditCamp_Large_Marker_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BanditCamp_Large_Marker.BP_BanditCamp_Large_Marker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CampBeaconComplete(struct UObject* Caller, struct FString String); // Function BP_BanditCamp_Large_Marker.BP_BanditCamp_Large_Marker_C.CampBeaconComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BanditCamp_Large_Marker(int32_t EntryPoint); // Function BP_BanditCamp_Large_Marker.BP_BanditCamp_Large_Marker_C.ExecuteUbergraph_BP_BanditCamp_Large_Marker // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

