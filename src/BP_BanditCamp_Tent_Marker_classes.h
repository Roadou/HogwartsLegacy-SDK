// BlueprintGeneratedClass BP_BanditCamp_Tent_Marker.BP_BanditCamp_Tent_Marker_C
// Size: 0x350 (Inherited: 0x304)
struct ABP_BanditCamp_Tent_Marker_C : ANone {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	struct USceneComponent* Scene; // 0x318(0x08)
	struct FString Tile ID; // 0x320(0x10)
	struct FString Name; // 0x330(0x10)
	struct FString RootName; // 0x340(0x10)

	void UserConstructionScript(); // Function BP_BanditCamp_Tent_Marker.BP_BanditCamp_Tent_Marker_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BanditCamp_Tent_Marker.BP_BanditCamp_Tent_Marker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BanditCamp_Tent_Marker(int32_t EntryPoint); // Function BP_BanditCamp_Tent_Marker.BP_BanditCamp_Tent_Marker_C.ExecuteUbergraph_BP_BanditCamp_Tent_Marker // (Final|UbergraphFunction) // @ game+0x38a7480
};

