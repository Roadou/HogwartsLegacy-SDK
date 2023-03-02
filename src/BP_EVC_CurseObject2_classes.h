// BlueprintGeneratedClass BP_EVC_CurseObject2.BP_EVC_CurseObject2_C
// Size: 0x3c0 (Inherited: 0x371)
struct ABP_EVC_CurseObject2_C : ANone {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x380(0x08)
	struct UBoxComponent* Box; // 0x388(0x08)
	struct UStaticMeshComponent* Frame; // 0x390(0x08)
	struct FText ObjectName; // 0x398(0x18)
	struct FMulticastInlineDelegate InteractedWith; // 0x3b0(0x10)

	void ReceiveBeginPlay(); // Function BP_EVC_CurseObject2.BP_EVC_CurseObject2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_EVC_CurseObject2.BP_EVC_CurseObject2_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_EVC_CurseObject2(int32_t EntryPoint); // Function BP_EVC_CurseObject2.BP_EVC_CurseObject2_C.ExecuteUbergraph_BP_EVC_CurseObject2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void InteractedWith__DelegateSignature(); // Function BP_EVC_CurseObject2.BP_EVC_CurseObject2_C.InteractedWith__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

