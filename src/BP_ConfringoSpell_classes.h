// BlueprintGeneratedClass BP_ConfringoSpell.BP_ConfringoSpell_C
// Size: 0x9b8 (Inherited: 0x990)
struct ABP_ConfringoSpell_C : AConfringoSpellTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x990(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x998(0x08)
	struct TArray<struct UInteractionArchitectAsset*> In Munition Data Assets; // 0x9a0(0x10)
	struct UMultiFX2Asset* Multi FX2; // 0x9b0(0x08)

	void OnAffectTarget(struct AActor* Target, struct USceneComponent* Component, bool bInTargetAffected); // Function BP_ConfringoSpell.BP_ConfringoSpell_C.OnAffectTarget // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddOnFireDoT(struct AActor* Target); // Function BP_ConfringoSpell.BP_ConfringoSpell_C.AddOnFireDoT // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ConfringoSpell(int32_t EntryPoint); // Function BP_ConfringoSpell.BP_ConfringoSpell_C.ExecuteUbergraph_BP_ConfringoSpell // (Final|UbergraphFunction) // @ game+0x38a7480
};

