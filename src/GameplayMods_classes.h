// Class GameplayMods.GameplayModComponent
// Size: 0x198 (Inherited: 0xc8)
struct UGameplayModComponent : UActorComponent {
	struct TArray<struct FModEntry> ModEntries; // 0xc8(0x10)
	struct TArray<struct FModEntry> LocalModEntries; // 0xd8(0x10)
	struct TArray<struct FModEntry> UnreplicatedModEntries; // 0xe8(0x10)
	struct TMap<struct UObject*, struct FPropertyList> ModdableObjectProperties; // 0xf8(0x50)
	char pad_148[0x50]; // 0x148(0x50)

	void SetModBlackboardValue(struct FGameplayTag& Tag, float Value, bool bForceRecomputeProperties); // Function GameplayMods.GameplayModComponent.SetModBlackboardValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1f328a0
	void ServerRemoveMod(struct UGameplayPropertyMod* InMod); // Function GameplayMods.GameplayModComponent.ServerRemoveMod // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1f327e0
	void ServerRemoveGroup(struct UGameplayPropertyModGroup* InModGroup); // Function GameplayMods.GameplayModComponent.ServerRemoveGroup // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1f32720
	void ServerAddMod(struct UGameplayPropertyMod* InMod); // Function GameplayMods.GameplayModComponent.ServerAddMod // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1f32660
	void ServerAddGroup(struct UGameplayPropertyModGroup* InModGroup); // Function GameplayMods.GameplayModComponent.ServerAddGroup // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1f325a0
	void RemoveTargetModdable(struct UObject* InTarget); // Function GameplayMods.GameplayModComponent.RemoveTargetModdable // (Final|Native|Public|BlueprintCallable) // @ game+0x1f32510
	void RemoveModReplicated(struct UGameplayPropertyMod* InMod); // Function GameplayMods.GameplayModComponent.RemoveModReplicated // (Final|Native|Public|BlueprintCallable) // @ game+0x1f32480
	void RemoveMod(struct UGameplayPropertyMod* InMod); // Function GameplayMods.GameplayModComponent.RemoveMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1f323f0
	void RemoveGroupReplicated(struct UGameplayPropertyModGroup* InModGroup); // Function GameplayMods.GameplayModComponent.RemoveGroupReplicated // (Final|Native|Public|BlueprintCallable) // @ game+0x1f32360
	void RemoveGroup(struct UGameplayPropertyModGroup* InModGroup); // Function GameplayMods.GameplayModComponent.RemoveGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x1f322d0
	void OnRep_ModEntries(); // Function GameplayMods.GameplayModComponent.OnRep_ModEntries // (Final|Native|Protected) // @ game+0x1f322b0
	bool GetModBlackboardValue(struct FGameplayTag& Tag, float& OutValue); // Function GameplayMods.GameplayModComponent.GetModBlackboardValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f321c0
	void ExpungeTargetModdable(struct UObject* InTarget); // Function GameplayMods.GameplayModComponent.ExpungeTargetModdable // (Final|Native|Public|BlueprintCallable) // @ game+0x1f32130
	void DelayedRemoveMod(struct UGameplayPropertyMod* InMod); // Function GameplayMods.GameplayModComponent.DelayedRemoveMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1f320a0
	void ClientRemoveModManualReplication(struct UGameplayPropertyMod* InMod); // Function GameplayMods.GameplayModComponent.ClientRemoveModManualReplication // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x1f31fe0
	void ClientRemoveGroupManualReplication(struct UGameplayPropertyModGroup* InModGroup); // Function GameplayMods.GameplayModComponent.ClientRemoveGroupManualReplication // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x1f31f20
	void ClientAddModManualReplication(struct UGameplayPropertyMod* InMod); // Function GameplayMods.GameplayModComponent.ClientAddModManualReplication // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x1f31e60
	void ClientAddGroupManualReplication(struct UGameplayPropertyModGroup* InModGroup); // Function GameplayMods.GameplayModComponent.ClientAddGroupManualReplication // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x1f31da0
	void AutoDetectModdables(); // Function GameplayMods.GameplayModComponent.AutoDetectModdables // (Final|Native|Public|BlueprintCallable) // @ game+0x1f31d80
	void AddTargetModdable(struct UObject* InTarget); // Function GameplayMods.GameplayModComponent.AddTargetModdable // (Final|Native|Public|BlueprintCallable) // @ game+0x1f31cf0
	void AddModReplicated(struct UGameplayPropertyMod* InMod); // Function GameplayMods.GameplayModComponent.AddModReplicated // (Final|Native|Public|BlueprintCallable) // @ game+0x1f31c60
	void AddMod(struct UGameplayPropertyMod* InMod); // Function GameplayMods.GameplayModComponent.AddMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1f31bd0
	void AddGroupReplicated(struct UGameplayPropertyModGroup* InModGroup); // Function GameplayMods.GameplayModComponent.AddGroupReplicated // (Final|Native|Public|BlueprintCallable) // @ game+0x1f31b40
	void AddGroup(struct UGameplayPropertyModGroup* InModGroup); // Function GameplayMods.GameplayModComponent.AddGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x1f31ab0
};

// Class GameplayMods.GameplayPropertyMod
// Size: 0xa0 (Inherited: 0x30)
struct UGameplayPropertyMod : UDataAsset {
	struct FModTarget ModTarget; // 0x30(0x20)
	bool bEvaluateInputOnAddOnly; // 0x50(0x01)
	enum class EModExternalInputMethod ExternalInputSource; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	struct FSelectableName ExternalInputFunction; // 0x54(0x08)
	struct FGameplayTag ExternalInputTag; // 0x5c(0x08)
	float LifeTime; // 0x64(0x04)
	bool bApplyOnceOnly; // 0x68(0x01)
	bool bDelayedRemoveAfterUse; // 0x69(0x01)
	bool bStackable; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
	struct TArray<struct UModFilter*> ModAddFilters; // 0x70(0x10)
	struct TArray<struct UModFilter*> ModApplyFilters; // 0x80(0x10)
	struct TArray<struct UModExtension*> ModExtensions; // 0x90(0x10)

	void OnModRemoved_BP(struct UObject* InTargetObject); // Function GameplayMods.GameplayPropertyMod.OnModRemoved_BP // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnModApplied_BP(struct UObject* InTargetObject, bool bFirstTime); // Function GameplayMods.GameplayPropertyMod.OnModApplied_BP // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnModAdded_BP(struct UObject* InTargetObject); // Function GameplayMods.GameplayPropertyMod.OnModAdded_BP // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
};

// Class GameplayMods.GameplayPropertyModGroup
// Size: 0x40 (Inherited: 0x30)
struct UGameplayPropertyModGroup : UDataAsset {
	struct TArray<struct UGameplayPropertyMod*> Modifiers; // 0x30(0x10)

	void OnRemoved(struct UObject* TargetObject); // Function GameplayMods.GameplayPropertyModGroup.OnRemoved // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAdded(struct UObject* TargetObject); // Function GameplayMods.GameplayPropertyModGroup.OnAdded // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
};

// Class GameplayMods.GameplayPropertyModNumeric
// Size: 0x2e0 (Inherited: 0xa0)
struct UGameplayPropertyModNumeric : UGameplayPropertyMod {
	struct FModFloatSettings FloatSettings; // 0xa0(0x120)
	struct FModIntSettings IntSettings; // 0x1c0(0x120)
};

// Class GameplayMods.Moddable
// Size: 0x28 (Inherited: 0x28)
struct UModdable : UInterface {
};

// Class GameplayMods.ModdableCustomGather
// Size: 0x28 (Inherited: 0x28)
struct UModdableCustomGather : UInterface {

	struct TArray<struct UObject*> GatherAssociatedModdables(); // Function GameplayMods.ModdableCustomGather.GatherAssociatedModdables // (Event|Public|BlueprintEvent) // @ game+0x38a7480
};

// Class GameplayMods.ModExtension
// Size: 0x28 (Inherited: 0x28)
struct UModExtension : UObject {
};

// Class GameplayMods.ModFilter
// Size: 0x30 (Inherited: 0x30)
struct UModFilter : UPrimaryDataAsset {
};

