// BlueprintGeneratedClass BP_HW_LightFixture_WallE.BP_HW_LightFixture_WallE_C
// Size: 0xb00 (Inherited: 0xaec)
struct ABP_HW_LightFixture_WallE_C : ABP_LightFixture_Master_C {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	struct UMaterialInterface* LightFuntion; // 0xaf8(0x08)

	void ReceiveBeginPlay(); // Function BP_HW_LightFixture_WallE.BP_HW_LightFixture_WallE_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_LightFixture_WallE(int32_t EntryPoint); // Function BP_HW_LightFixture_WallE.BP_HW_LightFixture_WallE_C.ExecuteUbergraph_BP_HW_LightFixture_WallE // (Final|UbergraphFunction) // @ game+0x38a7480
};

