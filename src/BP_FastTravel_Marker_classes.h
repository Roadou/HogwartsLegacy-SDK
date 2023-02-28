// BlueprintGeneratedClass BP_FastTravel_Marker.BP_FastTravel_Marker_C
// Size: 0x33c (Inherited: 0x304)
struct ABP_FastTravel_Marker_C : ABP_Marker_Base_C {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	struct USceneComponent* Scene; // 0x318(0x08)
	bool Show DB Name; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	struct FVector PlayerSpawnLocation; // 0x324(0x0c)
	struct FRotator Player Spawn Rotation; // 0x330(0x0c)

	void UpdateDB(); // Function BP_FastTravel_Marker.BP_FastTravel_Marker_C.UpdateDB // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_FastTravel_Marker.BP_FastTravel_Marker_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FastTravel_Marker.BP_FastTravel_Marker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ForceUpdateFastTravelLocation(struct UObject* Caller); // Function BP_FastTravel_Marker.BP_FastTravel_Marker_C.ForceUpdateFastTravelLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FastTravel_Marker(int32_t EntryPoint); // Function BP_FastTravel_Marker.BP_FastTravel_Marker_C.ExecuteUbergraph_BP_FastTravel_Marker // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

