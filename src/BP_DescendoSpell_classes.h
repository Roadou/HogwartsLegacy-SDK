// BlueprintGeneratedClass BP_DescendoSpell.BP_DescendoSpell_C
// Size: 0x900 (Inherited: 0x8f0)
struct ABP_DescendoSpell_C : ADescendoSpellTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8f0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x8f8(0x08)

	void OnCanAffectTarget(struct AActor* Target, bool bInCanAffectTarget); // Function BP_DescendoSpell.BP_DescendoSpell_C.OnCanAffectTarget // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DescendoSpell(int32_t EntryPoint); // Function BP_DescendoSpell.BP_DescendoSpell_C.ExecuteUbergraph_BP_DescendoSpell // (Final|UbergraphFunction) // @ game+0x38a7480
};

