// BlueprintGeneratedClass BP_OL_BroomActivity_Marker_M.BP_OL_BroomActivity_Marker_M_C
// Size: 0x340 (Inherited: 0x304)
struct ABP_OL_BroomActivity_Marker_M_C : ABP_Marker_Base_C {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	struct UBillboardComponent* Billboard; // 0x318(0x08)
	struct FString VFXMarkerName; // 0x320(0x10)
	struct FString Name; // 0x330(0x10)

	void UserConstructionScript(); // Function BP_OL_BroomActivity_Marker_M.BP_OL_BroomActivity_Marker_M_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OL_BroomActivity_Marker_M.BP_OL_BroomActivity_Marker_M_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_BroomActivity_Marker_M(int32_t EntryPoint); // Function BP_OL_BroomActivity_Marker_M.BP_OL_BroomActivity_Marker_M_C.ExecuteUbergraph_BP_OL_BroomActivity_Marker_M // (Final|UbergraphFunction) // @ game+0x38a7480
};

