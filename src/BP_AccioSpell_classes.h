// BlueprintGeneratedClass BP_AccioSpell.BP_AccioSpell_C
// Size: 0xb10 (Inherited: 0xae0)
struct ABP_AccioSpell_C : AAccioSpellTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xae0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0xae8(0x08)
	struct UInputComponent* Parent Input Component; // 0xaf0(0x08)
	struct ASpellTool* BonusSpellTool; // 0xaf8(0x08)
	struct UNiagaraComponent* N_TrailBeam; // 0xb00(0x08)
	struct UNiagaraComponent* ActiveBeam; // 0xb08(0x08)

	void ReceiveBeginPlay(); // Function BP_AccioSpell.BP_AccioSpell_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AccioSpell(int32_t EntryPoint); // Function BP_AccioSpell.BP_AccioSpell_C.ExecuteUbergraph_BP_AccioSpell // (Final|UbergraphFunction) // @ game+0x38a7480
};

