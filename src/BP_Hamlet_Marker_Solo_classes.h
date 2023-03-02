// BlueprintGeneratedClass BP_Hamlet_Marker_Solo.BP_Hamlet_Marker_Solo_C
// Size: 0x359 (Inherited: 0x304)
struct ABP_Hamlet_Marker_Solo_C : ABP_Marker_Base_C {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	struct FString Hamlet Override Name; // 0x318(0x10)
	bool Has Vendor; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FString HamletNameFinal; // 0x330(0x10)
	float ChestRadiusCheck; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct FString Owner Name; // 0x348(0x10)
	bool Show Debug Sphere; // 0x358(0x01)

	void UpdateKIOOwnerData(); // Function BP_Hamlet_Marker_Solo.BP_Hamlet_Marker_Solo_C.UpdateKIOOwnerData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCURInfiltratorCoinOwnerData(); // Function BP_Hamlet_Marker_Solo.BP_Hamlet_Marker_Solo_C.UpdateCURInfiltratorCoinOwnerData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateChestOwnerData(); // Function BP_Hamlet_Marker_Solo.BP_Hamlet_Marker_Solo_C.UpdateChestOwnerData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Hamlet_Marker_Solo.BP_Hamlet_Marker_Solo_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Hamlet_Marker_Solo.BP_Hamlet_Marker_Solo_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Test Owner Name(); // Function BP_Hamlet_Marker_Solo.BP_Hamlet_Marker_Solo_C.Test Owner Name // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Hamlet_Marker_Solo(int32_t EntryPoint); // Function BP_Hamlet_Marker_Solo.BP_Hamlet_Marker_Solo_C.ExecuteUbergraph_BP_Hamlet_Marker_Solo // (Final|UbergraphFunction) // @ game+0x38a7480
};

