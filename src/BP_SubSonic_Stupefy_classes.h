// BlueprintGeneratedClass BP_SubSonic_Stupefy.BP_SubSonic_Stupefy_C
// Size: 0x574 (Inherited: 0x528)
struct ABP_SubSonic_Stupefy_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UNiagaraComponent* Splibbds; // 0x530(0x08)
	float ScaleValue; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct FTransform FieldTransform; // 0x540(0x30)
	float FieldRadius; // 0x570(0x04)

	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_Stupefy.BP_SubSonic_Stupefy_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SubSonic_Stupefy.BP_SubSonic_Stupefy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_Stupefy(int32_t EntryPoint); // Function BP_SubSonic_Stupefy.BP_SubSonic_Stupefy_C.ExecuteUbergraph_BP_SubSonic_Stupefy // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

