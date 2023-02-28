// Class AnimationArchitectRuntime.BaseArchitectFilter
// Size: 0x28 (Inherited: 0x28)
struct UBaseArchitectFilter : UObject {
};

// Class AnimationArchitectRuntime.AAFilter_AnimationLength
// Size: 0x30 (Inherited: 0x28)
struct UAAFilter_AnimationLength : UBaseArchitectFilter {
	float MaxAnimationLength; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AnimationArchitectRuntime.AnimationArchitect_ActorInterface
// Size: 0x28 (Inherited: 0x28)
struct UAnimationArchitect_ActorInterface : UInterface {

	struct UAnimationArchitectComponent* GetAnimationArchitectComponent(); // Function AnimationArchitectRuntime.AnimationArchitect_ActorInterface.GetAnimationArchitectComponent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindSceneRigAsset(struct FGameplayTagContainer& InAnimTagContainer, struct UObject*& OutSceneRig); // Function AnimationArchitectRuntime.AnimationArchitect_ActorInterface.FindSceneRigAsset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool FindArchitectAssets(struct FGameplayTagContainer& InTagContainer, struct TArray<struct UObject*>& Assets); // Function AnimationArchitectRuntime.AnimationArchitect_ActorInterface.FindArchitectAssets // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindArchitectAssetFromMonolythicAsset(struct FGameplayTagContainer& InAssetTypeTagContainer, struct FGameplayTagContainer& InTagContainer, struct UObject*& OutAsset, bool bForceFirstOnly); // Function AnimationArchitectRuntime.AnimationArchitect_ActorInterface.FindArchitectAssetFromMonolythicAsset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindArchitectAsset(struct FGameplayTagContainer& InAnimTagContainer, struct UObject*& OutAsset, bool bForceFirstOnly); // Function AnimationArchitectRuntime.AnimationArchitect_ActorInterface.FindArchitectAsset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddAnimationArchitectGamplayTag(struct FGameplayTag& InGameplayTag); // Function AnimationArchitectRuntime.AnimationArchitect_ActorInterface.AddAnimationArchitectGamplayTag // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddAnimationArchitectAsset(struct UAnimationArchitectAsset* InArchitectAsset); // Function AnimationArchitectRuntime.AnimationArchitect_ActorInterface.AddAnimationArchitectAsset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

// Class AnimationArchitectRuntime.AnimationArchitect_AnimInstance
// Size: 0x2c0 (Inherited: 0x2c0)
struct UAnimationArchitect_AnimInstance : UAnimInstance {
};

// Class AnimationArchitectRuntime.AnimationArcitectAsset_ConnectionsCluster
// Size: 0x38 (Inherited: 0x28)
struct UAnimationArcitectAsset_ConnectionsCluster : UObject {
	struct TArray<struct FAnimationArchitectAsset_Connection> ConnectionArray; // 0x28(0x10)
};

// Class AnimationArchitectRuntime.BaseArchitectAsset
// Size: 0xd0 (Inherited: 0x30)
struct UBaseArchitectAsset : UDataAsset {
	struct TArray<struct UBaseArchitectAsset*> HardDependencies; // 0x30(0x10)
	struct TArray<struct FBaseArchitectAsset_SoftDependencyContainer> SoftDependencies; // 0x40(0x10)
	struct TArray<struct FGameplayTag> DefaultKeyOrder; // 0x50(0x10)
	char pad_60[0x70]; // 0x60(0x70)
};

// Class AnimationArchitectRuntime.AnimationArchitectAsset
// Size: 0xe8 (Inherited: 0xd0)
struct UAnimationArchitectAsset : UBaseArchitectAsset {
	struct TArray<struct FAnimationArchitectAsset_Connection> ConnectionArray; // 0xd0(0x10)
	struct UAnimationArcitectAsset_ConnectionsCluster* ConnectionsCluster; // 0xe0(0x08)
};

// Class AnimationArchitectRuntime.AnimationArchitect_Character
// Size: 0x4f0 (Inherited: 0x4e0)
struct AAnimationArchitect_Character : ACharacter {
	char pad_4E0[0x8]; // 0x4e0(0x08)
	struct UAnimationArchitectComponent* AnimationArchitectComponent; // 0x4e8(0x08)

	struct UAnimationArchitectComponent* GetAnimationArchitectComponent(); // Function AnimationArchitectRuntime.AnimationArchitect_Character.GetAnimationArchitectComponent // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1074020
	bool FindArchitectAssets(struct FGameplayTagContainer& InAnimTagContainer, struct TArray<struct UObject*>& Assets); // Function AnimationArchitectRuntime.AnimationArchitect_Character.FindArchitectAssets // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1073dd0
	void FindArchitectAssetFromMonolythicAsset(struct FGameplayTagContainer& InAssetTypeTagContainer, struct FGameplayTagContainer& InTagContainer, struct UObject*& OutAsset, bool bForceFirstOnly); // Function AnimationArchitectRuntime.AnimationArchitect_Character.FindArchitectAssetFromMonolythicAsset // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1073bf0
	void FindArchitectAsset(struct FGameplayTagContainer& InAnimTagContainer, struct UObject*& OutAsset, bool bForceFirstOnly); // Function AnimationArchitectRuntime.AnimationArchitect_Character.FindArchitectAsset // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1073a90
	void AddInteractionArchitectGameplayTag(struct FGameplayTag& InGamepayTag); // Function AnimationArchitectRuntime.AnimationArchitect_Character.AddInteractionArchitectGameplayTag // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1073810
	void AddAnimationArchitectGameplayTag(struct FGameplayTag& InGameplayTag); // Function AnimationArchitectRuntime.AnimationArchitect_Character.AddAnimationArchitectGameplayTag // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1073590
};

// Class AnimationArchitectRuntime.AnimationArchitectComponent
// Size: 0x358 (Inherited: 0xc8)
struct UAnimationArchitectComponent : UActorComponent {
	char pad_C8[0x28]; // 0xc8(0x28)
	enum class ArchitectType AssetType; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TArray<struct UAnimationArchitectAsset*> HardAnimationArchitectAssets; // 0xf8(0x10)
	struct UAnimationArchitectAsset* TempAnimationArchitectAsset; // 0x108(0x08)
	struct TArray<struct UStationArchitectAsset*> HardStationArchitectAssets; // 0x110(0x10)
	struct TArray<struct UStationArchitectAsset*> HardStationArchitectSceneRigAssets; // 0x120(0x10)
	struct TArray<struct UObjectArchitectAsset*> HardObjectArchitectAssets; // 0x130(0x10)
	struct TMap<enum class EInteractionProject, struct UInteractionArchitectAsset*> HardInteractionAssetMap; // 0x140(0x50)
	struct FGameplayTagContainer AnimationArchitectGameplayTags; // 0x190(0x20)
	struct FGameplayTagContainer AnimationArchitectPersistentGamePlayTags; // 0x1b0(0x20)
	struct TArray<struct UAnimationArchitectTagProvider*> AnimationTagProviders; // 0x1d0(0x10)
	struct FGameplayTagContainer InteractionArchitectGameplayTags; // 0x1e0(0x20)
	struct FGameplayTagContainer InteractionArchitectPersistentGamePlayTags; // 0x200(0x20)
	struct FGameplayTagContainer StationArchitectGamePlayTags; // 0x220(0x20)
	struct FGameplayTagContainer StationArchitectSceneRigTags; // 0x240(0x20)
	struct FGameplayTagContainer ObjectArchitectGamePlayTags; // 0x260(0x20)
	struct FGameplayTagContainer AnimationArchitectAssetTagContainer; // 0x280(0x20)
	struct FGameplayTagContainer InteractionReactionAssetTagContainer; // 0x2a0(0x20)
	struct TArray<struct UAnimationArchitectAsset*> DynamicAnimationArchitectAssets; // 0x2c0(0x10)
	char pad_2D0[0x30]; // 0x2d0(0x30)
	struct FMulticastInlineDelegate AnimationArchitectTagsChangedDelegate; // 0x300(0x10)
	struct FMulticastInlineDelegate InteractionArchitectTagsChangedDelegate; // 0x310(0x10)
	struct FMulticastInlineDelegate StationArchitectTagsChangedDelegate; // 0x320(0x10)
	struct FMulticastInlineDelegate ObjectArchitectTagsChangedDelegate; // 0x330(0x10)
	char pad_340[0x18]; // 0x340(0x18)

	void RemoveObjectArchitectGameplayTag(struct FGameplayTag& InGameplayTag); // Function AnimationArchitectRuntime.AnimationArchitectComponent.RemoveObjectArchitectGameplayTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10746a0
	void RemoveInteractionArchitectGameplayTag(struct FGameplayTag& InGameplayTag); // Function AnimationArchitectRuntime.AnimationArchitectComponent.RemoveInteractionArchitectGameplayTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1074610
	void RemoveAnimationArchitectGameplayTag(struct FGameplayTag& InGameplayTag); // Function AnimationArchitectRuntime.AnimationArchitectComponent.RemoveAnimationArchitectGameplayTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10744f0
	bool InteractionArchitectTagContainerHasTag(struct FGameplayTag& InGameplayTag); // Function AnimationArchitectRuntime.AnimationArchitectComponent.InteractionArchitectTagContainerHasTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10741d0
	bool InteractionArchitectTagContainerHasAny(struct FGameplayTagContainer& InGameplayTagContainer); // Function AnimationArchitectRuntime.AnimationArchitectComponent.InteractionArchitectTagContainerHasAny // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1074080
	void AddObjectArchitectGameplayTag(struct FGameplayTag& InGameplayTag); // Function AnimationArchitectRuntime.AnimationArchitectComponent.AddObjectArchitectGameplayTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1073a00
	void AddInteractionArchitectPersistentGameplayTags(struct FGameplayTagContainer& InGameplayTags); // Function AnimationArchitectRuntime.AnimationArchitectComponent.AddInteractionArchitectPersistentGameplayTags // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1073940
	void AddInteractionArchitectGameplayTag(struct FGameplayTag& InGameplayTag); // Function AnimationArchitectRuntime.AnimationArchitectComponent.AddInteractionArchitectGameplayTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10738b0
	void AddAnimationArchitectPersistentGameplayTags(struct FGameplayTagContainer& InGameplayTags); // Function AnimationArchitectRuntime.AnimationArchitectComponent.AddAnimationArchitectPersistentGameplayTags // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10736c0
	void AddAnimationArchitectGameplayTag(struct FGameplayTag& InGameplayTag); // Function AnimationArchitectRuntime.AnimationArchitectComponent.AddAnimationArchitectGameplayTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1073630
};

// Class AnimationArchitectRuntime.AnimationArchitect_ComponentOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAnimationArchitect_ComponentOwnerInterface : UInterface {
};

// Class AnimationArchitectRuntime.AnimationArchitectFilter
// Size: 0x28 (Inherited: 0x28)
struct UAnimationArchitectFilter : UObject {
};

// Class AnimationArchitectRuntime.AnimationArchitectTagProvider
// Size: 0x28 (Inherited: 0x28)
struct UAnimationArchitectTagProvider : UObject {
};

// Class AnimationArchitectRuntime.AnimationArchitect_TagProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UAnimationArchitect_TagProviderInterface : UInterface {
};

// Class AnimationArchitectRuntime.AnimTag_Direct
// Size: 0x48 (Inherited: 0x28)
struct UAnimTag_Direct : UAnimationArchitectTagProvider {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class AnimationArchitectRuntime.ArchitectGameInstance
// Size: 0x230 (Inherited: 0x1a8)
struct UArchitectGameInstance : UGameInstance {
	char pad_1A8[0x20]; // 0x1a8(0x20)
	struct TArray<struct UInteractionArchitectAsset*> HardInteractionArchitectAssets; // 0x1c8(0x10)
	struct UObjectArchitectMonolithicAsset* MonolithicObjectArchitectAsset; // 0x1d8(0x08)
	struct UPreLoadArchitectMonolithicAsset* PreloadMonolithicArchitectAsset; // 0x1e0(0x08)
	char pad_1E8[0x48]; // 0x1e8(0x48)

	struct UArchitectGameInstance* GetArchitectGameInstance(); // Function AnimationArchitectRuntime.ArchitectGameInstance.GetArchitectGameInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1074050
};

// Class AnimationArchitectRuntime.BaseArchitectComponent
// Size: 0x1a0 (Inherited: 0xc8)
struct UBaseArchitectComponent : UActorComponent {
	char pad_C8[0x38]; // 0xc8(0x38)
	struct TArray<struct TSoftObjectPtr<UBaseArchitectAsset>> HardBaseArchitectAssets; // 0x100(0x10)
	char pad_110[0x8]; // 0x110(0x08)
	struct TArray<struct UAnimationArchitectTagProvider*> AnimationTagProviders; // 0x118(0x10)
	struct FGameplayTagContainer BaseArchitectGamePlayTags; // 0x128(0x20)
	char pad_148[0x48]; // 0x148(0x48)
	struct TArray<struct UObject*> RequestedLoadedAssets; // 0x190(0x10)

	void RemoveGameplayTag(struct FGameplayTag& InGameplayTag); // Function AnimationArchitectRuntime.BaseArchitectComponent.RemoveGameplayTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1074580
	bool GameplayTagContainerHasTag(struct FGameplayTag& InGameplayTag); // Function AnimationArchitectRuntime.BaseArchitectComponent.GameplayTagContainerHasTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1073f10
	void AddGameplayTag(struct FGameplayTag& InGameplayTag); // Function AnimationArchitectRuntime.BaseArchitectComponent.AddGameplayTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1073780
};

// Class AnimationArchitectRuntime.BaseArchitectMonolithicAsset
// Size: 0xd0 (Inherited: 0x30)
struct UBaseArchitectMonolithicAsset : UDataAsset {
	struct TMap<struct FName, struct FBaseArchitectMonolithicAsset_Class> ClassMap; // 0x30(0x50)
	struct TMap<struct FName, struct FBaseArchitectMonolithicAsset_DefaultKeyOrder> DefaultKeyOrderMap; // 0x80(0x50)
};

// Class AnimationArchitectRuntime.BaseArchitectState
// Size: 0x48 (Inherited: 0x30)
struct UBaseArchitectState : UDataAsset {
	struct UBaseArchitectAsset* StateAsset; // 0x30(0x08)
	struct TArray<struct FBaseArchitectTransition> TransitionsTo; // 0x38(0x10)
};

// Class AnimationArchitectRuntime.InteractionArchitectAsset
// Size: 0xe0 (Inherited: 0xd0)
struct UInteractionArchitectAsset : UBaseArchitectAsset {
	struct TArray<struct FInteractionArchitectAsset_Connection> ConnectionArray; // 0xd0(0x10)

	struct TArray<struct UObject*> K2_FindAbilityConnectionArray(struct FGameplayTagContainer& InSourceTagContainer, struct TArray<struct UInteractionArchitectAsset*>& InTargetAssets, struct TArray<struct FGameplayTagContainer>& InTargetTags); // Function AnimationArchitectRuntime.InteractionArchitectAsset.K2_FindAbilityConnectionArray // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10742e0
};

// Class AnimationArchitectRuntime.ObjectArchitectAsset
// Size: 0xe0 (Inherited: 0xd0)
struct UObjectArchitectAsset : UBaseArchitectAsset {
	struct TArray<struct FObjectArchitectAsset_Connection> ConnectionArray; // 0xd0(0x10)
};

// Class AnimationArchitectRuntime.ObjectArchitectMonolithicAsset
// Size: 0xd0 (Inherited: 0xd0)
struct UObjectArchitectMonolithicAsset : UBaseArchitectMonolithicAsset {
};

// Class AnimationArchitectRuntime.PreloadArchitectHUD
// Size: 0x338 (Inherited: 0x338)
struct APreloadArchitectHUD : AHUD {

	void TogglePreloadArchitectHUD(); // Function AnimationArchitectRuntime.PreloadArchitectHUD.TogglePreloadArchitectHUD // (Final|Native|Public|BlueprintCallable) // @ game+0x1074730
};

// Class AnimationArchitectRuntime.PreloadArchitectHUDWidgetStyle
// Size: 0x11e0 (Inherited: 0x30)
struct UPreloadArchitectHUDWidgetStyle : USlateWidgetStyleContainerBase {
	struct FPreloadArchitectHUDStyle PreloadArchitectHUDStyle; // 0x30(0x11b0)
};

// Class AnimationArchitectRuntime.PreLoadArchitectMonolithicAsset
// Size: 0xd0 (Inherited: 0xd0)
struct UPreLoadArchitectMonolithicAsset : UBaseArchitectMonolithicAsset {
};

// Class AnimationArchitectRuntime.PreLoadAssetArchitectAsset
// Size: 0xe0 (Inherited: 0xd0)
struct UPreLoadAssetArchitectAsset : UBaseArchitectAsset {
	struct TArray<struct FPreLoadAssetArchitectAsset_Connection> ConnectionArray; // 0xd0(0x10)
};

// Class AnimationArchitectRuntime.PreLoadAssetInterface
// Size: 0x28 (Inherited: 0x28)
struct UPreLoadAssetInterface : UInterface {
};

// Class AnimationArchitectRuntime.StationArcitectAsset_ConnectionsCluster
// Size: 0x38 (Inherited: 0x28)
struct UStationArcitectAsset_ConnectionsCluster : UObject {
	struct TArray<struct FStationArchitectAsset_Connection> ConnectionArray; // 0x28(0x10)
};

// Class AnimationArchitectRuntime.StationArchitectAsset
// Size: 0x138 (Inherited: 0xd0)
struct UStationArchitectAsset : UBaseArchitectAsset {
	struct TArray<struct FStationArchitectAsset_Connection> ConnectionArray; // 0xd0(0x10)
	struct UStationArcitectAsset_ConnectionsCluster* ConnectionCluster; // 0xe0(0x08)
	char pad_E8[0x50]; // 0xe8(0x50)
};

// Class AnimationArchitectRuntime.StationArchitectComponent
// Size: 0x1b0 (Inherited: 0x1a0)
struct UStationArchitectComponent : UBaseArchitectComponent {
	struct TArray<struct TSoftObjectPtr<UStationArchitectAsset>> HardSceneRigAssets; // 0x1a0(0x10)
};

