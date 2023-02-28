// AblAbilityBlueprintGeneratedClass ABL_HoverBroom_MountLand.ABL_HoverBroom_MountLand_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_HoverBroom_MountLand_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_HoverBroom_MountLand.ABL_HoverBroom_MountLand_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_HoverBroom_MountLand.ABL_HoverBroom_MountLand_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_HoverBroom_MountLand(int32_t EntryPoint); // Function ABL_HoverBroom_MountLand.ABL_HoverBroom_MountLand_C.ExecuteUbergraph_ABL_HoverBroom_MountLand // (Final|UbergraphFunction) // @ game+0x38a7480
};

