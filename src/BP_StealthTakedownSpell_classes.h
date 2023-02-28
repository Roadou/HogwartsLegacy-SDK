// BlueprintGeneratedClass BP_StealthTakedownSpell.BP_StealthTakedownSpell_C
// Size: 0x8c0 (Inherited: 0x8b0)
struct ABP_StealthTakedownSpell_C : AStupefySpellTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x8b8(0x08)

	void OnAffectTarget(struct AActor* Target, struct USceneComponent* Component, bool bInTargetAffected); // Function BP_StealthTakedownSpell.BP_StealthTakedownSpell_C.OnAffectTarget // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnStart(); // Function BP_StealthTakedownSpell.BP_StealthTakedownSpell_C.OnStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StealthTakedownSpell(int32_t EntryPoint); // Function BP_StealthTakedownSpell.BP_StealthTakedownSpell_C.ExecuteUbergraph_BP_StealthTakedownSpell // (Final|UbergraphFunction) // @ game+0x38a7480
};

