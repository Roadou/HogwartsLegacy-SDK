// BlueprintGeneratedClass BP_OppugnoSpell.BP_OppugnoSpell_C
// Size: 0xc68 (Inherited: 0xc48)
struct ABP_OppugnoSpell_C : AOppugnoSpellTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc48(0x08)
	struct UAkComponent* Ak_audio location; // 0xc50(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0xc58(0x08)
	struct UCameraShakeBase* CamShake; // 0xc60(0x08)

	void ReceiveBeginPlay(); // Function BP_OppugnoSpell.BP_OppugnoSpell_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnCastSpell(struct AActor* Target, struct FVector& Location, struct FVector& MuzzleLocation); // Function BP_OppugnoSpell.BP_OppugnoSpell_C.OnCastSpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OppugnoSpell(int32_t EntryPoint); // Function BP_OppugnoSpell.BP_OppugnoSpell_C.ExecuteUbergraph_BP_OppugnoSpell // (Final|UbergraphFunction) // @ game+0x38a7480
};

