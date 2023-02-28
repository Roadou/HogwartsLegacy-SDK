// BlueprintGeneratedClass BP_DisillusionmentSpell.BP_DisillusionmentSpell_C
// Size: 0x868 (Inherited: 0x850)
struct ABP_DisillusionmentSpell_C : ADisillusionmentSpellTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x850(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x858(0x08)
	struct ABP_StealthTakedownSpell_C* RefToStealthTakedown; // 0x860(0x08)

	void OnDisillusionmentEnd(); // Function BP_DisillusionmentSpell.BP_DisillusionmentSpell_C.OnDisillusionmentEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDisillusionmentStart(); // Function BP_DisillusionmentSpell.BP_DisillusionmentSpell_C.OnDisillusionmentStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DisillusionmentSpell(int32_t EntryPoint); // Function BP_DisillusionmentSpell.BP_DisillusionmentSpell_C.ExecuteUbergraph_BP_DisillusionmentSpell // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

