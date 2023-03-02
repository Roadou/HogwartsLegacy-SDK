// BlueprintGeneratedClass BP_OMB_TipHat.BP_OMB_TipHat_C
// Size: 0x315 (Inherited: 0x2f4)
struct ABP_OMB_TipHat_C : ABP_HW_PartialBody_Interaction_C {
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x300(0x08)
	struct USkeletalMeshComponentBudgeted* SkeletalMeshComponentBudgeted; // 0x308(0x08)
	int32_t Tip Amount (Knuts); // 0x310(0x04)
	bool EnoughMoney; // 0x314(0x01)

	void InteractionStarted(); // Function BP_OMB_TipHat.BP_OMB_TipHat_C.InteractionStarted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OMB_TipHat.BP_OMB_TipHat_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OMB_TipHat(int32_t EntryPoint); // Function BP_OMB_TipHat.BP_OMB_TipHat_C.ExecuteUbergraph_BP_OMB_TipHat // (Final|UbergraphFunction) // @ game+0x38a7480
};

