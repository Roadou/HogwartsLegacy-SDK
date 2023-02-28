// BlueprintGeneratedClass BP_SubSonic_Expulso.BP_SubSonic_Expulso_C
// Size: 0x594 (Inherited: 0x528)
struct ABP_SubSonic_Expulso_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UWindDirectionalSourceWithEnvelopeComponent* WindSource; // 0x530(0x08)
	struct UNiagaraComponent* Niagara; // 0x538(0x08)
	struct UMaterialInstanceDynamic* MAT_RibbonTRail; // 0x540(0x08)
	struct FVector LOC_Target; // 0x548(0x0c)
	char pad_554[0xc]; // 0x554(0x0c)
	struct FTransform FieldTransform; // 0x560(0x30)
	float Field Radius; // 0x590(0x04)

	void ReceiveBeginPlay(); // Function BP_SubSonic_Expulso.BP_SubSonic_Expulso_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_Expulso.BP_SubSonic_Expulso_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnFizzle(); // Function BP_SubSonic_Expulso.BP_SubSonic_Expulso_C.OnFizzle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_Expulso(int32_t EntryPoint); // Function BP_SubSonic_Expulso.BP_SubSonic_Expulso_C.ExecuteUbergraph_BP_SubSonic_Expulso // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

