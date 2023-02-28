// BlueprintGeneratedClass BP_SubSonic_Descendo.BP_SubSonic_Descendo_C
// Size: 0x5f4 (Inherited: 0x528)
struct ABP_SubSonic_Descendo_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UWindDirectionalSourceWithEnvelopeComponent* WindSource; // 0x530(0x08)
	struct UNiagaraComponent* N_Trail; // 0x538(0x08)
	struct AActor* TargetActor; // 0x540(0x08)
	bool HasTarget; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	float RadiusMin; // 0x54c(0x04)
	float RadiusMax; // 0x550(0x04)
	float Speed; // 0x554(0x04)
	struct FVector Velocity; // 0x558(0x0c)
	float FXOpacity; // 0x564(0x04)
	struct UMaterialInstanceDynamic* Mat_Proj01; // 0x568(0x08)
	struct UMaterialInstanceDynamic* Mat_Proj02; // 0x570(0x08)
	struct UMaterialInstanceDynamic* Mat_Proj03; // 0x578(0x08)
	float TimeInitial; // 0x580(0x04)
	char pad_584[0xc]; // 0x584(0x0c)
	struct FTransform ImpactTransform; // 0x590(0x30)
	struct FVector VelocityOrbiter; // 0x5c0(0x0c)
	float RotationRateMax; // 0x5cc(0x04)
	float HomingTime; // 0x5d0(0x04)
	float Radius; // 0x5d4(0x04)
	struct FVector Direction; // 0x5d8(0x0c)
	struct FVector Offset; // 0x5e4(0x0c)
	float LightIntensity; // 0x5f0(0x04)

	void GetVectorToTarget(struct FVector& DirectionToTarget, float& DistanceToTarget, struct FVector& LocationCenter, struct FVector& LocationTop, struct FVector& LocationBottom); // Function BP_SubSonic_Descendo.BP_SubSonic_Descendo_C.GetVectorToTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SubSonic_Descendo.BP_SubSonic_Descendo_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_Descendo.BP_SubSonic_Descendo_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_Descendo(int32_t EntryPoint); // Function BP_SubSonic_Descendo.BP_SubSonic_Descendo_C.ExecuteUbergraph_BP_SubSonic_Descendo // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

