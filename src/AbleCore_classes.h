// Class AbleCore.Able_AnimInstance
// Size: 0x510 (Inherited: 0x2c0)
struct UAble_AnimInstance : UAnimationArchitect_AnimInstance {
	struct TMap<struct UAnimSequence*, float> MapSequenceToPhaseVote; // 0x2c0(0x50)
	bool InIdle; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct TArray<struct UAblAnimationModifier*> AnimationModifiers; // 0x318(0x10)
	struct FVector DesiredWorldDirection; // 0x328(0x0c)
	struct FVector LastDesiredWorldDirection; // 0x334(0x0c)
	float DesiredWorldSpeed; // 0x340(0x04)
	float RateMultiplierOverride; // 0x344(0x04)
	float FixedYawRemaining; // 0x348(0x04)
	float FixedYawOffset; // 0x34c(0x04)
	float FixedYawSampleTime; // 0x350(0x04)
	char pad_354[0x1a4]; // 0x354(0x1a4)
	struct UAblAbilityComponent* AbleAbilityComponent; // 0x4f8(0x08)
	char pad_500[0x10]; // 0x500(0x10)

	void Set_LastDesiredWorldDirection(struct FVector InWorldDirection); // Function AbleCore.Able_AnimInstance.Set_LastDesiredWorldDirection // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19f6260
	void Set_FixedYaw(float InFixedYawRemaining, float InFixedYawOffset, float SampleTime); // Function AbleCore.Able_AnimInstance.Set_FixedYaw // (Native|Public|BlueprintCallable) // @ game+0x19f6140
	void Set_DesiredWorldSpeed(float InSpeed); // Function AbleCore.Able_AnimInstance.Set_DesiredWorldSpeed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19f60b0
	void Set_DesiredWorldDirection(struct FVector InWorldDirection); // Function AbleCore.Able_AnimInstance.Set_DesiredWorldDirection // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19f6020
	void Get_LastDesiredWorldDirection(struct FVector& OutWorldDirection); // Function AbleCore.Able_AnimInstance.Get_LastDesiredWorldDirection // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19f5b00
	void Get_FixedYawSampleTime(float& OutFixedYawSampleTime); // Function AbleCore.Able_AnimInstance.Get_FixedYawSampleTime // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19f5a60
	void Get_FixedYawRemaining(float& OutFixedYawRemaining); // Function AbleCore.Able_AnimInstance.Get_FixedYawRemaining // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19f59c0
	void Get_FixedYawOffset(float& OutFixedYawOffset); // Function AbleCore.Able_AnimInstance.Get_FixedYawOffset // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19f5920
	void Get_DesiredWorldSpeed(float& OutSpeed); // Function AbleCore.Able_AnimInstance.Get_DesiredWorldSpeed // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19f5880
	void Get_DesiredWorldDirection(struct FVector& OutWorldDirection); // Function AbleCore.Able_AnimInstance.Get_DesiredWorldDirection // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19f57f0
};

// Class AbleCore.Able_Character
// Size: 0x540 (Inherited: 0x4f0)
struct AAble_Character : AAnimationArchitect_Character {
	char pad_4F0[0x8]; // 0x4f0(0x08)
	struct FGameplayTag GameplayHierarchyTag; // 0x4f8(0x08)
	struct UAblAbilityComponent* AblAbilityComponent; // 0x500(0x08)
	struct URagdollControlComponent* RagdollControlComponent; // 0x508(0x08)
	char pad_510[0x18]; // 0x510(0x18)
	struct UAblPhysicalBodyManager* PhysicalBodyManager; // 0x528(0x08)
	char pad_530[0x10]; // 0x530(0x10)

	bool PlayAbilityByClass(struct FName InAbilityChannelName, struct UObject* InAblAbilitClass, struct AActor* InInstigator); // Function AbleCore.Able_Character.PlayAbilityByClass // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19f5e70
	bool GetAbilityWithMultipleAssetsAndTags(struct FGameplayTagContainer& InSourceTagContainer, struct TArray<struct UInteractionArchitectAsset*>& InArchitectAssets, struct TArray<struct FGameplayTagContainer>& InArchitectTags, enum class EInteractionProject Project, bool& bOutIsAdditive, struct UAblAbility*& OutAbilityClass); // Function AbleCore.Able_Character.GetAbilityWithMultipleAssetsAndTags // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19f50f0
	bool GetAbilityWithMultipleAssets(struct FGameplayTagContainer& InSourceTagContainer, struct TArray<struct UInteractionArchitectAsset*>& InArchitectAssets, struct FGameplayTagContainer& InArchitectTagContainer, enum class EInteractionProject Project, bool& bOutIsAdditive, struct UAblAbility*& OutAbilityClass); // Function AbleCore.Able_Character.GetAbilityWithMultipleAssets // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19f4e60
	bool GetAbilityFromInteractionArchitect(struct FGameplayTagContainer& InSourceTagContainer, struct UInteractionArchitectAsset* InArchitectAsset, struct FGameplayTagContainer& InArchitectTagContainer, enum class EInteractionProject Project, bool& bOutIsAdditive, struct UAblAbility*& OutAbilityClass); // Function AbleCore.Able_Character.GetAbilityFromInteractionArchitect // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19f4bf0
	bool ExecuteAbilityOnChannelByClass(struct FName ChannelName, struct UObject* InAblAbilitClass, struct AActor* InInstigator); // Function AbleCore.Able_Character.ExecuteAbilityOnChannelByClass // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19f4ad0
	bool ExecuteAbilityByClass(struct UObject* InAblAbilitClass, struct AActor* InInstigator); // Function AbleCore.Able_Character.ExecuteAbilityByClass // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19f4a00
	void CancelAbilityByContext(struct UAblAbilityContext* InAblAbilityContext); // Function AbleCore.Able_Character.CancelAbilityByContext // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19f48d0
	void CancelAbilityByChannel(struct FName InAbilityChannelName); // Function AbleCore.Able_Character.CancelAbilityByChannel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19f4840
};

// Class AbleCore.Able_MovementComponent
// Size: 0xb40 (Inherited: 0xb30)
struct UAble_MovementComponent : UCharacterMovementComponent {
	struct TArray<struct URootMotionModifier*> RootMotionModifierArray; // 0xb30(0x10)

	void RemoveRootMotionModifier(struct URootMotionModifierProperties* InRootMotionModifierProperties); // Function AbleCore.Able_MovementComponent.RemoveRootMotionModifier // (Native|Public|BlueprintCallable) // @ game+0x19f5f90
	struct URootMotionModifier* AddRootMotionModifier(struct URootMotionModifierProperties* InRootMotionModifierProperties, struct AActor* Instigator, float Duration); // Function AbleCore.Able_MovementComponent.AddRootMotionModifier // (Native|Public|BlueprintCallable) // @ game+0x19f4720
};

// Class AbleCore.AblAnimationAssetChooser
// Size: 0x48 (Inherited: 0x28)
struct UAblAnimationAssetChooser : UObject {
	struct TArray<struct UAnimationAsset*> AnimationAssets; // 0x28(0x10)
	struct TArray<struct FGameplayTagContainer> AnimationTags; // 0x38(0x10)
};

// Class AbleCore.AbleHUD
// Size: 0x338 (Inherited: 0x338)
struct AAbleHUD : APreloadArchitectHUD {

	void UpdateDebugTarget(); // Function AbleCore.AbleHUD.UpdateDebugTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x1074730
	void ToggleAbleHUD(); // Function AbleCore.AbleHUD.ToggleAbleHUD // (Final|Native|Public|BlueprintCallable) // @ game+0x19f62f0
	void SetTarget(struct AActor* InActor); // Function AbleCore.AbleHUD.SetTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x1480ed0
};

// Class AbleCore.AblAbility
// Size: 0xc8 (Inherited: 0x28)
struct UAblAbility : UObject {
	float m_Length; // 0x28(0x04)
	float m_Cooldown; // 0x2c(0x04)
	float m_PlayRate; // 0x30(0x04)
	bool m_bOverrideGlobalPlayRate; // 0x34(0x01)
	bool m_IsPassive; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	int32_t m_MaxStacks; // 0x38(0x04)
	bool m_RefreshDurationOnNewStack; // 0x3c(0x01)
	bool m_AlwaysRefreshDuration; // 0x3d(0x01)
	bool m_OnlyRefreshLoopTime; // 0x3e(0x01)
	bool m_RequiresAllTasksComplete; // 0x3f(0x01)
	bool m_Loop; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float m_LoopStart; // 0x44(0x04)
	float m_LoopEnd; // 0x48(0x04)
	uint32_t m_LoopMaxIterations; // 0x4c(0x04)
	bool m_RequiresTarget; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UAblTargetingBase* m_Targeting; // 0x58(0x08)
	bool m_IsChanneled; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct UAblChannelingBase*> m_ChannelConditions; // 0x68(0x10)
	bool m_MustPassAllChannelConditions; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FGameplayTagContainer m_TagContainer; // 0x80(0x20)
	struct TArray<struct UAblAbilityTask*> m_Tasks; // 0xa0(0x10)
	struct TArray<struct UAblAbilityEvent*> m_Events; // 0xb0(0x10)
	uint32_t m_AbilityNameHash; // 0xc0(0x04)
	enum class EAblAbilityTaskRealm m_AbilityRealm; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)

	bool RequiresTarget(); // Function AbleCore.AblAbility.RequiresTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e9360
	bool RequiresAllTasksComplete(); // Function AbleCore.AblAbility.RequiresAllTasksComplete // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e9340
	bool RefreshLoopTimeOnly(); // Function AbleCore.AblAbility.RefreshLoopTimeOnly // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e9290
	bool RefreshDurationOnNewStack(); // Function AbleCore.AblAbility.RefreshDurationOnNewStack // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e9270
	void OnSpawnedActorEvent(struct UAblAbilityContext* Context, struct FName& EventName, struct AActor* SpawnedActor); // Function AbleCore.AblAbility.OnSpawnedActorEvent // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x38a7480
	void OnRaycastEvent(struct UAblAbilityContext* Context, struct FName& EventName, struct TArray<struct FHitResult>& HitResults); // Function AbleCore.AblAbility.OnRaycastEvent // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x38a7480
	struct UAblAbility* OnGetBranchAbility(struct UAblAbilityContext* Context, struct FName& EventName); // Function AbleCore.AblAbility.OnGetBranchAbility // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x19e90a0
	void OnCustomEvent(struct UAblAbilityContext* Context, struct FName& EventName); // Function AbleCore.AblAbility.OnCustomEvent // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x38a7480
	void OnCollisionEvent(struct UAblAbilityContext* Context, struct FName& EventName, struct TArray<struct FAblQueryResult>& HitEntities); // Function AbleCore.AblAbility.OnCollisionEvent // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityStart(struct UAblAbilityContext* Context); // Function AbleCore.AblAbility.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function AbleCore.AblAbility.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityEnd(struct UAblAbilityContext* Context); // Function AbleCore.AblAbility.OnAbilityEnd // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function AbleCore.AblAbility.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	bool MustPassAllChannelConditions(); // Function AbleCore.AblAbility.MustPassAllChannelConditions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e9080
	bool IsPassive(); // Function AbleCore.AblAbility.IsPassive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8c50
	bool IsLooping(); // Function AbleCore.AblAbility.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8c30
	bool IsChanneled(); // Function AbleCore.AblAbility.IsChanneled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8c10
	float GetRange(); // Function AbleCore.AblAbility.GetRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8a60
	int32_t GetMaxStacks(struct UAblAbilityContext* Context); // Function AbleCore.AblAbility.GetMaxStacks // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19e89c0
	struct FVector2D GetLoopRange(); // Function AbleCore.AblAbility.GetLoopRange // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8990
	int32_t GetLoopMaxIterationsBP(); // Function AbleCore.AblAbility.GetLoopMaxIterationsBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8970
	float GetLength(); // Function AbleCore.AblAbility.GetLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8950
	struct FString GetDisplayName(); // Function AbleCore.AblAbility.GetDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8850
	float GetCooldown(); // Function AbleCore.AblAbility.GetCooldown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994ea0
	float GetBasePlayRate(); // Function AbleCore.AblAbility.GetBasePlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994c40
	int32_t GetBaseMaxStacks(); // Function AbleCore.AblAbility.GetBaseMaxStacks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8830
	float GetBaseCooldown(); // Function AbleCore.AblAbility.GetBaseCooldown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1994ea0
	struct FGameplayTagContainer GetAbilityTagContainer(); // Function AbleCore.AblAbility.GetAbilityTagContainer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8710
	void CustomTargetingFindTargets(struct UAblAbilityContext* Context, struct TArray<struct AActor*>& FoundTargets); // Function AbleCore.AblAbility.CustomTargetingFindTargets // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x38a7480
	bool CustomFilterCondition(struct UAblAbilityContext* Context, struct FName& EventName, struct AActor* Actor); // Function AbleCore.AblAbility.CustomFilterCondition // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x19e8560
	bool CustomCanLoopExecute(struct UAblAbilityContext* Context); // Function AbleCore.AblAbility.CustomCanLoopExecute // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19e84c0
	bool CustomCanBranchTo(struct UAblAbilityContext* Context); // Function AbleCore.AblAbility.CustomCanBranchTo // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19e8420
	bool CustomCanAbilityExecute(struct UAblAbilityContext* Context); // Function AbleCore.AblAbility.CustomCanAbilityExecute // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19e8380
	bool CheckCustomChannelConditional(struct UAblAbilityContext* Context, struct FName& EventName); // Function AbleCore.AblAbility.CheckCustomChannelConditional // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x19e8080
	bool CanInterruptAbility(struct UAblAbilityContext* Context, struct UAblAbility* CurrentAbility); // Function AbleCore.AblAbility.CanInterruptAbility // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19e7cf0
	float CalculateDamageForActor(struct UAblAbilityContext* Context, struct FName& EventName, float BaseDamage, struct AActor* Actor); // Function AbleCore.AblAbility.CalculateDamageForActor // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x19e7ae0
	float CalculateCooldown(struct UAblAbilityContext* Context); // Function AbleCore.AblAbility.CalculateCooldown // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19e7a40
	bool AlwaysRefreshDuration(); // Function AbleCore.AblAbility.AlwaysRefreshDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e7980
};

// Class AbleCore.AblAbilityAsset
// Size: 0x80 (Inherited: 0x30)
struct UAblAbilityAsset : UDataAsset {
	struct TMap<struct FName, struct FAblAbilityChannel> AbilityChannelMap; // 0x30(0x50)
};

// Class AbleCore.AblAbilityBlueprint
// Size: 0xa0 (Inherited: 0xa0)
struct UAblAbilityBlueprint : UBlueprint {
};

// Class AbleCore.AblAbilityBlueprintGeneratedClass
// Size: 0x328 (Inherited: 0x328)
struct UAblAbilityBlueprintGeneratedClass : UBlueprintGeneratedClass {
};

// Class AbleCore.AblAbilityBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAblAbilityBlueprintLibrary : UBlueprintFunctionLibrary {

	bool SetDrawCollisionQueries(bool Enable); // Function AbleCore.AblAbilityBlueprintLibrary.SetDrawCollisionQueries // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19e9380
	bool IsSuccessfulStartResult(enum class EAblAbilityStartResult Result); // Function AbleCore.AblAbilityBlueprintLibrary.IsSuccessfulStartResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19e8d40
	bool GetDrawCollisionQueries(); // Function AbleCore.AblAbilityBlueprintLibrary.GetDrawCollisionQueries // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1039f30
	struct UAblAbility* GetAbilityObjectFromClass(struct UObject* Class); // Function AbleCore.AblAbilityBlueprintLibrary.GetAbilityObjectFromClass // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19e8680
	struct UAblCustomTaskScratchPad* CreateCustomScratchPad(struct UAblAbilityContext* Context, struct UAblCustomTaskScratchPad* ScratchPadClass); // Function AbleCore.AblAbilityBlueprintLibrary.CreateCustomScratchPad // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19e82b0
	struct UAblAbilityContext* CreateAbilityContext(struct UAblAbility* Ability, struct UAblAbilityComponent* AbilityComponent, struct AActor* Owner, struct AActor* Instigator); // Function AbleCore.AblAbilityBlueprintLibrary.CreateAbilityContext // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19e8160
	enum class EAblAbilityStartResult ActivateAbility(struct UAblAbilityContext* Context); // Function AbleCore.AblAbilityBlueprintLibrary.ActivateAbility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19e77a0
};

// Class AbleCore.AblAbilityComponent
// Size: 0x1b0 (Inherited: 0xc8)
struct UAblAbilityComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	float GlobalPlayRate; // 0xd0(0x04)
	float GlobalMeshScale; // 0xd4(0x04)
	bool m_Verbose; // 0xd8(0x01)
	char pad_D9[0x1f]; // 0xd9(0x1f)
	struct UAblAbilityAsset* AblAbilityAsset; // 0xf8(0x08)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x100(0x08)
	struct TWeakObjectPtr<struct UAbleSettings> m_Settings; // 0x108(0x08)
	struct FGameplayTagContainer m_TagContainer; // 0x110(0x20)
	char pad_130[0x48]; // 0x130(0x48)
	struct FAblUberAbility AblUberAbility; // 0x178(0x20)
	char pad_198[0x18]; // 0x198(0x18)

	void UnpauseAllAbilities(); // Function AbleCore.AblAbilityComponent.UnpauseAllAbilities // (Final|Native|Public) // @ game+0x19e95a0
	void TriggerAbleEvent(struct AActor* AbleOwner, struct AActor* AbleSender, struct FName EventName); // Function AbleCore.AblAbilityComponent.TriggerAbleEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19e94a0
	void SetIgnorePlayAbility(bool bFlag); // Function AbleCore.AblAbilityComponent.SetIgnorePlayAbility // (Final|Native|Public|BlueprintCallable) // @ game+0x19e9410
	void RemoveTag(struct FGameplayTag Tag); // Function AbleCore.AblAbilityComponent.RemoveTag // (Final|Native|Public|BlueprintCallable) // @ game+0x19e92b0
	void PauseAllAbilities(); // Function AbleCore.AblAbilityComponent.PauseAllAbilities // (Final|Native|Public) // @ game+0x19e9250
	void PauseAbility(bool bEnable, struct UAblAbility* Abilit); // Function AbleCore.AblAbilityComponent.PauseAbility // (Final|Native|Public|BlueprintCallable) // @ game+0x19e9180
	bool MatchesQuery(struct FGameplayTagQuery Query); // Function AbleCore.AblAbilityComponent.MatchesQuery // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8fa0
	bool MatchesAnyTag(struct FGameplayTagContainer Container); // Function AbleCore.AblAbilityComponent.MatchesAnyTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8eb0
	bool MatchesAllTags(struct FGameplayTagContainer Container); // Function AbleCore.AblAbilityComponent.MatchesAllTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8dc0
	bool IsPlayingAbility(); // Function AbleCore.AblAbilityComponent.IsPlayingAbility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8d10
	bool IsPassiveActive(struct UAblAbility* Ability); // Function AbleCore.AblAbilityComponent.IsPassiveActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8c70
	bool IsAbilityPaused(struct UAblAbility* Ability); // Function AbleCore.AblAbilityComponent.IsAbilityPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x19e8b70
	bool HasTag(struct FGameplayTag Tag); // Function AbleCore.AblAbilityComponent.HasTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8ad0
	bool HasAbilityAnimation(); // Function AbleCore.AblAbilityComponent.HasAbilityAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8aa0
	struct FGameplayTagContainer GetGameplayTagContainerBP(); // Function AbleCore.AblAbilityComponent.GetGameplayTagContainerBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e88d0
	struct UAblAbility* GetActiveAbility_New(struct FName ChannelName); // Function AbleCore.AblAbilityComponent.GetActiveAbility_New // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19e8790
	struct UAblAbility* GetActiveAbility(); // Function AbleCore.AblAbilityComponent.GetActiveAbility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12bf970
	void CancelAllAbilities(enum class EAblAbilityTaskResult ResultToUse, bool bHideActor); // Function AbleCore.AblAbilityComponent.CancelAllAbilities // (Final|Native|Public|BlueprintCallable) // @ game+0x19e7fb0
	void CancelAbilityChannel(struct FName& ChannelName, enum class EAblAbilityTaskResult ResultToUse, bool bHideActor); // Function AbleCore.AblAbilityComponent.CancelAbilityChannel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e7e90
	void CancelAbility(struct UAblAbility* Ability, enum class EAblAbilityTaskResult ResultToUse); // Function AbleCore.AblAbilityComponent.CancelAbility // (Final|Native|Public|BlueprintCallable) // @ game+0x19e7dc0
	enum class EAblAbilityStartResult CanActivateAbility(struct UAblAbilityContext* Context); // Function AbleCore.AblAbilityComponent.CanActivateAbility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e7c50
	enum class EAblAbilityStartResult BranchAbility(struct UAblAbilityContext* Context); // Function AbleCore.AblAbilityComponent.BranchAbility // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19e79a0
	void AddTag(struct FGameplayTag Tag); // Function AbleCore.AblAbilityComponent.AddTag // (Final|Native|Public|BlueprintCallable) // @ game+0x19e78f0
	void ActorHiddenTimeout(); // Function AbleCore.AblAbilityComponent.ActorHiddenTimeout // (Final|Native|Public) // @ game+0x19e78d0
	enum class EAblAbilityStartResult ActivateAbility(struct UAblAbilityContext* Context); // Function AbleCore.AblAbilityComponent.ActivateAbility // (Final|Native|Public|BlueprintCallable) // @ game+0x19e7830
};

// Class AbleCore.AblAbilityBaseScratchPad
// Size: 0x28 (Inherited: 0x28)
struct UAblAbilityBaseScratchPad : UObject {
};

// Class AbleCore.AblAbilityContext
// Size: 0x220 (Inherited: 0x28)
struct UAblAbilityContext : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct UAblAbility* m_Ability; // 0x38(0x08)
	struct UAblAbilityComponent* m_AbilityComponent; // 0x40(0x08)
	int32_t m_StackCount; // 0x48(0x04)
	float m_CurrentTime; // 0x4c(0x04)
	struct TWeakObjectPtr<struct AActor> m_Owner; // 0x50(0x08)
	struct TWeakObjectPtr<struct AActor> m_Instigator; // 0x58(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> m_TargetActors; // 0x60(0x10)
	struct TMap<uint32_t, struct UAblAbilityTaskScratchPad*> m_TaskScratchPadMap; // 0x70(0x50)
	struct TMap<uint32_t, struct UAblAbilityEventScratchPad*> m_EventScratchPadMap; // 0xc0(0x50)
	struct TMap<uint32_t, struct UAblAbilityChannelingScratchPad*> m_ChannelingScratchPadMap; // 0x110(0x50)
	char pad_160[0x10]; // 0x160(0x10)
	struct FTransform m_AsyncQueryTransform; // 0x170(0x30)
	struct FAlphaBlend m_TransitionBlendIn; // 0x1a0(0x30)
	struct FAlphaBlend m_TransitionBlendOut; // 0x1d0(0x30)
	struct UAblAbilityBaseScratchPad* AbilityScratchPad; // 0x200(0x08)
	enum class EEvaluatorRootMotion m_UseSourceRootMotion; // 0x208(0x01)
	enum class EEvaluatorRootMotion m_UseDestRootMotion; // 0x209(0x01)
	enum class EAnimBlendTickStyle m_BlendTickStyle; // 0x20a(0x01)
	char pad_20B[0x15]; // 0x20b(0x15)

	void SetStackCount(int32_t Stack); // Function AbleCore.AblAbilityContext.SetStackCount // (Final|Native|Public|BlueprintCallable) // @ game+0x19ed740
	struct TArray<struct AActor*> GetTargetActors(); // Function AbleCore.AblAbilityContext.GetTargetActors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19ed460
	struct AActor* GetSelfActor(); // Function AbleCore.AblAbilityContext.GetSelfActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19ed430
	struct UAblAbilityComponent* GetSelfAbilityComponent(); // Function AbleCore.AblAbilityContext.GetSelfAbilityComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19ed400
	struct AActor* GetOwner(); // Function AbleCore.AblAbilityContext.GetOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19ed3d0
	struct AActor* GetInstigator(); // Function AbleCore.AblAbilityContext.GetInstigator // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19ed3a0
	float GetCurrentTimeRatio(); // Function AbleCore.AblAbilityContext.GetCurrentTimeRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19ed370
	float GetCurrentTime(); // Function AbleCore.AblAbilityContext.GetCurrentTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8970
	int32_t GetCurrentStackCount(); // Function AbleCore.AblAbilityContext.GetCurrentStackCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19ed340
};

// Class AbleCore.AblAbilityInstance
// Size: 0xf8 (Inherited: 0x28)
struct UAblAbilityInstance : UObject {
	uint32_t m_CurrentIteration; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct UAblAbilityTask*> m_AsyncTasks; // 0x30(0x10)
	struct TArray<struct UAblAbilityTask*> m_ActiveAsyncTasks; // 0x40(0x10)
	struct TArray<struct UAblAbilityTask*> m_FinishedASyncTasks; // 0x50(0x10)
	struct TArray<struct UAblAbilityTask*> m_SyncTasks; // 0x60(0x10)
	struct TArray<struct UAblAbilityTask*> m_ActiveSyncTasks; // 0x70(0x10)
	struct TArray<struct UAblAbilityTask*> m_FinishedSyncTasks; // 0x80(0x10)
	struct UAblAbility* m_Ability; // 0x90(0x08)
	struct UAblAbilityContext* m_Context; // 0x98(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> m_AdditionalTargets; // 0xa0(0x10)
	char pad_B0[0x30]; // 0xb0(0x30)
	struct TArray<struct UAblAbilityTask*> m_FadingTasks; // 0xe0(0x10)
	char pad_F0[0x8]; // 0xf0(0x08)
};

// Class AbleCore.AblAnimationEndCallback
// Size: 0x28 (Inherited: 0x28)
struct UAblAnimationEndCallback : UObject {
};

// Class AbleCore.AblAnimationModifier
// Size: 0x28 (Inherited: 0x28)
struct UAblAnimationModifier : UObject {
};

// Class AbleCore.AblAnimationModifier_SpeedWarping
// Size: 0x38 (Inherited: 0x28)
struct UAblAnimationModifier_SpeedWarping : UAblAnimationModifier {
	struct TArray<struct FKIKBone> FKIKBranches; // 0x28(0x10)
};

// Class AbleCore.AblAnimationTagChooser
// Size: 0x50 (Inherited: 0x28)
struct UAblAnimationTagChooser : UObject {
	struct TArray<struct UAnimationAsset*> AnimationAssets; // 0x28(0x10)
	struct TArray<struct FGameplayTagContainer> AnimationTags; // 0x38(0x10)
	bool bAppendAnimationTags; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AbleCore.AblAnimationTagChooser_AppendToBase
// Size: 0x80 (Inherited: 0x50)
struct UAblAnimationTagChooser_AppendToBase : UAblAnimationTagChooser {
	struct FGameplayTagContainer BaseAnimationTag; // 0x50(0x20)
	struct TArray<struct UAblAnimationTagChooser_AppendToBaseChooser*> Choosers; // 0x70(0x10)
};

// Class AbleCore.AblAnimationTagChooser_AppendToBaseChooser
// Size: 0x28 (Inherited: 0x28)
struct UAblAnimationTagChooser_AppendToBaseChooser : UObject {
};

// Class AbleCore.AblAnimNotify
// Size: 0x40 (Inherited: 0x38)
struct UAblAnimNotify : UAnimNotify {
	struct FName EventName; // 0x38(0x08)
};

// Class AbleCore.AblAnimNotifyPure
// Size: 0x40 (Inherited: 0x40)
struct UAblAnimNotifyPure : UAblAnimNotify {
};

// Class AbleCore.AblAbilityEventScratchPad
// Size: 0x48 (Inherited: 0x28)
struct UAblAbilityEventScratchPad : UAblAbilityBaseScratchPad {
	struct TWeakObjectPtr<struct UAblAbilityEvent> AbilityEventPtr; // 0x28(0x08)
	char pad_30[0x18]; // 0x30(0x18)

	void EventReceived(struct UObject* Caller); // Function AbleCore.AblAbilityEventScratchPad.EventReceived // (Final|Native|Public) // @ game+0x19ff8e0
};

// Class AbleCore.AblAbilityAnimNotifyEventScratchPad
// Size: 0x48 (Inherited: 0x48)
struct UAblAbilityAnimNotifyEventScratchPad : UAblAbilityEventScratchPad {

	void OnAnimationPlayed(float InCurrentTime, struct UAnimationAsset* InAnimationAsset, struct UAblAbilityContext* Context); // Function AbleCore.AblAbilityAnimNotifyEventScratchPad.OnAnimationPlayed // (Final|Native|Public) // @ game+0x19ed500
};

// Class AbleCore.AblAbilityNode
// Size: 0x28 (Inherited: 0x28)
struct UAblAbilityNode : UObject {
};

// Class AbleCore.AblAbilityEvent
// Size: 0x50 (Inherited: 0x28)
struct UAblAbilityEvent : UAblAbilityNode {
	struct FRelativeTime m_StartTime; // 0x28(0x18)
	struct FName m_EventName; // 0x40(0x08)
	bool m_Verbose; // 0x48(0x01)
	bool m_IsDone; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class AbleCore.AblGeneratedEvent
// Size: 0x58 (Inherited: 0x50)
struct UAblGeneratedEvent : UAblAbilityEvent {
	bool bIsActive; // 0x50(0x01)
	bool bRemovable; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// Class AbleCore.AblAnimNotifyEvent
// Size: 0x58 (Inherited: 0x58)
struct UAblAnimNotifyEvent : UAblGeneratedEvent {
};

// Class AbleCore.AblAnimNotifyPureEvent
// Size: 0x58 (Inherited: 0x58)
struct UAblAnimNotifyPureEvent : UAblAnimNotifyEvent {
};

// Class AbleCore.AblAnimRateGetter
// Size: 0x28 (Inherited: 0x28)
struct UAblAnimRateGetter : UObject {
};

// Class AbleCore.AblAnimRateGetter_Random
// Size: 0x30 (Inherited: 0x28)
struct UAblAnimRateGetter_Random : UAblAnimRateGetter {
	float MinPlayRate; // 0x28(0x04)
	float MaxPlayRate; // 0x2c(0x04)
};

// Class AbleCore.AblAnimTransitionInOverriderer
// Size: 0x28 (Inherited: 0x28)
struct UAblAnimTransitionInOverriderer : UObject {
};

// Class AbleCore.AblAbilityTaskScratchPad
// Size: 0x28 (Inherited: 0x28)
struct UAblAbilityTaskScratchPad : UAblAbilityBaseScratchPad {
};

// Class AbleCore.AblAvaAnimationTaskScratchPad
// Size: 0x240 (Inherited: 0x28)
struct UAblAvaAnimationTaskScratchPad : UAblAbilityTaskScratchPad {
	char pad_28[0x28]; // 0x28(0x28)
	struct FAnimationTrack AnimationTrack; // 0x50(0x1d0)
	struct TWeakObjectPtr<struct AActor> OwningActor; // 0x220(0x08)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SkeletalMeshComponent; // 0x228(0x08)
	float CurrentBlendWeight; // 0x230(0x04)
	char pad_234[0xc]; // 0x234(0x0c)
};

// Class AbleCore.AblAbilityTask
// Size: 0x70 (Inherited: 0x28)
struct UAblAbilityTask : UAblAbilityNode {
	struct FRelativeTime m_StartTime; // 0x28(0x18)
	struct FRelativeTime m_EndTime; // 0x40(0x18)
	struct TArray<enum class EAblAbilityTargetType> m_TaskTargets; // 0x58(0x10)
	bool m_Verbose; // 0x68(0x01)
	bool m_IsDone; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// Class AbleCore.AblAvaAnimationTask
// Size: 0x108 (Inherited: 0x70)
struct UAblAvaAnimationTask : UAblAbilityTask {
	char pad_70[0x8]; // 0x70(0x08)
	struct UAnimationProvider* AnimationProvider; // 0x78(0x08)
	struct FAnimationRequestLayerReference Layer; // 0x80(0x08)
	struct FAbleAvaAnimationPlacementOptions PlacementOptions; // 0x88(0x30)
	struct FAbleAvaAnimationClipRange ClipRange; // 0xb8(0x10)
	struct FAblAvaAnimationPlaybackOptions PlaybackOptions; // 0xc8(0x18)
	struct UBoolProvider* ReselectOnLoopBoundaries; // 0xe0(0x08)
	struct UFloatProvider* weight; // 0xe8(0x08)
	struct UFloatProvider* BlendInTime; // 0xf0(0x08)
	struct UFloatProvider* BlendOutTime; // 0xf8(0x08)
	struct UBoolProvider* LoopIndefinitely; // 0x100(0x08)
};

// Class AbleCore.AblBlendSpaceParameterGetter
// Size: 0x28 (Inherited: 0x28)
struct UAblBlendSpaceParameterGetter : UObject {
};

// Class AbleCore.AblBlendWeightMultiplierGetter
// Size: 0x28 (Inherited: 0x28)
struct UAblBlendWeightMultiplierGetter : UObject {
};

// Class AbleCore.AblBoneBlendWeightAsset
// Size: 0x88 (Inherited: 0x30)
struct UAblBoneBlendWeightAsset : UDataAsset {
	float DefaultBoneWeight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct USkeleton* Skeleton; // 0x38(0x08)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x40(0x10)
	struct TArray<struct FPerBoneBlendWeight> InversePerBoneBlendWeights; // 0x50(0x10)
	struct FGuid SkeletonGuid; // 0x60(0x10)
	struct FGuid VirtualBoneGuid; // 0x70(0x10)
	bool bMeshSpaceRotationBlend; // 0x80(0x01)
	bool BlendWeightsDirty; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
};

// Class AbleCore.AblBranchFilterBlendWeightAsset
// Size: 0x98 (Inherited: 0x88)
struct UAblBranchFilterBlendWeightAsset : UAblBoneBlendWeightAsset {
	struct TArray<struct FMyInputBlendPose> LayerSetup; // 0x88(0x10)
};

// Class AbleCore.AblSimpleBlendWeightAsset
// Size: 0xd8 (Inherited: 0x88)
struct UAblSimpleBlendWeightAsset : UAblBoneBlendWeightAsset {
	struct TMap<struct FName, float> BlendWeightMap; // 0x88(0x50)
};

// Class AbleCore.AblBranchCondition
// Size: 0x30 (Inherited: 0x28)
struct UAblBranchCondition : UObject {
	bool m_Negate; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AbleCore.AblBranchConditionOnInput
// Size: 0x48 (Inherited: 0x30)
struct UAblBranchConditionOnInput : UAblBranchCondition {
	struct TArray<struct FName> m_InputActions; // 0x30(0x10)
	bool m_MustBeRecentlyPressed; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float m_RecentlyPressedTimeLimit; // 0x44(0x04)
};

// Class AbleCore.AblBranchConditionAlways
// Size: 0x30 (Inherited: 0x30)
struct UAblBranchConditionAlways : UAblBranchCondition {
};

// Class AbleCore.AblBranchConditionCustom
// Size: 0x30 (Inherited: 0x30)
struct UAblBranchConditionCustom : UAblBranchCondition {
};

// Class AbleCore.AblBranchConditionLogicalOR
// Size: 0x40 (Inherited: 0x30)
struct UAblBranchConditionLogicalOR : UAblBranchCondition {
	struct TArray<struct UAblBranchCondition*> Conditions; // 0x30(0x10)
};

// Class AbleCore.AnimNotify_AbilityBranch
// Size: 0x90 (Inherited: 0x38)
struct UAnimNotify_AbilityBranch : UAnimNotify {
	struct FName Name; // 0x38(0x08)
	struct TSet<struct FName> Names; // 0x40(0x50)
};

// Class AbleCore.AblBranchConditionAnimNotify
// Size: 0x40 (Inherited: 0x30)
struct UAblBranchConditionAnimNotify : UAblBranchCondition {
	struct FName Name; // 0x30(0x08)
	bool bResultIfNotifyDoesNotExist; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class AbleCore.AblTaskConditionScratchpad
// Size: 0x30 (Inherited: 0x28)
struct UAblTaskConditionScratchpad : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class AbleCore.AblTaskConditionAnimNotifyScratchpad
// Size: 0x90 (Inherited: 0x30)
struct UAblTaskConditionAnimNotifyScratchpad : UAblTaskConditionScratchpad {
	struct TSet<struct FName> EventNames; // 0x30(0x50)
	char pad_80[0x8]; // 0x80(0x08)
	bool bEventReceived; // 0x88(0x01)
	bool bEventExists; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)

	void OnAnimationPlayed(float InCurrentTime, struct UAnimationAsset* InAnimationAsset, struct UAblAbilityContext* Context); // Function AbleCore.AblTaskConditionAnimNotifyScratchpad.OnAnimationPlayed // (Final|Native|Public) // @ game+0x19ed620
};

// Class AbleCore.AblTaskCondition
// Size: 0x28 (Inherited: 0x28)
struct UAblTaskCondition : UObject {
};

// Class AbleCore.AblBranchConditionAnimNotify_New
// Size: 0x80 (Inherited: 0x28)
struct UAblBranchConditionAnimNotify_New : UAblTaskCondition {
	struct TSet<struct FName> Names; // 0x28(0x50)
	bool bResultIfNotifyDoesNotExist; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class AbleCore.AblBranchEventScratchPad
// Size: 0x60 (Inherited: 0x48)
struct UAblBranchEventScratchPad : UAblAbilityEventScratchPad {
	struct UAblAbility* BranchAbility; // 0x48(0x08)
	struct TArray<struct FKey> CachedKeys; // 0x50(0x10)
};

// Class AbleCore.AblBranchEvent
// Size: 0xe0 (Inherited: 0x50)
struct UAblBranchEvent : UAblAbilityEvent {
	struct UAblAbility* m_BranchAbility; // 0x50(0x08)
	bool m_DynamicBranchAbility; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FName m_DynamicBranchEventName; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct UAblBranchCondition*> m_Conditions; // 0x68(0x10)
	bool m_MustPassAllConditions; // 0x78(0x01)
	bool m_CopyTargetsOnBranch; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct FAlphaBlend m_TransitionBlend; // 0x80(0x30)
	struct FAlphaBlend m_TransitionBlendOut; // 0xb0(0x30)
};

// Class AbleCore.AblBranchTaskScratchPad
// Size: 0x50 (Inherited: 0x28)
struct UAblBranchTaskScratchPad : UAblAbilityTaskScratchPad {
	struct TArray<struct FKey> CachedKeys; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
	bool bEventReceived; // 0x48(0x01)
	bool bEventExists; // 0x49(0x01)
	bool bCanEverPassConditions; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)

	void OnAnimationPlayed(float InCurrentTime, struct UAnimationAsset* InAnimationAsset, struct UAblAbilityContext* Context); // Function AbleCore.AblBranchTaskScratchPad.OnAnimationPlayed // (Final|Native|Public) // @ game+0x19f12a0
};

// Class AbleCore.AblBranchTask
// Size: 0x118 (Inherited: 0x70)
struct UAblBranchTask : UAblAbilityTask {
	struct UAblAbility* m_BranchAbility; // 0x70(0x08)
	struct UAblBranchTaskScratchPad* m_BranchScratchpad; // 0x78(0x08)
	bool m_DynamicBranchAbility; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FName m_DynamicBranchEventName; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct UAblBranchCondition*> m_Conditions; // 0x90(0x10)
	bool m_MustPassAllConditions; // 0xa0(0x01)
	bool m_CopyTargetsOnBranch; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FAlphaBlend m_TransitionBlend; // 0xa8(0x30)
	struct FAlphaBlend m_TransitionBlendOut; // 0xd8(0x30)
	bool m_bOverrideTransitionBlend; // 0x108(0x01)
	bool m_bOverrideTransitionBlendOut; // 0x109(0x01)
	bool bClampBlendOutTime; // 0x10a(0x01)
	bool m_OverrideRootMotion; // 0x10b(0x01)
	enum class EEvaluatorRootMotion m_UseSourceRootMotion; // 0x10c(0x01)
	enum class EEvaluatorRootMotion m_UseDestRootMotion; // 0x10d(0x01)
	bool m_OverrideBlendTickStyle; // 0x10e(0x01)
	enum class EAnimBlendTickStyle m_BlendTickStyle; // 0x10f(0x01)
	bool bPreBranchTick; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// Class AbleCore.AblBTCustomActionTaskScratchPad
// Size: 0x38 (Inherited: 0x28)
struct UAblBTCustomActionTaskScratchPad : UAblAbilityTaskScratchPad {
	struct TArray<struct FBTCustomActionTaskEntry> InProgressMessage; // 0x28(0x10)
};

// Class AbleCore.AblBTCustomActionTask
// Size: 0x2c0 (Inherited: 0x70)
struct UAblBTCustomActionTask : UAblAbilityTask {
	struct FBTCustomAction BTCustomAction; // 0x70(0x0c)
	enum class EBTCustomActionType BTCustomActionType; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct TMap<struct FName, bool> VarMapKeyedBools; // 0x80(0x50)
	struct TMap<struct FName, int32_t> VarMapKeyedInts; // 0xd0(0x50)
	struct TMap<struct FName, float> VarMapKeyedFloats; // 0x120(0x50)
	struct TMap<struct FName, struct FName> VarMapKeyedNames; // 0x170(0x50)
	struct TMap<struct FName, struct FVector2D> VarMapKeyedVector2Ds; // 0x1c0(0x50)
	struct TMap<struct FName, struct FVector> VarMapKeyedVectors; // 0x210(0x50)
	struct TMap<struct FName, struct FString> VarMapKeyedStrings; // 0x260(0x50)
	struct FBTCustomAction EndBTCustomAction; // 0x2b0(0x0c)
	enum class EBTCustomActionType EndBTCustomActionType; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
};

// Class AbleCore.AblCamShakeTask
// Size: 0xb0 (Inherited: 0x70)
struct UAblCamShakeTask : UAblAbilityTask {
	struct UCameraShakeBase* Shake; // 0x70(0x08)
	float InnerRadius; // 0x78(0x04)
	float OuterRadius; // 0x7c(0x04)
	struct FVector epicenter; // 0x80(0x0c)
	float Falloff; // 0x8c(0x04)
	bool bUseActorPositionAsEpicenter; // 0x90(0x01)
	bool bOrientShakeTowardsEpicenter; // 0x91(0x01)
	bool bPlayerOnly; // 0x92(0x01)
	char pad_93[0x5]; // 0x93(0x05)
	struct TArray<struct UAblTaskCondition*> Conditions; // 0x98(0x10)
	bool bMustPassAllConditions; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AbleCore.AblCancelAnimationTask
// Size: 0x70 (Inherited: 0x70)
struct UAblCancelAnimationTask : UAblAbilityTask {
};

// Class AbleCore.AblAbilityChannelingScratchPad
// Size: 0x28 (Inherited: 0x28)
struct UAblAbilityChannelingScratchPad : UAblAbilityBaseScratchPad {
};

// Class AbleCore.AblChannelingBase
// Size: 0x30 (Inherited: 0x28)
struct UAblChannelingBase : UObject {
	bool m_Negate; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AbleCore.AblChannelingInputConditional
// Size: 0x50 (Inherited: 0x30)
struct UAblChannelingInputConditional : UAblChannelingBase {
	struct TArray<struct FName> m_InputActions; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class AbleCore.AblChannelingVelocityConditional
// Size: 0x38 (Inherited: 0x30)
struct UAblChannelingVelocityConditional : UAblChannelingBase {
	float m_VelocityThreshold; // 0x30(0x04)
	bool m_UseXYSpeed; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class AbleCore.AblChannelingCustomConditional
// Size: 0x38 (Inherited: 0x30)
struct UAblChannelingCustomConditional : UAblChannelingBase {
	struct FName m_EventName; // 0x30(0x08)
};

// Class AbleCore.AblChannelingObjectArchitectScratchPad
// Size: 0x48 (Inherited: 0x28)
struct UAblChannelingObjectArchitectScratchPad : UAblAbilityChannelingScratchPad {
	char pad_28[0x20]; // 0x28(0x20)

	void TagsChanged(struct AActor* Actor, struct FGameplayTag GameplayTag, enum class TagsChangedEvent TagsChanged); // Function AbleCore.AblChannelingObjectArchitectScratchPad.TagsChanged // (Final|Native|Public) // @ game+0x19f14d0
};

// Class AbleCore.AblChannelingObjectArchitectConditional
// Size: 0x60 (Inherited: 0x30)
struct UAblChannelingObjectArchitectConditional : UAblChannelingBase {
	struct FGameplayTagContainer BranchTags; // 0x30(0x20)
	struct UAblAbility* BranchAbility; // 0x50(0x08)
	struct UObjectArchitectAsset* ObjectArchitectAsset; // 0x58(0x08)
};

// Class AbleCore.AblCollisionFilter
// Size: 0x28 (Inherited: 0x28)
struct UAblCollisionFilter : UObject {
};

// Class AbleCore.AblCollisionFilterSelf
// Size: 0x28 (Inherited: 0x28)
struct UAblCollisionFilterSelf : UAblCollisionFilter {
};

// Class AbleCore.AblCollisionFilterOwner
// Size: 0x28 (Inherited: 0x28)
struct UAblCollisionFilterOwner : UAblCollisionFilter {
};

// Class AbleCore.AblCollisionFilterInstigator
// Size: 0x28 (Inherited: 0x28)
struct UAblCollisionFilterInstigator : UAblCollisionFilter {
};

// Class AbleCore.AblCollisionFilterByClass
// Size: 0x38 (Inherited: 0x28)
struct UAblCollisionFilterByClass : UAblCollisionFilter {
	struct UObject* m_Class; // 0x28(0x08)
	bool m_Negate; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AbleCore.AblCollisionFilterSortByDistance
// Size: 0x58 (Inherited: 0x28)
struct UAblCollisionFilterSortByDistance : UAblCollisionFilter {
	enum class EAblCollisionFilterSort m_SortDirection; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FAblAbilityTargetTypeLocation m_Location; // 0x2c(0x28)
	bool m_Use2DDistance; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class AbleCore.AblCollisionFilterMaxResults
// Size: 0x30 (Inherited: 0x28)
struct UAblCollisionFilterMaxResults : UAblCollisionFilter {
	int32_t m_MaxEntities; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AbleCore.AblCollisionFilterCustom
// Size: 0x38 (Inherited: 0x28)
struct UAblCollisionFilterCustom : UAblCollisionFilter {
	struct FName m_EventName; // 0x28(0x08)
	bool m_UseAsync; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AbleCore.AblCollisionQueryTaskScratchPad
// Size: 0x70 (Inherited: 0x28)
struct UAblCollisionQueryTaskScratchPad : UAblAbilityTaskScratchPad {
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform QueryTransform; // 0x30(0x30)
	char pad_60[0x8]; // 0x60(0x08)
	bool AsyncProcessed; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class AbleCore.AblCollisionQueryTask
// Size: 0xa0 (Inherited: 0x70)
struct UAblCollisionQueryTask : UAblAbilityTask {
	bool m_fireEvent; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FName m_name; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UAblCollisionShape* m_QueryShape; // 0x80(0x08)
	struct TArray<struct UAblCollisionFilter*> m_Filters; // 0x88(0x10)
	bool m_CopyResultsToContext; // 0x98(0x01)
	bool m_AllowDuplicateEntries; // 0x99(0x01)
	enum class EAblAbilityTaskRealm m_TaskRealm; // 0x9a(0x01)
	char pad_9B[0x5]; // 0x9b(0x05)
};

// Class AbleCore.AblCollisionShape
// Size: 0x58 (Inherited: 0x28)
struct UAblCollisionShape : UObject {
	struct FAblAbilityTargetTypeLocation m_QueryLocation; // 0x28(0x28)
	enum class ECollisionChannel m_CollisionChannel; // 0x50(0x01)
	bool m_UseAsyncQuery; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// Class AbleCore.AblCollisionShapeBox
// Size: 0x68 (Inherited: 0x58)
struct UAblCollisionShapeBox : UAblCollisionShape {
	struct FVector m_HalfExtents; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class AbleCore.AblCollisionShapeSphere
// Size: 0x60 (Inherited: 0x58)
struct UAblCollisionShapeSphere : UAblCollisionShape {
	float m_radius; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class AbleCore.AblCollisionShapeCapsule
// Size: 0x60 (Inherited: 0x58)
struct UAblCollisionShapeCapsule : UAblCollisionShape {
	float m_Height; // 0x58(0x04)
	float m_radius; // 0x5c(0x04)
};

// Class AbleCore.AblCollisionShapeCone
// Size: 0x68 (Inherited: 0x58)
struct UAblCollisionShapeCone : UAblCollisionShape {
	float m_FOV; // 0x58(0x04)
	float m_Length; // 0x5c(0x04)
	float m_Height; // 0x60(0x04)
	bool m_Is2DQuery; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class AbleCore.AblCollisionSweepTaskScratchPad
// Size: 0x70 (Inherited: 0x28)
struct UAblCollisionSweepTaskScratchPad : UAblAbilityTaskScratchPad {
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform SourceTransform; // 0x30(0x30)
	char pad_60[0x8]; // 0x60(0x08)
	bool AsyncProcessed; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class AbleCore.AblCollisionSweepTask
// Size: 0xa0 (Inherited: 0x70)
struct UAblCollisionSweepTask : UAblAbilityTask {
	struct UAblCollisionSweepShape* m_SweepShape; // 0x70(0x08)
	bool m_fireEvent; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FName m_name; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct UAblCollisionFilter*> m_Filters; // 0x88(0x10)
	bool m_CopyResultsToContext; // 0x98(0x01)
	bool m_AllowDuplicateEntries; // 0x99(0x01)
	enum class EAblAbilityTaskRealm m_TaskRealm; // 0x9a(0x01)
	char pad_9B[0x5]; // 0x9b(0x05)
};

// Class AbleCore.AblCollisionSweepShape
// Size: 0x58 (Inherited: 0x28)
struct UAblCollisionSweepShape : UObject {
	struct FAblAbilityTargetTypeLocation m_SweepLocation; // 0x28(0x28)
	enum class ECollisionChannel m_CollisionChannel; // 0x50(0x01)
	bool m_OnlyReturnBlockingHit; // 0x51(0x01)
	bool m_UseAsyncQuery; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
};

// Class AbleCore.AblCollisionSweepBox
// Size: 0x68 (Inherited: 0x58)
struct UAblCollisionSweepBox : UAblCollisionSweepShape {
	struct FVector m_HalfExtents; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class AbleCore.AblCollisionSweepSphere
// Size: 0x60 (Inherited: 0x58)
struct UAblCollisionSweepSphere : UAblCollisionSweepShape {
	float m_radius; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class AbleCore.AblCollisionSweepCapsule
// Size: 0x60 (Inherited: 0x58)
struct UAblCollisionSweepCapsule : UAblCollisionSweepShape {
	float m_radius; // 0x58(0x04)
	float m_Height; // 0x5c(0x04)
};

// Class AbleCore.AblConditionalBranchScratchpad
// Size: 0x40 (Inherited: 0x28)
struct UAblConditionalBranchScratchpad : UAblAbilityTaskScratchPad {
	struct TArray<struct UAblTaskConditionScratchpad*> BranchConditionScratchpads; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class AbleCore.AblConditionalBranchTaskBase
// Size: 0xc0 (Inherited: 0x70)
struct UAblConditionalBranchTaskBase : UAblAbilityTask {
	struct TArray<struct UAblTaskCondition*> BranchConditions; // 0x70(0x10)
	bool bMustPassAllConditions; // 0x80(0x01)
	bool bOverrideAnimationBlendIn; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FAlphaBlend AnimationBlendInOverride; // 0x88(0x30)
	bool bClampBlendOutTime; // 0xb8(0x01)
	bool bOverrideRootMotion; // 0xb9(0x01)
	enum class EEvaluatorRootMotion SourceRootMotion; // 0xba(0x01)
	enum class EEvaluatorRootMotion DestRootMotion; // 0xbb(0x01)
	bool bOverrideBlendTickStyle; // 0xbc(0x01)
	enum class EAnimBlendTickStyle BlendTickStyleOverride; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
};

// Class AbleCore.AblConditionalBranchTask
// Size: 0xc8 (Inherited: 0xc0)
struct UAblConditionalBranchTask : UAblConditionalBranchTaskBase {
	struct UAblAbility* BranchAbilityClass; // 0xc0(0x08)
};

// Class AbleCore.AblCustomEventListenerScratchpad
// Size: 0x30 (Inherited: 0x28)
struct UAblCustomEventListenerScratchpad : UAblAbilityTaskScratchPad {
	char pad_28[0x8]; // 0x28(0x08)

	void OnCustomEvent(struct UAblAbilityContext* Context, struct UAblAbilityContext* CallerContext, struct FName EventName); // Function AbleCore.AblCustomEventListenerScratchpad.OnCustomEvent // (Native|Public) // @ game+0x19f13c0
};

// Class AbleCore.AblCustomEventListenerOnceScratchpad
// Size: 0x38 (Inherited: 0x30)
struct UAblCustomEventListenerOnceScratchpad : UAblCustomEventListenerScratchpad {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AbleCore.AblCustomEventListenerStartEndScratchpad
// Size: 0x38 (Inherited: 0x30)
struct UAblCustomEventListenerStartEndScratchpad : UAblCustomEventListenerScratchpad {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AbleCore.AblCustomEventListenerTask
// Size: 0x70 (Inherited: 0x70)
struct UAblCustomEventListenerTask : UAblAbilityTask {
};

// Class AbleCore.AblCustomEventListenerOnceTask
// Size: 0x78 (Inherited: 0x70)
struct UAblCustomEventListenerOnceTask : UAblCustomEventListenerTask {
	struct FName EventName; // 0x70(0x08)
};

// Class AbleCore.AblCustomEventListenerStartEndTask
// Size: 0x80 (Inherited: 0x70)
struct UAblCustomEventListenerStartEndTask : UAblCustomEventListenerTask {
	struct FName StartEventName; // 0x70(0x08)
	struct FName EndEventName; // 0x78(0x08)
};

// Class AbleCore.AblCustomEventTask
// Size: 0x80 (Inherited: 0x70)
struct UAblCustomEventTask : UAblAbilityTask {
	struct FName m_EventName; // 0x70(0x08)
	enum class EAblAbilityTaskRealm m_TaskRealm; // 0x78(0x01)
	bool bNotifyOtherAbilitiesOnChannel; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// Class AbleCore.AblCustomTaskScratchPad
// Size: 0x28 (Inherited: 0x28)
struct UAblCustomTaskScratchPad : UAblAbilityTaskScratchPad {
};

// Class AbleCore.AblCustomTask
// Size: 0x70 (Inherited: 0x70)
struct UAblCustomTask : UAblAbilityTask {

	void OnTaskTickBP(struct UAblAbilityContext* Context, float DeltaTime); // Function AbleCore.AblCustomTask.OnTaskTickBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19f5d90
	void OnTaskStartBP(struct UAblAbilityContext* Context); // Function AbleCore.AblCustomTask.OnTaskStartBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19f5d00
	void OnTaskEndBP(struct UAblAbilityContext* Context, enum class EAblAbilityTaskResult Result); // Function AbleCore.AblCustomTask.OnTaskEndBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19f5c30
	bool IsSingleFrameBP(); // Function AbleCore.AblCustomTask.IsSingleFrameBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x18e3650
	bool IsDoneBP(struct UAblAbilityContext* Context); // Function AbleCore.AblCustomTask.IsDoneBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19f5b90
	enum class EAblAbilityTaskRealm GetTaskRealmBP(); // Function AbleCore.AblCustomTask.GetTaskRealmBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x18e3680
	struct FText GetTaskNameBP(); // Function AbleCore.AblCustomTask.GetTaskNameBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19f5750
	struct FText GetTaskDescriptionBP(); // Function AbleCore.AblCustomTask.GetTaskDescriptionBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19f56b0
	struct FLinearColor GetTaskColorBP(); // Function AbleCore.AblCustomTask.GetTaskColorBP // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x19f5670
	struct FText GetTaskCategoryBP(); // Function AbleCore.AblCustomTask.GetTaskCategoryBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19f55d0
	struct UAblCustomTaskScratchPad* GetScratchPad(struct UAblAbilityContext* Context); // Function AbleCore.AblCustomTask.GetScratchPad // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19f5530
	struct FText GetDescriptiveTaskNameBP(); // Function AbleCore.AblCustomTask.GetDescriptiveTaskNameBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19f5490
	void GetActorsForTaskBP(struct UAblAbilityContext* Context, struct TArray<struct AActor*>& OutActorArray); // Function AbleCore.AblCustomTask.GetActorsForTaskBP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x19f53a0
	struct UAblCustomTaskScratchPad* CreateScratchPadBP(struct UAblAbilityContext* Context); // Function AbleCore.AblCustomTask.CreateScratchPadBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x19f4960
};

// Class AbleCore.AblDamageEventTaskScratchPad
// Size: 0x38 (Inherited: 0x28)
struct UAblDamageEventTaskScratchPad : UAblAbilityTaskScratchPad {
	struct TArray<float> DamageValues; // 0x28(0x10)
};

// Class AbleCore.AblDamageEventTask
// Size: 0x98 (Inherited: 0x70)
struct UAblDamageEventTask : UAblAbilityTask {
	float m_damage; // 0x70(0x04)
	enum class EAblAbilityTargetType m_DamageSource; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct TArray<enum class EAblAbilityTargetType> m_DamageTargets; // 0x78(0x10)
	struct FName m_EventName; // 0x88(0x08)
	enum class EAblAbilityTaskRealm m_TaskRealm; // 0x90(0x01)
	bool m_UseAsyncCalculate; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
};

// Class AbleCore.Able_AnimInstance_Interface
// Size: 0x28 (Inherited: 0x28)
struct UAble_AnimInstance_Interface : UInterface {

	void Set_LastDesiredWorldDirection(struct FVector InWorldDirection); // Function AbleCore.Able_AnimInstance_Interface.Set_LastDesiredWorldDirection // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_DesiredWorldSpeed(float InSpeed); // Function AbleCore.Able_AnimInstance_Interface.Set_DesiredWorldSpeed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_DesiredWorldDirection(struct FVector InWorldDirection); // Function AbleCore.Able_AnimInstance_Interface.Set_DesiredWorldDirection // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToLoco2(); // Function AbleCore.Able_AnimInstance_Interface.GoToLoco2 // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToLoco1(); // Function AbleCore.Able_AnimInstance_Interface.GoToLoco1 // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_LastDesiredWorldDirection(struct FVector& OutWorldDirection); // Function AbleCore.Able_AnimInstance_Interface.Get_LastDesiredWorldDirection // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_DesiredWorldSpeed(float& OutSpeed); // Function AbleCore.Able_AnimInstance_Interface.Get_DesiredWorldSpeed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_DesiredWorldDirection(struct FVector& OutWorldDirection); // Function AbleCore.Able_AnimInstance_Interface.Get_DesiredWorldDirection // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

// Class AbleCore.Able_Character_Interface
// Size: 0x28 (Inherited: 0x28)
struct UAble_Character_Interface : UInterface {

	bool PlayAbilityByClass(struct FName InAbilityChannelName, struct UObject* InAblAbilitClass, struct AActor* InInstigator); // Function AbleCore.Able_Character_Interface.PlayAbilityByClass // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool GetAbilityWithMultipleAssetsAndTags(struct FGameplayTagContainer& InSourceTagContainer, struct TArray<struct UInteractionArchitectAsset*>& InArchitectAssets, struct TArray<struct FGameplayTagContainer>& InArchitectTags, enum class EInteractionProject Project, bool& bOutIsAdditive, struct UAblAbility*& OutAbilityClass); // Function AbleCore.Able_Character_Interface.GetAbilityWithMultipleAssetsAndTags // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool GetAbilityWithMultipleAssets(struct FGameplayTagContainer& InSourceTagContainer, struct TArray<struct UInteractionArchitectAsset*>& InArchitectAssets, struct FGameplayTagContainer& InArchitectTagContainer, enum class EInteractionProject Project, bool& bOutIsAdditive, struct UAblAbility*& OutAbilityClass); // Function AbleCore.Able_Character_Interface.GetAbilityWithMultipleAssets // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool GetAbilityFromInteractionArchitect(struct FGameplayTagContainer& InSourceTagContainer, struct UInteractionArchitectAsset* InArchitectAsset, struct FGameplayTagContainer& InArchitectTagContainer, enum class EInteractionProject Project, bool& bOutIsAdditive, struct UAblAbility*& OutAbilityClass); // Function AbleCore.Able_Character_Interface.GetAbilityFromInteractionArchitect // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ExecuteAbilityOnChannelByClass(struct FName ChannelName, struct UObject* InAblAbilitClass, struct AActor* InInstigator); // Function AbleCore.Able_Character_Interface.ExecuteAbilityOnChannelByClass // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ExecuteAbilityByClass(struct UObject* InAblAbilitClass, struct AActor* InInstigator); // Function AbleCore.Able_Character_Interface.ExecuteAbilityByClass // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CancelAbilityByContext(struct UAblAbilityContext* InAblAbilityContext); // Function AbleCore.Able_Character_Interface.CancelAbilityByContext // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CancelAbilityByChannel(struct FName InAbilityChannelName); // Function AbleCore.Able_Character_Interface.CancelAbilityByChannel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

// Class AbleCore.Able_GameMode
// Size: 0x350 (Inherited: 0x330)
struct AAble_GameMode : AGameMode {
	struct FMulticastInlineDelegate OnPauseGameEvent; // 0x330(0x10)
	struct FMulticastInlineDelegate OnClearPauseGameEvent; // 0x340(0x10)
};

// Class AbleCore.RootMotionModifier
// Size: 0x50 (Inherited: 0x28)
struct URootMotionModifier : UObject {
	struct URootMotionModifierProperties* RootMotionModifierProperties; // 0x28(0x08)
	struct AActor* Instigator; // 0x30(0x08)
	enum class ERootMotionModifierOrder RootMotionModifierOrder; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Duration; // 0x3c(0x04)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class AbleCore.RootMotionModifierProperties
// Size: 0x30 (Inherited: 0x28)
struct URootMotionModifierProperties : UObject {
	enum class ERootMotionModifierOrder RootMotionModifierOrder; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AbleCore.RootMotionModifierUltimate
// Size: 0x50 (Inherited: 0x50)
struct URootMotionModifierUltimate : URootMotionModifier {
};

// Class AbleCore.AbleHUDWidgetStyle
// Size: 0x2cb0 (Inherited: 0x30)
struct UAbleHUDWidgetStyle : USlateWidgetStyleContainerBase {
	struct FAbleHUDStyle AbleHUDWidgetStyle; // 0x30(0x2c80)
};

// Class AbleCore.AblForceFeedbackTask
// Size: 0xa0 (Inherited: 0x70)
struct UAblForceFeedbackTask : UAblAbilityTask {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x70(0x08)
	struct FName FeedbackTagName; // 0x78(0x08)
	bool bStopFeedbackAtTaskEnd; // 0x80(0x01)
	bool bLoop; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct UCurveFloat* AttenuateDistanceFromPlayerCurve; // 0x88(0x08)
	struct UCurveFloat* AttenuateDistanceFromCameraCurve; // 0x90(0x08)
	bool bPlayerOnly; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class AbleCore.AblHermesSendMessageToTaskScratchPad
// Size: 0x38 (Inherited: 0x28)
struct UAblHermesSendMessageToTaskScratchPad : UAblAbilityTaskScratchPad {
	struct TArray<struct FHermesSendMessageToTaskEntry> InProgressMessage; // 0x28(0x10)
};

// Class AbleCore.AblHermesSendMessageToTask
// Size: 0x88 (Inherited: 0x70)
struct UAblHermesSendMessageToTask : UAblAbilityTask {
	enum class EAblAbilityTargetType m_MessageSender; // 0x70(0x01)
	enum class EAblAbilityTargetType m_MessageTarget; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	struct FName m_MessageName; // 0x74(0x08)
	struct FName m_CleanupMessageName; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AbleCore.AblHideActorScratchpad
// Size: 0x40 (Inherited: 0x28)
struct UAblHideActorScratchpad : UAblAbilityTaskScratchPad {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UAblTaskConditionScratchpad*> TaskConditionScratchpads; // 0x30(0x10)
};

// Class AbleCore.AblHideActorTask
// Size: 0x90 (Inherited: 0x70)
struct UAblHideActorTask : UAblAbilityTask {
	bool bHideThroughManagedState; // 0x70(0x01)
	bool bIgnoreParticleEmitters; // 0x71(0x01)
	bool bIgnoreStaticMeshes; // 0x72(0x01)
	char pad_73[0x5]; // 0x73(0x05)
	struct TArray<struct UAblTaskCondition*> Conditions; // 0x78(0x10)
	bool bMustPassAllConditions; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class AbleCore.PhysicalBodyBlendInfo
// Size: 0x88 (Inherited: 0x28)
struct UPhysicalBodyBlendInfo : UObject {
	struct TArray<float> SourceBodyWeights; // 0x28(0x10)
	struct TArray<float> DestBodyWeights; // 0x38(0x10)
	enum class EPhysicalBodyBlendState BlendState; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FAlphaBlend BlendFilter; // 0x50(0x30)
	int32_t ChannelIndex; // 0x80(0x04)
	bool bContinuous; // 0x84(0x01)
	bool bMarkedForDestroy; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
};

// Class AbleCore.PhysicalBodyBlendChannel
// Size: 0x58 (Inherited: 0x28)
struct UPhysicalBodyBlendChannel : UObject {
	struct TArray<float> ChannelBlendedWeights; // 0x28(0x10)
	struct TArray<float> ChannelFadeWeights; // 0x38(0x10)
	struct TArray<struct UPhysicalBodyBlendInfo*> PhysicalBodyBlendArray; // 0x48(0x10)
};

// Class AbleCore.AblPhysicalBodyManager
// Size: 0xa0 (Inherited: 0x28)
struct UAblPhysicalBodyManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<float> GlobalBlendedWeights; // 0x30(0x10)
	struct TMap<int32_t, struct UPhysicalBodyBlendChannel*> PhysicalBodyBlendChannelMap; // 0x40(0x50)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x90(0x08)
	int32_t NumBodies; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class AbleCore.AblPlaceableEvent
// Size: 0x50 (Inherited: 0x50)
struct UAblPlaceableEvent : UAblAbilityEvent {
};

// Class AbleCore.AblPlayAbilityByChannelScratchpad
// Size: 0x38 (Inherited: 0x28)
struct UAblPlayAbilityByChannelScratchpad : UAblAbilityTaskScratchPad {
	struct TArray<struct UAblTaskConditionScratchpad*> TaskConditionScratchpads; // 0x28(0x10)
};

// Class AbleCore.AblPlayAbilityByChannelTask
// Size: 0x98 (Inherited: 0x70)
struct UAblPlayAbilityByChannelTask : UAblAbilityTask {
	struct UAblAbility* m_Ability; // 0x70(0x08)
	enum class EAblAbilityTargetType m_Owner; // 0x78(0x01)
	enum class EAblAbilityTargetType m_Instigator; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FName m_ChannelName; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct UAblTaskCondition*> TaskConditions; // 0x88(0x10)
};

// Class AbleCore.AblPlayAbilityTask
// Size: 0x80 (Inherited: 0x70)
struct UAblPlayAbilityTask : UAblAbilityTask {
	struct UAblAbility* m_Ability; // 0x70(0x08)
	enum class EAblAbilityTargetType m_Owner; // 0x78(0x01)
	enum class EAblAbilityTargetType m_Instigator; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// Class AbleCore.AblPlayAnimationArchitectTaskScratchPad
// Size: 0x128 (Inherited: 0x28)
struct UAblPlayAnimationArchitectTaskScratchPad : UAblAbilityTaskScratchPad {
	struct AActor* TargetActor; // 0x28(0x08)
	struct FMulticastInlineDelegate OnAnimationPlayedDelegate; // 0x30(0x10)
	struct UAnimationAsset* AnimationAsset; // 0x40(0x08)
	struct TArray<struct UAnimationAsset*> BlendTrackAnimationAssets; // 0x48(0x10)
	float AssetEndTimeAdjust; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FAlphaBlend BlendIn; // 0x60(0x30)
	struct FAlphaBlend BlendOut; // 0x90(0x30)
	char pad_C0[0x68]; // 0xc0(0x68)
};

// Class AbleCore.AblPlayAnimationArchitectTask
// Size: 0x200 (Inherited: 0x70)
struct UAblPlayAnimationArchitectTask : UAblAbilityTask {
	struct FGameplayTagContainer m_AnimationSet; // 0x70(0x20)
	struct UAblAnimationAssetChooser* m_AnimationAssetChooser; // 0x90(0x08)
	struct UAblAnimTransitionInOverriderer* m_AnimTransitionInOverriderer; // 0x98(0x08)
	struct FGameplayTagContainer m_AnimationTags; // 0xa0(0x20)
	struct FGameplayTagContainer m_PreviewAnimationTags; // 0xc0(0x20)
	struct UAblAnimationTagChooser* m_AnimationTagChooser; // 0xe0(0x08)
	struct UAblBlendSpaceParameterGetter* m_BlendSpaceParameterGetter; // 0xe8(0x08)
	struct UAblAnimRateGetter* m_AnimRateGetter; // 0xf0(0x08)
	struct UAblStartPositionGetter* m_StartPositionGetter; // 0xf8(0x08)
	struct UAblBlendWeightMultiplierGetter* m_BlendWeightMultiplierGetter; // 0x100(0x08)
	struct TArray<struct UAblAnimationModifier*> m_AnimationModifiers; // 0x108(0x10)
	struct FName m_StateMachineName; // 0x118(0x08)
	struct FName m_AbilityStateName; // 0x120(0x08)
	struct UAblAnimationEndCallback* m_EndCallback; // 0x128(0x08)
	struct TArray<struct FBlendTrackInfo> m_BlendTracks; // 0x130(0x10)
	enum class EAnimBlendTickStyle m_BlendTickStyle; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct FAlphaBlend m_BlendIn; // 0x148(0x30)
	bool m_OverrideBlendOut; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct FAlphaBlend m_BlendOut; // 0x180(0x30)
	struct FAlphaBlend m_FadeOut; // 0x1b0(0x30)
	bool bFadeOutToEndOfAnimation; // 0x1e0(0x01)
	bool m_Loop; // 0x1e1(0x01)
	char pad_1E2[0x2]; // 0x1e2(0x02)
	float m_PlayRate; // 0x1e4(0x04)
	bool m_ScaleWithAbilityPlayRate; // 0x1e8(0x01)
	bool m_MatchPhase; // 0x1e9(0x01)
	bool m_PlayOnServer; // 0x1ea(0x01)
	char pad_1EB[0x1]; // 0x1eb(0x01)
	struct FAblRootMode m_RootMode; // 0x1ec(0x02)
	char pad_1EE[0x2]; // 0x1ee(0x02)
	struct UAblBoneBlendWeightAsset* m_BoneWeightAsset; // 0x1f0(0x08)
	bool m_RotationOffsetMeshSpace; // 0x1f8(0x01)
	bool m_IsAdditive; // 0x1f9(0x01)
	bool m_IsFacialAnimation; // 0x1fa(0x01)
	char pad_1FB[0x5]; // 0x1fb(0x05)
};

// Class AbleCore.AblPlayAnimationTaskScratchPad
// Size: 0xd8 (Inherited: 0x28)
struct UAblPlayAnimationTaskScratchPad : UAblAbilityTaskScratchPad {
	struct FMulticastInlineDelegate OnAnimationPlayedDelegate; // 0x28(0x10)
	struct TArray<struct TWeakObjectPtr<struct UAblAbilityComponent>> AbilityComponents; // 0x38(0x10)
	struct TArray<struct TWeakObjectPtr<struct USkeletalMeshComponent>> SingleNodeSkeletalComponents; // 0x48(0x10)
	float EndTimeAdjust; // 0x58(0x04)
	char pad_5C[0x7c]; // 0x5c(0x7c)
};

// Class AbleCore.AblPlayAnimationTask
// Size: 0x188 (Inherited: 0x70)
struct UAblPlayAnimationTask : UAblAbilityTask {
	struct UAblAnimationAssetChooser* m_AnimationAssetChooser; // 0x70(0x08)
	struct UAnimationAsset* m_AnimationAsset; // 0x78(0x08)
	struct UAblBlendSpaceParameterGetter* m_BlendSpaceParameterGetter; // 0x80(0x08)
	struct UAblAnimRateGetter* m_AnimRateGetter; // 0x88(0x08)
	struct UAblStartPositionGetter* m_StartPositionGetter; // 0x90(0x08)
	struct UAblBlendWeightMultiplierGetter* m_BlendWeightMultiplierGetter; // 0x98(0x08)
	struct TArray<struct UAblAnimationModifier*> m_AnimationModifiers; // 0xa0(0x10)
	enum class EAblPlayAnimationTaskAnimMode m_AnimationMode; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FName m_StateMachineName; // 0xb4(0x08)
	struct FName m_AbilityStateName; // 0xbc(0x08)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FAlphaBlend m_BlendIn; // 0xc8(0x30)
	bool m_OverrideBlendOut; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FAlphaBlend m_BlendOut; // 0x100(0x30)
	struct FAlphaBlend m_FadeOut; // 0x130(0x30)
	bool m_Loop; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	struct FAblBlendTimes m_DynamicMontageBlend; // 0x164(0x08)
	float m_PlayRate; // 0x16c(0x04)
	bool m_ScaleWithAbilityPlayRate; // 0x170(0x01)
	bool m_StopAnimationOnInterrupt; // 0x171(0x01)
	bool m_MatchPhase; // 0x172(0x01)
	bool m_PlayOnServer; // 0x173(0x01)
	bool m_bOverrideAnimGraphRootMotionProperties; // 0x174(0x01)
	struct FAblRootMode m_RootMode; // 0x175(0x02)
	char pad_177[0x1]; // 0x177(0x01)
	struct UAblBoneBlendWeightAsset* m_BoneWeightAsset; // 0x178(0x08)
	bool m_RotationOffsetMeshSpace; // 0x180(0x01)
	bool m_IsAdditive; // 0x181(0x01)
	char pad_182[0x6]; // 0x182(0x06)
};

// Class AbleCore.AblParticleEffectParam
// Size: 0x30 (Inherited: 0x28)
struct UAblParticleEffectParam : UObject {
	struct FName m_ParameterName; // 0x28(0x08)
};

// Class AbleCore.AblParticleEffectParamContextActor
// Size: 0x38 (Inherited: 0x30)
struct UAblParticleEffectParamContextActor : UAblParticleEffectParam {
	enum class EAblAbilityTargetType m_ContextActor; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AbleCore.AblParticleEffectParamLocation
// Size: 0x58 (Inherited: 0x30)
struct UAblParticleEffectParamLocation : UAblParticleEffectParam {
	struct FAblAbilityTargetTypeLocation m_Location; // 0x30(0x28)
};

// Class AbleCore.AblPlayParticleEffectTaskScratchPad
// Size: 0x38 (Inherited: 0x28)
struct UAblPlayParticleEffectTaskScratchPad : UAblAbilityTaskScratchPad {
	struct TArray<struct TWeakObjectPtr<struct UParticleSystemComponent>> SpawnedEffects; // 0x28(0x10)
};

// Class AbleCore.AblPlayParticleEffectTask
// Size: 0xb8 (Inherited: 0x70)
struct UAblPlayParticleEffectTask : UAblAbilityTask {
	struct UParticleSystem* m_EffectTemplate; // 0x70(0x08)
	struct FName m_SocketName; // 0x78(0x08)
	bool m_AttachToSocket; // 0x80(0x01)
	bool m_UseSocketRotation; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	struct FVector m_LocationOffset; // 0x84(0x0c)
	struct FRotator m_RotationOffset; // 0x90(0x0c)
	float m_Scale; // 0x9c(0x04)
	bool m_DestroyAtEnd; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct UAblParticleEffectParam*> m_Parameters; // 0xa8(0x10)
};

// Class AbleCore.AblPlaySoundTaskScratchPad
// Size: 0x38 (Inherited: 0x28)
struct UAblPlaySoundTaskScratchPad : UAblAbilityTaskScratchPad {
	struct TArray<struct TWeakObjectPtr<struct UAudioComponent>> AttachedSounds; // 0x28(0x10)
};

// Class AbleCore.AblPlaySoundTask
// Size: 0x98 (Inherited: 0x70)
struct UAblPlaySoundTask : UAblAbilityTask {
	struct USoundBase* m_Sound; // 0x70(0x08)
	bool m_2DSound; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FVector m_LocationOffset; // 0x7c(0x0c)
	struct FName m_SocketName; // 0x88(0x08)
	bool m_AttachToSocket; // 0x90(0x01)
	bool m_DestroyOnEnd; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float m_DestroyFadeOutDuration; // 0x94(0x04)
};

// Class AbleCore.AblPossessionTaskScratchPad
// Size: 0x30 (Inherited: 0x28)
struct UAblPossessionTaskScratchPad : UAblAbilityTaskScratchPad {
	struct TWeakObjectPtr<struct APlayerController> PossessorController; // 0x28(0x08)
};

// Class AbleCore.AblPossessionTask
// Size: 0x78 (Inherited: 0x70)
struct UAblPossessionTask : UAblAbilityTask {
	enum class EAblAbilityTargetType m_Possessor; // 0x70(0x01)
	enum class EAblAbilityTargetType m_PossessionTarget; // 0x71(0x01)
	bool m_UnPossessOnEnd; // 0x72(0x01)
	char pad_73[0x5]; // 0x73(0x05)
};

// Class AbleCore.AblPrintToScreenTask
// Size: 0x80 (Inherited: 0x70)
struct UAblPrintToScreenTask : UAblAbilityTask {
	struct FString DebugMessage; // 0x70(0x10)
};

// Class AbleCore.AblRayCastQueryTaskScratchPad
// Size: 0x38 (Inherited: 0x28)
struct UAblRayCastQueryTaskScratchPad : UAblAbilityTaskScratchPad {
	char pad_28[0x8]; // 0x28(0x08)
	bool AsyncProcessed; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AbleCore.AblRayCastQueryTask
// Size: 0xb0 (Inherited: 0x70)
struct UAblRayCastQueryTask : UAblAbilityTask {
	float m_Length; // 0x70(0x04)
	bool m_OnlyReturnBlockingHit; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FAblAbilityTargetTypeLocation m_QueryLocation; // 0x78(0x28)
	enum class ECollisionChannel m_CollisionChannel; // 0xa0(0x01)
	bool m_fireEvent; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	struct FName m_name; // 0xa4(0x08)
	bool m_CopyResultsToContext; // 0xac(0x01)
	bool m_AllowDuplicateEntries; // 0xad(0x01)
	enum class EAblAbilityTaskRealm m_TaskRealm; // 0xae(0x01)
	bool m_UseAsyncQuery; // 0xaf(0x01)
};

// Class AbleCore.AblReactionAbilityScratchPad
// Size: 0x70 (Inherited: 0x28)
struct UAblReactionAbilityScratchPad : UAblAbilityBaseScratchPad {
	struct UAblReactionData* ReactionData; // 0x28(0x08)
	struct FMulticastInlineDelegate OnReactionAbilityStart; // 0x30(0x10)
	struct FMulticastInlineDelegate OnReactionAbilityInterrupt; // 0x40(0x10)
	struct FMulticastInlineDelegate OnReactionAbilityEnd; // 0x50(0x10)
	struct FMulticastInlineDelegate OnReactionAbilityBranched; // 0x60(0x10)
};

// Class AbleCore.AblReactionAbility
// Size: 0xe0 (Inherited: 0xc8)
struct UAblReactionAbility : UAblAbility {
	struct FName AbleAbilityChannelName; // 0xc8(0x08)
	enum class EAblNpcReactChannelType ChannelType; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float PlayerInstigatorTicketTimeIncrease; // 0xd4(0x04)
	bool bAddDeadTagIfDead; // 0xd8(0x01)
	bool bWarmUpRagdollPhysics; // 0xd9(0x01)
	bool bBranchToRagdollInWater; // 0xda(0x01)
	char pad_DB[0x5]; // 0xdb(0x05)

	struct UAblReactionData* GetReactionData(struct UAblAbilityContext* Context); // Function AbleCore.AblReactionAbility.GetReactionData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fc4c0
};

// Class AbleCore.AblReactionData
// Size: 0xe0 (Inherited: 0x28)
struct UAblReactionData : UObject {
	char pad_28[0x88]; // 0x28(0x88)
	struct FGameplayTagContainer MunitionTags; // 0xb0(0x20)
	struct TWeakObjectPtr<struct UActorComponent> ReactionEffectComponent; // 0xd0(0x08)
	bool bDestroyEffectComponentOnReactionEnd; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	bool IsPassive(); // Function AbleCore.AblReactionData.IsPassive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e9270
	struct AActor* GetTarget(); // Function AbleCore.AblReactionData.GetTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fc560
	struct AActor* GetInstigator(); // Function AbleCore.AblReactionData.GetInstigator // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fc490
	struct FName GetChannelName(); // Function AbleCore.AblReactionData.GetChannelName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fc470
};

// Class AbleCore.AblReactionComponent
// Size: 0x1d0 (Inherited: 0xc8)
struct UAblReactionComponent : UActorComponent {
	struct FMulticastInlineDelegate OnReactionReceived; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnReactionQueued; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnReactionFinished; // 0xe8(0x10)
	struct UAblAbilityComponent* AbleAbilityComp; // 0xf8(0x08)
	struct UAnimationArchitectComponent* AnimationArchitectComp; // 0x100(0x08)
	struct TMap<struct FName, struct FAblReactionsList> QueuedReactions; // 0x108(0x50)
	struct TMap<struct FName, struct FAblReactionsList> RunningReactions; // 0x158(0x50)
	char pad_1A8[0x28]; // 0x1a8(0x28)

	struct UAblReactionData* QueueReaction(struct FQueueReactionParams& ReactionParams); // Function AbleCore.AblReactionComponent.QueueReaction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19fcbc0
	struct UAblReactionData* QueueGivenReactionAbility(struct UAblReactionAbility* ReactionAbility, struct FQueueReactionParams& ReactionParams); // Function AbleCore.AblReactionComponent.QueueGivenReactionAbility // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19fcaa0
	struct UAblReactionData* QueueGivenReactionAbilities(struct TArray<struct UAblReactionAbility*> ReactionAbilities, struct FQueueReactionParams& ReactionParams); // Function AbleCore.AblReactionComponent.QueueGivenReactionAbilities // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19fc920
	struct FQueueReactionParams MakeReactionParamsFromReactionData(struct UAblReactionData* ReactionData); // Function AbleCore.AblReactionComponent.MakeReactionParamsFromReactionData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19fc850
	bool IsAnyReactionRunning(); // Function AbleCore.AblReactionComponent.IsAnyReactionRunning // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fc820
	void HandleReactionAbilityStart(struct UAblAbilityContext* Context); // Function AbleCore.AblReactionComponent.HandleReactionAbilityStart // (Final|Native|Protected) // @ game+0x19fc790
	void HandleReactionAbilityInterrupt(struct UAblAbilityContext* Context); // Function AbleCore.AblReactionComponent.HandleReactionAbilityInterrupt // (Final|Native|Protected) // @ game+0x19fc700
	void HandleReactionAbilityEnd(struct UAblAbilityContext* Context); // Function AbleCore.AblReactionComponent.HandleReactionAbilityEnd // (Final|Native|Protected) // @ game+0x19fc670
	void HandleReactionAbilityBranch(struct UAblAbilityContext* CurrentContext, struct UAblAbilityContext* NextContext); // Function AbleCore.AblReactionComponent.HandleReactionAbilityBranch // (Final|Native|Protected) // @ game+0x19fc5a0
	void EnableReactions(); // Function AbleCore.AblReactionComponent.EnableReactions // (Native|Public|BlueprintCallable) // @ game+0x1980b60
	void DisableReactions(); // Function AbleCore.AblReactionComponent.DisableReactions // (Native|Public|BlueprintCallable) // @ game+0x19fc450
};

// Class AbleCore.AblRemoveGameplayTagTask
// Size: 0x80 (Inherited: 0x70)
struct UAblRemoveGameplayTagTask : UAblAbilityTask {
	struct TArray<struct FGameplayTag> m_TagList; // 0x70(0x10)
};

// Class AbleCore.AblRenderStencil
// Size: 0x80 (Inherited: 0x70)
struct UAblRenderStencil : UAblAbilityTask {
	struct FStencilManagerEffectName StencilEffect; // 0x70(0x08)
	bool resetStencilOnExit; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class AbleCore.AblSetArchitectTagsTask
// Size: 0x98 (Inherited: 0x70)
struct UAblSetArchitectTagsTask : UAblAbilityTask {
	struct FGameplayTagContainer ArchitectTags; // 0x70(0x20)
	bool RemoveTagsAtEndOfTask; // 0x90(0x01)
	bool AddTheseTags; // 0x91(0x01)
	bool RemoveTheseTags; // 0x92(0x01)
	enum class ArchitectType Type; // 0x93(0x01)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class AbleCore.AblSetArchitectTagTask
// Size: 0x80 (Inherited: 0x70)
struct UAblSetArchitectTagTask : UAblAbilityTask {
	struct FGameplayTag ArchitectTag; // 0x70(0x08)
	bool RemoveTagAtEndOfTask; // 0x78(0x01)
	bool AddThisTag; // 0x79(0x01)
	bool RemoveThisTag; // 0x7a(0x01)
	enum class ArchitectType Type; // 0x7b(0x01)
	bool ApplyToAnimationArchitect; // 0x7c(0x01)
	bool ApplyToInteractionArchitect; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// Class AbleCore.AblSetCollisionChannelResponseTaskScratchPad
// Size: 0x38 (Inherited: 0x28)
struct UAblSetCollisionChannelResponseTaskScratchPad : UAblAbilityTaskScratchPad {
	struct TArray<struct FCollisionLayerResponseEntry> PreviousCollisionValues; // 0x28(0x10)
};

// Class AbleCore.AblSetCollisionChannelResponseTask
// Size: 0x78 (Inherited: 0x70)
struct UAblSetCollisionChannelResponseTask : UAblAbilityTask {
	enum class ECollisionChannel m_Channel; // 0x70(0x01)
	enum class ECollisionResponse m_Response; // 0x71(0x01)
	bool m_SetAllChannelsToResponse; // 0x72(0x01)
	bool m_RestoreOnEnd; // 0x73(0x01)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class AbleCore.AblSetCollisionChannelTaskScratchPad
// Size: 0x78 (Inherited: 0x28)
struct UAblSetCollisionChannelTaskScratchPad : UAblAbilityTaskScratchPad {
	struct TMap<struct TWeakObjectPtr<struct UPrimitiveComponent>, enum class ECollisionChannel> PrimitiveToChannelMap; // 0x28(0x50)
};

// Class AbleCore.AblSetCollisionChannelTask
// Size: 0x78 (Inherited: 0x70)
struct UAblSetCollisionChannelTask : UAblAbilityTask {
	enum class ECollisionChannel m_Channel; // 0x70(0x01)
	bool m_RestoreOnEnd; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// Class AbleCore.AblSetGameplayTagTask
// Size: 0x88 (Inherited: 0x70)
struct UAblSetGameplayTagTask : UAblAbilityTask {
	struct TArray<struct FGameplayTag> m_TagList; // 0x70(0x10)
	bool m_RemoveOnEnd; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AbleCore.AblSetShaderParameterTaskScratchPad
// Size: 0xb0 (Inherited: 0x28)
struct UAblSetShaderParameterTaskScratchPad : UAblAbilityTaskScratchPad {
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x28(0x10)
	struct TArray<struct UAblSetParameterValue*> PreviousValues; // 0x38(0x10)
	struct FAlphaBlend BlendIn; // 0x48(0x30)
	struct FAlphaBlend BlendOut; // 0x78(0x30)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class AbleCore.AblSetShaderParameterTask
// Size: 0xe8 (Inherited: 0x70)
struct UAblSetShaderParameterTask : UAblAbilityTask {
	struct FName m_ParameterName; // 0x70(0x08)
	struct UAblSetParameterValue* m_value; // 0x78(0x08)
	struct FAlphaBlend m_BlendIn; // 0x80(0x30)
	bool m_RestoreValueOnEnd; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FAlphaBlend m_BlendOut; // 0xb8(0x30)
};

// Class AbleCore.AblSetParameterValue
// Size: 0x30 (Inherited: 0x28)
struct UAblSetParameterValue : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class AbleCore.AblSetScalarParameterValue
// Size: 0x38 (Inherited: 0x30)
struct UAblSetScalarParameterValue : UAblSetParameterValue {
	float m_Scalar; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AbleCore.AblSetVectorParameterValue
// Size: 0x40 (Inherited: 0x30)
struct UAblSetVectorParameterValue : UAblSetParameterValue {
	struct FLinearColor m_Vector; // 0x30(0x10)
};

// Class AbleCore.AblSetTextureParameterValue
// Size: 0x38 (Inherited: 0x30)
struct UAblSetTextureParameterValue : UAblSetParameterValue {
	struct UTexture* m_Texture; // 0x30(0x08)
};

// Class AbleCore.AbleSettings
// Size: 0x38 (Inherited: 0x28)
struct UAbleSettings : UObject {
	bool m_EnableAsync; // 0x28(0x01)
	bool m_AllowAsyncAbilityUpdate; // 0x29(0x01)
	bool m_AllowAsyncCooldownUpdate; // 0x2a(0x01)
	bool m_LogAbilityFailues; // 0x2b(0x01)
	bool m_LogVerbose; // 0x2c(0x01)
	bool m_EchoVerboseToScreen; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float m_VerboseScreenOutputLifetime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AbleCore.AblSpawnActorTaskScratchPad
// Size: 0x30 (Inherited: 0x28)
struct UAblSpawnActorTaskScratchPad : UAblAbilityTaskScratchPad {
	struct TWeakObjectPtr<struct AActor> SpawnedActor; // 0x28(0x08)
};

// Class AbleCore.AblSpawnActorTask
// Size: 0xd0 (Inherited: 0x70)
struct UAblSpawnActorTask : UAblAbilityTask {
	struct AActor* m_actorClass; // 0x70(0x08)
	struct FAblAbilityTargetTypeLocation m_SpawnLocation; // 0x78(0x28)
	struct FVector m_InitialVelocity; // 0xa0(0x0c)
	bool m_SetOwner; // 0xac(0x01)
	enum class EAblAbilityTargetType m_OwnerTargetType; // 0xad(0x01)
	bool m_AttachToOwnerSocket; // 0xae(0x01)
	enum class EAttachmentRule m_AttachmentRule; // 0xaf(0x01)
	struct FName m_SocketName; // 0xb0(0x08)
	struct FVector m_Offset; // 0xb8(0x0c)
	bool m_InheritOwnerLinearVelocity; // 0xc4(0x01)
	bool m_MarkAsTransient; // 0xc5(0x01)
	bool m_DestroyAtEnd; // 0xc6(0x01)
	bool m_fireEvent; // 0xc7(0x01)
	struct FName m_name; // 0xc8(0x08)
};

// Class AbleCore.AblSpeedCompensateBlendSpaceParameterGetter
// Size: 0x28 (Inherited: 0x28)
struct UAblSpeedCompensateBlendSpaceParameterGetter : UAblBlendSpaceParameterGetter {
};

// Class AbleCore.AblStartPositionGetter
// Size: 0x28 (Inherited: 0x28)
struct UAblStartPositionGetter : UObject {
};

// Class AbleCore.AblTargetingBase
// Size: 0x78 (Inherited: 0x28)
struct UAblTargetingBase : UObject {
	bool m_AutoCalculateRange; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float m_Range; // 0x2c(0x04)
	bool m_CalculateAs2DRange; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FAblAbilityTargetTypeLocation m_Location; // 0x34(0x28)
	enum class ECollisionChannel m_CollisionChannel; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<struct UAblAbilityTargetingFilter*> m_Filters; // 0x60(0x10)
	bool m_UseAsync; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class AbleCore.AblTargetingBox
// Size: 0x88 (Inherited: 0x78)
struct UAblTargetingBox : UAblTargetingBase {
	struct FVector m_HalfExtents; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AbleCore.AblTargetingCapsule
// Size: 0x80 (Inherited: 0x78)
struct UAblTargetingCapsule : UAblTargetingBase {
	float m_Height; // 0x78(0x04)
	float m_radius; // 0x7c(0x04)
};

// Class AbleCore.AblTargetingCone
// Size: 0x88 (Inherited: 0x78)
struct UAblTargetingCone : UAblTargetingBase {
	float m_FOV; // 0x78(0x04)
	float m_Length; // 0x7c(0x04)
	float m_Height; // 0x80(0x04)
	bool m_2DQuery; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// Class AbleCore.AblAbilityTargetingFilter
// Size: 0x28 (Inherited: 0x28)
struct UAblAbilityTargetingFilter : UObject {
};

// Class AbleCore.AblAbilityTargetingFilterSortByDistance
// Size: 0x30 (Inherited: 0x28)
struct UAblAbilityTargetingFilterSortByDistance : UAblAbilityTargetingFilter {
	bool m_Use2DDistance; // 0x28(0x01)
	enum class EAblTargetingFilterSort m_SortDirection; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// Class AbleCore.AblAbilityTargetingFilterSelf
// Size: 0x28 (Inherited: 0x28)
struct UAblAbilityTargetingFilterSelf : UAblAbilityTargetingFilter {
};

// Class AbleCore.AblAbilityTargetingFilterOwner
// Size: 0x28 (Inherited: 0x28)
struct UAblAbilityTargetingFilterOwner : UAblAbilityTargetingFilter {
};

// Class AbleCore.AblAbilityTargetingFilterInstigator
// Size: 0x28 (Inherited: 0x28)
struct UAblAbilityTargetingFilterInstigator : UAblAbilityTargetingFilter {
};

// Class AbleCore.AblAbilityTargetingFilterClass
// Size: 0x38 (Inherited: 0x28)
struct UAblAbilityTargetingFilterClass : UAblAbilityTargetingFilter {
	struct UObject* m_Class; // 0x28(0x08)
	bool m_Negate; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AbleCore.AblAbilityTargetingFilterMaxTargets
// Size: 0x30 (Inherited: 0x28)
struct UAblAbilityTargetingFilterMaxTargets : UAblAbilityTargetingFilter {
	int32_t m_MaxTargets; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AbleCore.AblAbilityTargetingFilterCustom
// Size: 0x38 (Inherited: 0x28)
struct UAblAbilityTargetingFilterCustom : UAblAbilityTargetingFilter {
	struct FName m_EventName; // 0x28(0x08)
	bool m_UseAsync; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AbleCore.AblTargetingInstigator
// Size: 0x78 (Inherited: 0x78)
struct UAblTargetingInstigator : UAblTargetingBase {
};

// Class AbleCore.AblTargetingSelf
// Size: 0x78 (Inherited: 0x78)
struct UAblTargetingSelf : UAblTargetingBase {
};

// Class AbleCore.AblTargetingOwner
// Size: 0x78 (Inherited: 0x78)
struct UAblTargetingOwner : UAblTargetingBase {
};

// Class AbleCore.AblTargetingCustom
// Size: 0x78 (Inherited: 0x78)
struct UAblTargetingCustom : UAblTargetingBase {
};

// Class AbleCore.AblTargetingRaycast
// Size: 0x80 (Inherited: 0x78)
struct UAblTargetingRaycast : UAblTargetingBase {
	float m_Length; // 0x78(0x04)
	bool m_OnlyWantBlockingObject; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
};

// Class AbleCore.AblTargetingSphere
// Size: 0x80 (Inherited: 0x78)
struct UAblTargetingSphere : UAblTargetingBase {
	float m_radius; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class AbleCore.AblHasTagTaskCondition
// Size: 0x38 (Inherited: 0x28)
struct UAblHasTagTaskCondition : UAblTaskCondition {
	struct FName Tag; // 0x28(0x08)
	bool bInverse; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AbleCore.ablTimeDilationTaskScratchPad
// Size: 0x30 (Inherited: 0x28)
struct UablTimeDilationTaskScratchPad : UAblAbilityTaskScratchPad {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class AbleCore.AblTimeDilationTask
// Size: 0x90 (Inherited: 0x70)
struct UAblTimeDilationTask : UAblAbilityTask {
	enum class ETimeDilationTarget TimeDilationTarget; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UCurveFloat* TimeDilationCurve; // 0x78(0x08)
	float TimeDilation; // 0x80(0x04)
	float EaseInDuration; // 0x84(0x04)
	bool bCounterWorld; // 0x88(0x01)
	bool bEndTaskOnReactionDone; // 0x89(0x01)
	bool bTestAgainstWorldTime; // 0x8a(0x01)
	char pad_8B[0x5]; // 0x8b(0x05)
};

// Class AbleCore.AblTurnToTaskScratchPad
// Size: 0x68 (Inherited: 0x28)
struct UAblTurnToTaskScratchPad : UAblAbilityTaskScratchPad {
	struct TArray<struct FTurnToTaskEntry> InProgressTurn; // 0x28(0x10)
	struct FAlphaBlend TurningBlend; // 0x38(0x30)
};

// Class AbleCore.AblTurnToTask
// Size: 0xb8 (Inherited: 0x70)
struct UAblTurnToTask : UAblAbilityTask {
	enum class EAblAbilityTargetType m_RotationTarget; // 0x70(0x01)
	bool m_TrackTarget; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	struct FRotator m_RotationOffset; // 0x74(0x0c)
	bool m_SetYaw; // 0x80(0x01)
	bool m_SetPitch; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FAlphaBlend m_Blend; // 0x88(0x30)
};

// Class AbleCore.AnimationClip_AblAbility
// Size: 0x28 (Inherited: 0x28)
struct UAnimationClip_AblAbility : UAnimationClipProvider {
};

// Class AbleCore.BTDecorator_HasActivePassiveAbility
// Size: 0x98 (Inherited: 0x68)
struct UBTDecorator_HasActivePassiveAbility : UBTDecorator {
	struct FBlackboardKeySelector ActorToCheck; // 0x68(0x28)
	struct UAblAbility* Ability; // 0x90(0x08)
};

// Class AbleCore.BTDecorator_IsAbilityOnCooldown
// Size: 0x98 (Inherited: 0x68)
struct UBTDecorator_IsAbilityOnCooldown : UBTDecorator {
	struct FBlackboardKeySelector ActorToCheck; // 0x68(0x28)
	struct UAblAbility* Ability; // 0x90(0x08)
};

// Class AbleCore.BTDecorator_IsInAbilityRange
// Size: 0xc8 (Inherited: 0x68)
struct UBTDecorator_IsInAbilityRange : UBTDecorator {
	struct FBlackboardKeySelector PointA; // 0x68(0x28)
	struct FBlackboardKeySelector PointB; // 0x90(0x28)
	struct UAblAbility* Ability; // 0xb8(0x08)
	bool XYDistance; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class AbleCore.BTDecorator_IsPlayingAbility
// Size: 0x90 (Inherited: 0x68)
struct UBTDecorator_IsPlayingAbility : UBTDecorator {
	struct FBlackboardKeySelector ActorToCheck; // 0x68(0x28)
};

// Class AbleCore.BTTask_PlayAbilityBase
// Size: 0xc0 (Inherited: 0x70)
struct UBTTask_PlayAbilityBase : UBTTaskNode {
	struct FName AbilityChannelName; // 0x70(0x08)
	bool MarkAsInProgressDuringExecution; // 0x78(0x01)
	bool bWaitForHermesMessage; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FName MessageName; // 0x7c(0x08)
	char pad_84[0x3c]; // 0x84(0x3c)
};

// Class AbleCore.BTTask_PlayAbility
// Size: 0xc8 (Inherited: 0xc0)
struct UBTTask_PlayAbility : UBTTask_PlayAbilityBase {
	struct UAblAbility* Ability; // 0xc0(0x08)
};

// Class AbleCore.BTTask_PlayArchitectAbility
// Size: 0x110 (Inherited: 0xc0)
struct UBTTask_PlayArchitectAbility : UBTTask_PlayAbilityBase {
	struct UInteractionArchitectAsset* InteractionArchitectAsset; // 0xc0(0x08)
	enum class EInteractionProject Project; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FGameplayTagContainer SourceTags; // 0xd0(0x20)
	struct FGameplayTagContainer TargetTags; // 0xf0(0x20)
};

// Class AbleCore.BTTask_StopAbility
// Size: 0x88 (Inherited: 0x70)
struct UBTTask_StopAbility : UBTTaskNode {
	bool CancelActive; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UAblAbility* Ability; // 0x78(0x08)
	enum class EAblAbilityTaskResult ResultToUse; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AbleCore.IKDriver_GroundAdjustment_Able
// Size: 0x390 (Inherited: 0x390)
struct UIKDriver_GroundAdjustment_Able : UIKDriver_GroundAdjustment {
};

// Class AbleCore.ObjectTrackerManager
// Size: 0x88 (Inherited: 0x28)
struct UObjectTrackerManager : UObject {
	char pad_28[0x60]; // 0x28(0x60)
};

