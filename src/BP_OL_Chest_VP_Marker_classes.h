// BlueprintGeneratedClass BP_OL_Chest_VP_Marker.BP_OL_Chest_VP_Marker_C
// Size: 0x348 (Inherited: 0x304)
struct ABP_OL_Chest_VP_Marker_C : ABP_Marker_Base_C {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	float Radius; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FString Puzzle Vault Chest Name; // 0x320(0x10)
	int32_t beaconCount; // 0x330(0x04)
	bool Show Debug Radius; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct FString Vault Name; // 0x338(0x10)

	void UserConstructionScript(); // Function BP_OL_Chest_VP_Marker.BP_OL_Chest_VP_Marker_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OL_Chest_VP_Marker.BP_OL_Chest_VP_Marker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Gett Beacon(); // Function BP_OL_Chest_VP_Marker.BP_OL_Chest_VP_Marker_C.Gett Beacon // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_Chest_VP_Marker(int32_t EntryPoint); // Function BP_OL_Chest_VP_Marker.BP_OL_Chest_VP_Marker_C.ExecuteUbergraph_BP_OL_Chest_VP_Marker // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

