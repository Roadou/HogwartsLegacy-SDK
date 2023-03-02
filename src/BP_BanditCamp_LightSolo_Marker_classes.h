// BlueprintGeneratedClass BP_BanditCamp_LightSolo_Marker.BP_BanditCamp_LightSolo_Marker_C
// Size: 0x36d (Inherited: 0x304)
struct ABP_BanditCamp_LightSolo_Marker_C : ABP_Marker_Base_C {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	struct USceneComponent* Scene; // 0x318(0x08)
	struct FString Tile ID; // 0x320(0x10)
	struct FString Name; // 0x330(0x10)
	enum class E_AVA_BanditCamp_Medium_Types BanditCampType; // 0x340(0x01)
	bool Has Save Data; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct FString S is for Save; // 0x348(0x10)
	struct FString Root Name; // 0x358(0x10)
	float Chest Radius Check; // 0x368(0x04)
	bool Draw Debug Radus; // 0x36c(0x01)

	void UpdateBCLightChestOwnerData(); // Function BP_BanditCamp_LightSolo_Marker.BP_BanditCamp_LightSolo_Marker_C.UpdateBCLightChestOwnerData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_BanditCamp_LightSolo_Marker.BP_BanditCamp_LightSolo_Marker_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BanditCamp_LightSolo_Marker.BP_BanditCamp_LightSolo_Marker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BanditCamp_LightSolo_Marker(int32_t EntryPoint); // Function BP_BanditCamp_LightSolo_Marker.BP_BanditCamp_LightSolo_Marker_C.ExecuteUbergraph_BP_BanditCamp_LightSolo_Marker // (Final|UbergraphFunction) // @ game+0x38a7480
};

