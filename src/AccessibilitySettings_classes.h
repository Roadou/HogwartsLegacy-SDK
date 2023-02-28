// Class AccessibilitySettings.AccessibilitySettings
// Size: 0x28 (Inherited: 0x28)
struct UAccessibilitySettings : UBlueprintFunctionLibrary {

	void HighContrastModeEnabled(enum class EHighContrastMode HighContrastMode, bool& bEnabled); // Function AccessibilitySettings.AccessibilitySettings.HighContrastModeEnabled // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13af9c0
	void GetHighContrastMode(int32_t& HighContrastMode); // Function AccessibilitySettings.AccessibilitySettings.GetHighContrastMode // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13af940
};

// Class AccessibilitySettings.HighContrastGameplayMarkupComponent
// Size: 0xc8 (Inherited: 0xc8)
struct UHighContrastGameplayMarkupComponent : UActorComponent {
};

// Class AccessibilitySettings.PerWorldAccessibilitySettings
// Size: 0x3b8 (Inherited: 0x248)
struct APerWorldAccessibilitySettings : AActor {
	struct UMaterialParameterCollection* HighContrastMPC; // 0x248(0x08)
	struct UMaterialParameterCollection* ExtraHighContrastMPC; // 0x250(0x08)
	struct TWeakObjectPtr<struct AActor> CurrentTarget; // 0x258(0x08)
	struct TWeakObjectPtr<struct AActor> OutlineTarget; // 0x260(0x08)
	int32_t TargetStencilValue; // 0x268(0x04)
	char pad_26C[0x8c]; // 0x26c(0x8c)
	struct TMap<struct TWeakObjectPtr<struct UPrimitiveComponent>, struct FHighContrastGameplayBucketPrimitiveState> PrimitiveStateBuckets; // 0x2f8(0x50)
	char pad_348[0x8]; // 0x348(0x08)
	struct TMap<struct TWeakObjectPtr<struct AActor>, uint32_t> MeshChangedActorMap; // 0x350(0x50)
	int32_t SetBaseStencilValue; // 0x3a0(0x04)
	int32_t LastSetTargetStencilValue; // 0x3a4(0x04)
	float LastFadeToBlackBlend; // 0x3a8(0x04)
	float LastExtraValue; // 0x3ac(0x04)
	float StateAlpha; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)

	void RemovePrimitiveFromHighContrastGameplayBuckets(struct UPrimitiveComponent* PrimitiveComponent); // Function AccessibilitySettings.PerWorldAccessibilitySettings.RemovePrimitiveFromHighContrastGameplayBuckets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13afcf0
	void RemoveActorFromHighContrastGameplayBuckets(struct AActor* Actor); // Function AccessibilitySettings.PerWorldAccessibilitySettings.RemoveActorFromHighContrastGameplayBuckets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13afc70
	void RemoveActorFromHighContrastGameplayBucket(struct AActor* Actor, enum class EHighContrastGameplayBucket Bucket); // Function AccessibilitySettings.PerWorldAccessibilitySettings.RemoveActorFromHighContrastGameplayBucket // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13afbb0
	void PrimitiveIsInHighContrastGameplayBucket(struct UPrimitiveComponent* PrimitiveComponent, enum class EHighContrastGameplayBucket& Bucket, bool& bFound); // Function AccessibilitySettings.PerWorldAccessibilitySettings.PrimitiveIsInHighContrastGameplayBucket // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13afa90
	void AddPrimitiveToHighContrastGameplayBucket(struct UPrimitiveComponent* PrimitiveComponent, enum class EHighContrastGameplayBucket Bucket); // Function AccessibilitySettings.PerWorldAccessibilitySettings.AddPrimitiveToHighContrastGameplayBucket // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13af880
	void AddActorToHighContrastGameplayBucket(struct AActor* Actor, enum class EHighContrastGameplayBucket Bucket); // Function AccessibilitySettings.PerWorldAccessibilitySettings.AddActorToHighContrastGameplayBucket // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13af7c0
	void ActorIsInHighContrastGameplayBucket(struct AActor* Actor, enum class EHighContrastGameplayBucket Bucket, bool& bFound); // Function AccessibilitySettings.PerWorldAccessibilitySettings.ActorIsInHighContrastGameplayBucket // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13af6b0
};

