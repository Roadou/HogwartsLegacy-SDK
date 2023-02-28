// AblAbilityBlueprintGeneratedClass ABL_HoverBroom_Stop.ABL_HoverBroom_Stop_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_HoverBroom_Stop_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_HoverBroom_Stop.ABL_HoverBroom_Stop_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_HoverBroom_Stop.ABL_HoverBroom_Stop_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_HoverBroom_Stop(int32_t EntryPoint); // Function ABL_HoverBroom_Stop.ABL_HoverBroom_Stop_C.ExecuteUbergraph_ABL_HoverBroom_Stop // (Final|UbergraphFunction) // @ game+0x38a7480
};

