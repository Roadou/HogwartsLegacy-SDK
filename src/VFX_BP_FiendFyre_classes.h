// BlueprintGeneratedClass VFX_BP_FiendFyre.VFX_BP_Fiendfyre_C
// Size: 0x2e0 (Inherited: 0x248)
struct AVFX_BP_Fiendfyre_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* Torso; // 0x250(0x08)
	struct UNiagaraComponent* Wings; // 0x258(0x08)
	struct UNiagaraComponent* BodyRibbonAura; // 0x260(0x08)
	struct UNiagaraComponent* WingRibbon_L_Fing1_Knuckle2; // 0x268(0x08)
	struct UNiagaraComponent* WingRibbon_L_Fing1_Knuckle1; // 0x270(0x08)
	struct UNiagaraComponent* WingRibbon_L_Wrist; // 0x278(0x08)
	struct UNiagaraComponent* WingRibbon_R_Fing1_Knuckle2; // 0x280(0x08)
	struct UNiagaraComponent* WingRibbon_R_Fing1_Knuckle1; // 0x288(0x08)
	struct UNiagaraComponent* WingRibbon_R_Wrist; // 0x290(0x08)
	struct UNiagaraComponent* Tail_3; // 0x298(0x08)
	struct UNiagaraComponent* Tail_2; // 0x2a0(0x08)
	struct UNiagaraComponent* Tail_4; // 0x2a8(0x08)
	struct UNiagaraComponent* Chest; // 0x2b0(0x08)
	struct UNiagaraComponent* head; // 0x2b8(0x08)
	struct UNiagaraComponent* Body_Tail; // 0x2c0(0x08)
	struct UNiagaraComponent* WingRibbon_R_WristDup; // 0x2c8(0x08)
	struct USkeletalMeshComponent* SK_FiendFire; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)

	void ReceiveTick(float DeltaSeconds); // Function VFX_BP_FiendFyre.VFX_BP_Fiendfyre_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Fiendfyre(int32_t EntryPoint); // Function VFX_BP_FiendFyre.VFX_BP_Fiendfyre_C.ExecuteUbergraph_VFX_BP_Fiendfyre // (Final|UbergraphFunction) // @ game+0x38a7480
};

