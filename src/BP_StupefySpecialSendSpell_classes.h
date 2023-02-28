// BlueprintGeneratedClass BP_StupefySpecialSendSpell.BP_StupefySpecialSendSpell_C
// Size: 0x8c0 (Inherited: 0x8b0)
struct ABP_StupefySpecialSendSpell_C : AStupefySpellTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x8b8(0x08)

	void ReceiveBeginPlay(); // Function BP_StupefySpecialSendSpell.BP_StupefySpecialSendSpell_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnAffectTarget(struct AActor* Target, struct USceneComponent* Component, bool bInTargetAffected); // Function BP_StupefySpecialSendSpell.BP_StupefySpecialSendSpell_C.OnAffectTarget // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StupefySpecialSendSpell(int32_t EntryPoint); // Function BP_StupefySpecialSendSpell.BP_StupefySpecialSendSpell_C.ExecuteUbergraph_BP_StupefySpecialSendSpell // (Final|UbergraphFunction) // @ game+0x38a7480
};

