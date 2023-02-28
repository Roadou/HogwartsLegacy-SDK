// BlueprintGeneratedClass BP_SubSonic_Flipendo.BP_SubSonic_Flipendo_C
// Size: 0x584 (Inherited: 0x528)
struct ABP_SubSonic_Flipendo_C : AMunitionType_SubsonicSpell {
	struct UNiagaraComponent* Flip B; // 0x528(0x08)
	struct UNiagaraComponent* Flip A; // 0x530(0x08)
	struct USkeletalMeshComponent* VFX_SK_Pro_Swivle_Flip; // 0x538(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x540(0x08)
	struct AActor* Target; // 0x548(0x08)
	bool HasTarget; // 0x550(0x01)
	char pad_551[0x3]; // 0x551(0x03)
	struct FVector Velocity; // 0x554(0x0c)
	float Speed; // 0x560(0x04)
	float DistanceMin; // 0x564(0x04)
	float DistanceMax; // 0x568(0x04)
	struct FVector Direction; // 0x56c(0x0c)
	struct FVector Offset; // 0x578(0x0c)
};

