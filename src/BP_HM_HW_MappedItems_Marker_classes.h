// BlueprintGeneratedClass BP_HM_HW_MappedItems_Marker.BP_HM_HW_MappedItems_Marker_C
// Size: 0x348 (Inherited: 0x304)
struct ABP_HM_HW_MappedItems_Marker_C : ABP_Marker_Base_C {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	struct FString MarkerType; // 0x318(0x10)
	struct FString HW or HM; // 0x328(0x10)
	struct FString DungeonOwner; // 0x338(0x10)

	void UserConstructionScript(); // Function BP_HM_HW_MappedItems_Marker.BP_HM_HW_MappedItems_Marker_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HM_HW_MappedItems_Marker.BP_HM_HW_MappedItems_Marker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_HW_MappedItems_Marker(int32_t EntryPoint); // Function BP_HM_HW_MappedItems_Marker.BP_HM_HW_MappedItems_Marker_C.ExecuteUbergraph_BP_HM_HW_MappedItems_Marker // (Final|UbergraphFunction) // @ game+0x38a7480
};

