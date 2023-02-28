// Enum Munitions.EPhysicsMunitionHitType
enum class EPhysicsMunitionHitType : uint8 {
	Success = 0,
	Blocked = 1,
	Terrain = 2,
	EPhysicsMunitionHitType_MAX = 3
};

// ScriptStruct Munitions.MunitionImpactData
// Size: 0xf0 (Inherited: 0x00)
struct FMunitionImpactData {
	struct FHitResult m_hitResult; // 0x00(0x88)
	struct AActor* m_pMunitionActor; // 0x88(0x08)
	struct AActor* m_pMunitionOwner; // 0x90(0x08)
	struct AActor* m_pInstigator; // 0x98(0x08)
	struct TArray<struct UInteractionArchitectAsset*> m_impactDataAssets; // 0xa0(0x10)
	struct FName MunitionImpactType; // 0xb0(0x08)
	struct FGameplayTagContainer MunitionTagContainer; // 0xb8(0x20)
	struct UDamageType* DamageTypeClass; // 0xd8(0x08)
	float m_damage; // 0xe0(0x04)
	float m_maxDamage; // 0xe4(0x04)
	float CharacterDamage; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct Munitions.TargetedByMunition
// Size: 0x30 (Inherited: 0x00)
struct FTargetedByMunition {
	struct AActor* InstigatorPtr; // 0x00(0x08)
	float TimeToReachDest; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* MunitionPtr; // 0x10(0x08)
	bool Deflection; // 0x18(0x01)
	bool bPerfect; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	struct FVector Velocity; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Munitions.MunitionToInstigatorData
// Size: 0x18 (Inherited: 0x00)
struct FMunitionToInstigatorData {
	struct AActor* InstigatorPtr; // 0x00(0x08)
	struct AActor* VictimPtr; // 0x08(0x08)
	struct AMunitionType_Base* MunitionBasePtr; // 0x10(0x08)
};

