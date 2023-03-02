// BlueprintGeneratedClass BP_ClusterRuin_Marker.BP_ClusterRuin_Marker_C
// Size: 0x32a (Inherited: 0x304)
struct ABP_ClusterRuin_Marker_C : ANone {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	struct FString Size; // 0x318(0x10)
	enum class E_OL_ClusterRuin_Size Ruin Size; // 0x328(0x01)
	bool Marker OFF; // 0x329(0x01)

	void UserConstructionScript(); // Function BP_ClusterRuin_Marker.BP_ClusterRuin_Marker_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ClusterRuin_Marker.BP_ClusterRuin_Marker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ClusterRuin_Marker(int32_t EntryPoint); // Function BP_ClusterRuin_Marker.BP_ClusterRuin_Marker_C.ExecuteUbergraph_BP_ClusterRuin_Marker // (Final|UbergraphFunction) // @ game+0x38a7480
};

