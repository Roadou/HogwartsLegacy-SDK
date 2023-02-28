// AblAbilityBlueprintGeneratedClass ABL_RCT_NPC_BounceUp.ABL_RCT_NPC_BounceUp_C
// Size: 0xe8 (Inherited: 0xe0)
struct UABL_RCT_NPC_BounceUp_C : UAblReactionAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_RCT_NPC_BounceUp.ABL_RCT_NPC_BounceUp_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityEnd(struct UAblAbilityContext* Context); // Function ABL_RCT_NPC_BounceUp.ABL_RCT_NPC_BounceUp_C.OnAbilityEnd // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function ABL_RCT_NPC_BounceUp.ABL_RCT_NPC_BounceUp_C.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_RCT_NPC_BounceUp.ABL_RCT_NPC_BounceUp_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_RCT_NPC_BounceUp(int32_t EntryPoint); // Function ABL_RCT_NPC_BounceUp.ABL_RCT_NPC_BounceUp_C.ExecuteUbergraph_ABL_RCT_NPC_BounceUp // (Final|UbergraphFunction) // @ game+0x38a7480
};

