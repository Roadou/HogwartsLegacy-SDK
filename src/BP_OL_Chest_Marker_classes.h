// BlueprintGeneratedClass BP_OL_Chest_Marker.BP_OL_Chest_Marker_C
// Size: 0x319 (Inherited: 0x304)
struct ABP_OL_Chest_Marker_C : ABP_Marker_Base_C {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	enum class E_OL_ChestType E_OL_ChestType; // 0x318(0x01)

	void UserConstructionScript(); // Function BP_OL_Chest_Marker.BP_OL_Chest_Marker_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OL_Chest_Marker.BP_OL_Chest_Marker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_Chest_Marker(int32_t EntryPoint); // Function BP_OL_Chest_Marker.BP_OL_Chest_Marker_C.ExecuteUbergraph_BP_OL_Chest_Marker // (Final|UbergraphFunction) // @ game+0x38a7480
};

