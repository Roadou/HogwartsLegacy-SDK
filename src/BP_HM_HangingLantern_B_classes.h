// BlueprintGeneratedClass BP_HM_HangingLantern_B.BP_HM_HangingLantern_B_C
// Size: 0xb00 (Inherited: 0xaec)
struct ABP_HM_HangingLantern_B_C : ABP_LightFixture_Master_C {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	struct UStaticMeshComponent* SM_BCProps_RopeKnot_A; // 0xaf8(0x08)

	void ReceiveBeginPlay(); // Function BP_HM_HangingLantern_B.BP_HM_HangingLantern_B_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_HangingLantern_B(int32_t EntryPoint); // Function BP_HM_HangingLantern_B.BP_HM_HangingLantern_B_C.ExecuteUbergraph_BP_HM_HangingLantern_B // (Final|UbergraphFunction) // @ game+0x38a7480
};

