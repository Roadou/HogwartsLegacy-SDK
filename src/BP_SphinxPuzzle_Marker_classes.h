// BlueprintGeneratedClass BP_SphinxPuzzle_Marker.BP_SphinxPuzzle_Marker_C
// Size: 0x340 (Inherited: 0x304)
struct ABP_SphinxPuzzle_Marker_C : ABP_Marker_Base_C {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	struct FVector Gazebo Location; // 0x318(0x0c)
	struct FVector Parent 0,0,0; // 0x324(0x0c)
	struct FString New DB Name; // 0x330(0x10)

	void UserConstructionScript(); // Function BP_SphinxPuzzle_Marker.BP_SphinxPuzzle_Marker_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SphinxPuzzle_Marker.BP_SphinxPuzzle_Marker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SphinxPuzzle_Marker(int32_t EntryPoint); // Function BP_SphinxPuzzle_Marker.BP_SphinxPuzzle_Marker_C.ExecuteUbergraph_BP_SphinxPuzzle_Marker // (Final|UbergraphFunction) // @ game+0x38a7480
};

