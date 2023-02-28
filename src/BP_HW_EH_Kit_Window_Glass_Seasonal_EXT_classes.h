// BlueprintGeneratedClass BP_HW_EH_Kit_Window_Glass_Seasonal_EXT.BP_HW_EH_Kit_Window_Glass_Seasonal_EXT_C
// Size: 0x450 (Inherited: 0x3f4)
struct ABP_HW_EH_Kit_Window_Glass_Seasonal_EXT_C : ABP_Window_Parent_C {
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct TMap<enum class ESeasonEnum, struct UStaticMesh*> SeasonMap; // 0x400(0x50)

	void ReceiveBeginPlay(); // Function BP_HW_EH_Kit_Window_Glass_Seasonal_EXT.BP_HW_EH_Kit_Window_Glass_Seasonal_EXT_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_EH_Kit_Window_Glass_Seasonal_EXT(int32_t EntryPoint); // Function BP_HW_EH_Kit_Window_Glass_Seasonal_EXT.BP_HW_EH_Kit_Window_Glass_Seasonal_EXT_C.ExecuteUbergraph_BP_HW_EH_Kit_Window_Glass_Seasonal_EXT // (Final|UbergraphFunction) // @ game+0x38a7480
};

