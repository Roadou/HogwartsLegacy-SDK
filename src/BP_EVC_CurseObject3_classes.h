// BlueprintGeneratedClass BP_EVC_CurseObject3.BP_EVC_CurseObject3_C
// Size: 0x3e0 (Inherited: 0x371)
struct ABP_EVC_CurseObject3_C : ANone {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UStaticMeshComponent* SM_WP_Goblin_Shield; // 0x380(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x388(0x08)
	struct UStaticMeshComponent* WP_GoblinSword_02; // 0x390(0x08)
	struct UStaticMeshComponent* Weaponrack; // 0x398(0x08)
	struct FText ObjectName; // 0x3a0(0x18)
	struct FString Talk to BirdBath; // 0x3b8(0x10)
	struct AActor* LookAtTarget; // 0x3c8(0x08)
	struct FMulticastInlineDelegate InteractedWith; // 0x3d0(0x10)

	void ReceiveBeginPlay(); // Function BP_EVC_CurseObject3.BP_EVC_CurseObject3_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_EVC_CurseObject3.BP_EVC_CurseObject3_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_EVC_CurseObject3(int32_t EntryPoint); // Function BP_EVC_CurseObject3.BP_EVC_CurseObject3_C.ExecuteUbergraph_BP_EVC_CurseObject3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void InteractedWith__DelegateSignature(); // Function BP_EVC_CurseObject3.BP_EVC_CurseObject3_C.InteractedWith__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

