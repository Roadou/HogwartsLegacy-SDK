// BlueprintGeneratedClass BP_HM_Braizer_D.BP_HM_Braizer_D_C
// Size: 0xb00 (Inherited: 0xaec)
struct ABP_HM_Braizer_D_C : ABP_LightFixture_Master_C {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	struct UStaticMeshComponent* Embers; // 0xaf8(0x08)

	void ReceiveBeginPlay(); // Function BP_HM_Braizer_D.BP_HM_Braizer_D_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_Braizer_D(int32_t EntryPoint); // Function BP_HM_Braizer_D.BP_HM_Braizer_D_C.ExecuteUbergraph_BP_HM_Braizer_D // (Final|UbergraphFunction) // @ game+0x38a7480
};

