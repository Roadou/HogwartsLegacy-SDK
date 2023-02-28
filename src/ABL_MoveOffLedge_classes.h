// AblAbilityBlueprintGeneratedClass ABL_MoveOffLedge.ABL_MoveOffLedge_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_MoveOffLedge_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_MoveOffLedge.ABL_MoveOffLedge_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_MoveOffLedge.ABL_MoveOffLedge_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_MoveOffLedge(int32_t EntryPoint); // Function ABL_MoveOffLedge.ABL_MoveOffLedge_C.ExecuteUbergraph_ABL_MoveOffLedge // (Final|UbergraphFunction) // @ game+0x38a7480
};

