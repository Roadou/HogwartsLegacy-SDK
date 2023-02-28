// AblAbilityBlueprintGeneratedClass ABL_BlockedByWall_RightArm.ABL_BlockedByWall_RightArm_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_BlockedByWall_RightArm_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_BlockedByWall_RightArm.ABL_BlockedByWall_RightArm_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_BlockedByWall_RightArm.ABL_BlockedByWall_RightArm_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_BlockedByWall_RightArm(int32_t EntryPoint); // Function ABL_BlockedByWall_RightArm.ABL_BlockedByWall_RightArm_C.ExecuteUbergraph_ABL_BlockedByWall_RightArm // (Final|UbergraphFunction) // @ game+0x38a7480
};

