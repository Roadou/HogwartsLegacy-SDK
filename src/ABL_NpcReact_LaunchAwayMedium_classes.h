// AblAbilityBlueprintGeneratedClass ABL_NpcReact_LaunchAwayMedium.ABL_NpcReact_LaunchAwayMedium_C
// Size: 0xf0 (Inherited: 0xe0)
struct UABL_NpcReact_LaunchAwayMedium_C : UAblReactionAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	struct ACharacter* TempCharRef; // 0xe8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_NpcReact_LaunchAwayMedium.ABL_NpcReact_LaunchAwayMedium_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityEnd(struct UAblAbilityContext* Context); // Function ABL_NpcReact_LaunchAwayMedium.ABL_NpcReact_LaunchAwayMedium_C.OnAbilityEnd // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function ABL_NpcReact_LaunchAwayMedium.ABL_NpcReact_LaunchAwayMedium_C.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_NpcReact_LaunchAwayMedium.ABL_NpcReact_LaunchAwayMedium_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_NpcReact_LaunchAwayMedium(int32_t EntryPoint); // Function ABL_NpcReact_LaunchAwayMedium.ABL_NpcReact_LaunchAwayMedium_C.ExecuteUbergraph_ABL_NpcReact_LaunchAwayMedium // (Final|UbergraphFunction) // @ game+0x38a7480
};

