// AblAbilityBlueprintGeneratedClass ABL_StudentLumosLoop.ABL_StudentLumosLoop_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_StudentLumosLoop_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_StudentLumosLoop.ABL_StudentLumosLoop_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_StudentLumosLoop.ABL_StudentLumosLoop_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_StudentLumosLoop(int32_t EntryPoint); // Function ABL_StudentLumosLoop.ABL_StudentLumosLoop_C.ExecuteUbergraph_ABL_StudentLumosLoop // (Final|UbergraphFunction) // @ game+0x38a7480
};

