// BlueprintGeneratedClass BP_SubSonic_SmallAttack_DW_Thief.BP_SubSonic_SmallAttack_DW_Thief_C
// Size: 0x554 (Inherited: 0x528)
struct ABP_SubSonic_SmallAttack_DW_Thief_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UNiagaraComponent* Niagara Proj; // 0x530(0x08)
	struct UParticleSystemComponent* P_Stupify_3dProj_Splibs; // 0x538(0x08)
	struct UParticleSystemComponent* P_Stupify_3dProj_LensFlair; // 0x540(0x08)
	struct USkeletalMeshComponent* VFX_SK_Stupify_Pro_Rig; // 0x548(0x08)
	float ScaleValue; // 0x550(0x04)

	void ReceiveBeginPlay(); // Function BP_SubSonic_SmallAttack_DW_Thief.BP_SubSonic_SmallAttack_DW_Thief_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_SmallAttack_DW_Thief(int32_t EntryPoint); // Function BP_SubSonic_SmallAttack_DW_Thief.BP_SubSonic_SmallAttack_DW_Thief_C.ExecuteUbergraph_BP_SubSonic_SmallAttack_DW_Thief // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

