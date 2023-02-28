// BlueprintGeneratedClass BP_HW_Light_Lamp_EXT_C.BP_HW_Light_Lamp_EXT_C_C
// Size: 0xb00 (Inherited: 0xaec)
struct ABP_HW_Light_Lamp_EXT_C_C : ABP_LightFixture_Master_C {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	struct USeasonSelectorComponent* SeasonSelector; // 0xaf8(0x08)

	void ReceiveBeginPlay(); // Function BP_HW_Light_Lamp_EXT_C.BP_HW_Light_Lamp_EXT_C_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Light_Lamp_EXT_C(int32_t EntryPoint); // Function BP_HW_Light_Lamp_EXT_C.BP_HW_Light_Lamp_EXT_C_C.ExecuteUbergraph_BP_HW_Light_Lamp_EXT_C // (Final|UbergraphFunction) // @ game+0x38a7480
};

