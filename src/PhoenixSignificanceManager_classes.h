// Class PhoenixSignificanceManager.Budgeter
// Size: 0x40 (Inherited: 0x28)
struct UBudgeter : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class PhoenixSignificanceManager.ClothBudgeter
// Size: 0x48 (Inherited: 0x40)
struct UClothBudgeter : UBudgeter {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class PhoenixSignificanceManager.ClothBudgeterInterface
// Size: 0x28 (Inherited: 0x28)
struct UClothBudgeterInterface : UInterface {
};

// Class PhoenixSignificanceManager.LODBudgeter
// Size: 0x48 (Inherited: 0x40)
struct ULODBudgeter : UBudgeter {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class PhoenixSignificanceManager.LODBudgeterInterface
// Size: 0x28 (Inherited: 0x28)
struct ULODBudgeterInterface : UInterface {
};

// Class PhoenixSignificanceManager.PhoenixBudgetedStaticMeshActor
// Size: 0x268 (Inherited: 0x258)
struct APhoenixBudgetedStaticMeshActor : AStaticMeshActor {
	char pad_258[0x8]; // 0x258(0x08)
	enum class ESignificanceBiasEnum DefaultSignificanceBias; // 0x260(0x01)
	bool bAllowRegistrationWithSignificanceManager; // 0x261(0x01)
	char pad_262[0x6]; // 0x262(0x06)
};

// Class PhoenixSignificanceManager.PhoenixSignificanceManager
// Size: 0x308 (Inherited: 0x28)
struct UPhoenixSignificanceManager : UObject {
	char pad_28[0xc8]; // 0x28(0xc8)
	struct TArray<struct UBudgeter*> Budgeters; // 0xf0(0x10)
	char pad_100[0x208]; // 0x100(0x208)

	bool SetObjectSignficanceBias(struct UObject* Object, enum class ESignificanceBiasEnum SignificanceBias); // Function PhoenixSignificanceManager.PhoenixSignificanceManager.SetObjectSignficanceBias // (Final|Native|Public|BlueprintCallable) // @ game+0x353d270
	void OnRegisteredActorDestroyed(struct AActor* DestroyedActor); // Function PhoenixSignificanceManager.PhoenixSignificanceManager.OnRegisteredActorDestroyed // (Final|Native|Private) // @ game+0x353d1e0
	struct UPhoenixSignificanceManager* GetSignificanceManager(struct UObject* WorldContextObject); // Function PhoenixSignificanceManager.PhoenixSignificanceManager.GetSignificanceManager // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x353d150
	float GetSignificance(struct UObject* Object); // Function PhoenixSignificanceManager.PhoenixSignificanceManager.GetSignificance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x353d0b0
};

// Class PhoenixSignificanceManager.SceneRigBudgeter
// Size: 0x68 (Inherited: 0x40)
struct USceneRigBudgeter : UBudgeter {
	char pad_40[0x28]; // 0x40(0x28)
};

// Class PhoenixSignificanceManager.SceneRigBudgeterInterface
// Size: 0x28 (Inherited: 0x28)
struct USceneRigBudgeterInterface : UInterface {
};

// Class PhoenixSignificanceManager.SignificanceInterface
// Size: 0x28 (Inherited: 0x28)
struct USignificanceInterface : UInterface {
};

