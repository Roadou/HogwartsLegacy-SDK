// BlueprintGeneratedClass BP_IncendioSpell.BP_IncendioSpell_C
// Size: 0x8d0 (Inherited: 0x8a8)
struct ABP_IncendioSpell_C : AIncendioSpellTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x8b0(0x08)
	struct TArray<struct UInteractionArchitectAsset*> In Munition Data Assets; // 0x8b8(0x10)
	struct UMultiFX2Asset* Multi FX2; // 0x8c8(0x08)

	void OnAffectTarget(struct AActor* Target, struct USceneComponent* Component, bool bInTargetAffected); // Function BP_IncendioSpell.BP_IncendioSpell_C.OnAffectTarget // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnStart(); // Function BP_IncendioSpell.BP_IncendioSpell_C.OnStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_IncendioSpell(int32_t EntryPoint); // Function BP_IncendioSpell.BP_IncendioSpell_C.ExecuteUbergraph_BP_IncendioSpell // (Final|UbergraphFunction) // @ game+0x38a7480
};

