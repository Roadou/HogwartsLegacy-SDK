// Class GlobalLightGroups.LightGroupActorBase
// Size: 0x268 (Inherited: 0x248)
struct ALightGroupActorBase : AActor {
	char pad_248[0x8]; // 0x248(0x08)
	struct FLightGroupSettings Settings; // 0x250(0x10)
	char pad_260[0x8]; // 0x260(0x08)

	void GetLightRegionGroup(struct FName& Region, struct FName& Group); // Function GlobalLightGroups.LightGroupActorBase.GetLightRegionGroup // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d6fbe0
	void GetLightGroupRegion(struct FName& Region); // Function GlobalLightGroups.LightGroupActorBase.GetLightGroupRegion // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d6faa0
	void GetLightGroupIndex(int32_t& GroupNumber); // Function GlobalLightGroups.LightGroupActorBase.GetLightGroupIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d6f810
	void GetLightGroup(struct FName& Group); // Function GlobalLightGroups.LightGroupActorBase.GetLightGroup // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d6f6d0
};

// Class GlobalLightGroups.LightGroupComponent
// Size: 0xe8 (Inherited: 0xc8)
struct ULightGroupComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FLightGroupSettings Settings; // 0xd0(0x10)
	char pad_E0[0x8]; // 0xe0(0x08)

	void GetLightRegionGroup(struct FName& Region, struct FName& Group); // Function GlobalLightGroups.LightGroupComponent.GetLightRegionGroup // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d6fcf0
	void GetLightGroupRegion(struct FName& Region); // Function GlobalLightGroups.LightGroupComponent.GetLightGroupRegion // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d6fb40
	void GetLightGroupIndex(int32_t& GroupNumber); // Function GlobalLightGroups.LightGroupComponent.GetLightGroupIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d6f8b0
	void GetLightGroup(struct FName& Group); // Function GlobalLightGroups.LightGroupComponent.GetLightGroup // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d6f770
};

// Class GlobalLightGroups.LightGroupWindowMaterialsVolume
// Size: 0x268 (Inherited: 0x248)
struct ALightGroupWindowMaterialsVolume : AActor {
	struct ULightGroupComponent* LightGroup; // 0x248(0x08)
	struct FName WindowGroupMaterialParameter; // 0x250(0x08)
	struct FLightGroupWindowMaterialsResources Resources; // 0x258(0x10)

	void RefreshBuildResults(); // Function GlobalLightGroups.LightGroupWindowMaterialsVolume.RefreshBuildResults // (Final|Native|Public) // @ game+0x1074730
};

// Class GlobalLightGroups.GlobalLightGroupsWindowMaterialsComponent
// Size: 0x108 (Inherited: 0xc8)
struct UGlobalLightGroupsWindowMaterialsComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FLightGroupSettingsOptional Settings; // 0xd0(0x14)
	struct FName WindowGroupMaterialParameter; // 0xe4(0x08)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FLightGroupWindowMaterialsResources Resources; // 0xf0(0x10)
	char pad_100[0x8]; // 0x100(0x08)

	void RefreshBuildResults(); // Function GlobalLightGroups.GlobalLightGroupsWindowMaterialsComponent.RefreshBuildResults // (Final|Native|Public) // @ game+0x1074730
};

// Class GlobalLightGroups.GlobalLightGroupsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGlobalLightGroupsLibrary : UBlueprintFunctionLibrary {

	void ValidLightGroup(struct UObject* WorldContextObject, struct FName Region, struct FName Group, bool& bValid); // Function GlobalLightGroups.GlobalLightGroupsLibrary.ValidLightGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d72110
	void ValidateMyRegion(struct UObject* WorldContextObject, struct FName Region, struct FName& ValidRegion); // Function GlobalLightGroups.GlobalLightGroupsLibrary.ValidateMyRegion // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d72260
	void UnbindComponentVisibility(struct UObject* WorldContextObject, struct FName Region, struct FName Group, struct USceneComponent* SceneComponent); // Function GlobalLightGroups.GlobalLightGroupsLibrary.UnbindComponentVisibility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d71ec0
	void UnbindComponentsVisibility(struct UObject* WorldContextObject, struct FName Region, struct FName Group); // Function GlobalLightGroups.GlobalLightGroupsLibrary.UnbindComponentsVisibility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d72010
	void TurnOnLightGroups(struct UObject* WorldContextObject, struct FName Region, struct FGlobalLightGroupsMask GroupMask); // Function GlobalLightGroups.GlobalLightGroupsLibrary.TurnOnLightGroups // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d71dc0
	void TurnOnLightGroup(struct UObject* WorldContextObject, struct FName Region, struct FName Group); // Function GlobalLightGroups.GlobalLightGroupsLibrary.TurnOnLightGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d71cc0
	void TurnOffLightGroups(struct UObject* WorldContextObject, struct FName Region, struct FGlobalLightGroupsMask GroupMask); // Function GlobalLightGroups.GlobalLightGroupsLibrary.TurnOffLightGroups // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d71bc0
	void TurnOffLightGroup(struct UObject* WorldContextObject, struct FName Region, struct FName Group); // Function GlobalLightGroups.GlobalLightGroupsLibrary.TurnOffLightGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d71ac0
	void TestLightRegionAndGroup(struct FName RegionA, struct FName GroupA, struct FName RegionB, struct FName GroupB, bool& bMatch); // Function GlobalLightGroups.GlobalLightGroupsLibrary.TestLightRegionAndGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d71920
	void SetLightGroupLocks(struct UObject* WorldContextObject, struct FName Region, struct FGlobalLightGroupsMask GroupMask, enum class EGlobalLightGroupsMaskLockState State); // Function GlobalLightGroups.GlobalLightGroupsLibrary.SetLightGroupLocks // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d717d0
	void SetLightGroupLock(struct UObject* WorldContextObject, struct FName Region, struct FName Group, enum class EGlobalLightGroupsMaskLockState State); // Function GlobalLightGroups.GlobalLightGroupsLibrary.SetLightGroupLock // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d71680
	void RemoveLightComponentSchedule(struct UObject* WorldContextObject, struct USceneComponent* Light); // Function GlobalLightGroups.GlobalLightGroupsLibrary.RemoveLightComponentSchedule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d715c0
	struct FGlobalLightGroupsMask NamesLightGroupsMask(struct UObject* WorldContextObject, struct FName Region, struct TArray<struct FName>& Groups); // Function GlobalLightGroups.GlobalLightGroupsLibrary.NamesLightGroupsMask // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d71490
	struct FGlobalLightGroupsMask NameLightGroupsMask(struct UObject* WorldContextObject, struct FName Region, struct FName& Group); // Function GlobalLightGroups.GlobalLightGroupsLibrary.NameLightGroupsMask // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d71380
	struct FGlobalLightGroupsTimeOnOff MakeTimeOnOffSun(struct FGlobalLightGroupsTimeSunOnOff& SunOnOff); // Function GlobalLightGroups.GlobalLightGroupsLibrary.MakeTimeOnOffSun // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d71260
	struct FGlobalLightGroupsTimeOnOff MakeTimeOnOffHMS(struct FGlobalLightGroupsTimeHMSOnOff& TimeOnOff); // Function GlobalLightGroups.GlobalLightGroupsLibrary.MakeTimeOnOffHMS // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d71150
	void LockAllLightGroups(struct UObject* WorldContextObject, struct FName Region); // Function GlobalLightGroups.GlobalLightGroupsLibrary.LockAllLightGroups // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d71090
	void LightGroupMessageDelegate__DelegateSignature(struct UObject* Caller, struct FLightGroupMessage& Message); // DelegateFunction GlobalLightGroups.GlobalLightGroupsLibrary.LightGroupMessageDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x38a7480
	void LightGroupGetHermesEvent(struct UObject* WorldContextObject, struct FName Region, struct FName Group, struct FName& HermesEvent); // Function GlobalLightGroups.GlobalLightGroupsLibrary.LightGroupGetHermesEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d70f40
	void LightGroupEnableHermesEvent(struct UObject* WorldContextObject, struct FName Region, struct FName Group, struct FName HermesEvent); // Function GlobalLightGroups.GlobalLightGroupsLibrary.LightGroupEnableHermesEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d70df0
	void LightGroupDisableHermesEvent(struct UObject* WorldContextObject, struct FName Region, struct FName Group); // Function GlobalLightGroups.GlobalLightGroupsLibrary.LightGroupDisableHermesEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d70cf0
	void LightComponentSetSchedule(struct UObject* WorldContextObject, struct USceneComponent* Light, struct FName ScheduleName, bool& bSuccess, bool bToggleChildren); // Function GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentSetSchedule // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d70b40
	void LightComponentScheduleToggleChildren(struct UObject* WorldContextObject, struct USceneComponent* Light, bool bToggleChildren); // Function GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentScheduleToggleChildren // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d70a40
	void LightComponentMessageDelegate__DelegateSignature(struct UObject* Caller, struct FLightComponentMessage& Message); // DelegateFunction GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentMessageDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x38a7480
	void LightComponentIsScheduled(struct UObject* WorldContextObject, struct USceneComponent* Light, bool& bIsScheduled); // Function GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentIsScheduled // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d70930
	void LightComponentGetScheduleName(struct UObject* WorldContextObject, struct USceneComponent* Light, struct FName& ScheduleName); // Function GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentGetScheduleName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d70820
	void LightComponentGetHermesEvent(struct UObject* WorldContextObject, struct USceneComponent* Light, struct FName& HermesEvent); // Function GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentGetHermesEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d70710
	void LightComponentEnableHermesEvent(struct UObject* WorldContextObject, struct USceneComponent* Light, struct FName HermesEvent); // Function GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentEnableHermesEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d70610
	void LightComponentDisableHermesEvent(struct UObject* WorldContextObject, struct USceneComponent* Light); // Function GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentDisableHermesEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d70550
	void IsLightComponentScheduleEnabled(struct UObject* WorldContextObject, struct USceneComponent* Light, bool& bEnabled); // Function GlobalLightGroups.GlobalLightGroupsLibrary.IsLightComponentScheduleEnabled // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d70440
	void HermesGetLightGroupMessageDelegateName(struct FDelegate Event, struct FName& EventName); // Function GlobalLightGroups.GlobalLightGroupsLibrary.HermesGetLightGroupMessageDelegateName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d70360
	void HermesGetLightComponentMessageDelegateName(struct FDelegate Event, struct FName& EventName); // Function GlobalLightGroups.GlobalLightGroupsLibrary.HermesGetLightComponentMessageDelegateName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d70360
	void HermesBindLightGroupMessage(struct FDelegate Event, struct UObject* Owner, struct FHermesBPDelegateHandle& Handle); // Function GlobalLightGroups.GlobalLightGroupsLibrary.HermesBindLightGroupMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d70230
	void HermesBindLightComponentMessage(struct FDelegate Event, struct UObject* Owner, struct FHermesBPDelegateHandle& Handle); // Function GlobalLightGroups.GlobalLightGroupsLibrary.HermesBindLightComponentMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d70100
	void GetRegionFromLocation(struct UObject* WorldContextObject, struct FVector Location, struct FName& Region); // Function GlobalLightGroups.GlobalLightGroupsLibrary.GetRegionFromLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1d6ffe0
	void GetRegionFromActor(struct UObject* WorldContextObject, struct AActor* Actor, struct FName& Region); // Function GlobalLightGroups.GlobalLightGroupsLibrary.GetRegionFromActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d6fed0
	void GetMyRegion(struct UObject* WorldContextObject, struct FName& Region); // Function GlobalLightGroups.GlobalLightGroupsLibrary.GetMyRegion // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d6fe00
	void GetLightGroupLock(struct UObject* WorldContextObject, struct FName Region, struct FName Group, enum class EGlobalLightGroupsMaskLockState& State); // Function GlobalLightGroups.GlobalLightGroupsLibrary.GetLightGroupLock // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d6f950
	void GetGlobalLightGroupsMaster(struct UObject* WorldContextObject, struct AGlobalLightGroupsMaster*& GlobalLightGroupsMaster); // Function GlobalLightGroups.GlobalLightGroupsLibrary.GetGlobalLightGroupsMaster // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d6f600
	void EnableLightGroupSchedule(struct UObject* WorldContextObject, struct FName Region, struct FName Group); // Function GlobalLightGroups.GlobalLightGroupsLibrary.EnableLightGroupSchedule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d6f500
	void EnableLightComponentSchedule(struct UObject* WorldContextObject, struct USceneComponent* Light); // Function GlobalLightGroups.GlobalLightGroupsLibrary.EnableLightComponentSchedule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d6f440
	void DisableLightGroupSchedule(struct UObject* WorldContextObject, struct FName Region, struct FName Group); // Function GlobalLightGroups.GlobalLightGroupsLibrary.DisableLightGroupSchedule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d6f340
	void DisableLightComponentSchedule(struct UObject* WorldContextObject, struct USceneComponent* Light); // Function GlobalLightGroups.GlobalLightGroupsLibrary.DisableLightComponentSchedule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d6f280
	struct FName Conv_RegionDropDownToRegionName(struct FGlobalLightGroupsRegionName RegionDropdown); // Function GlobalLightGroups.GlobalLightGroupsLibrary.Conv_RegionDropDownToRegionName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d6f200
	struct FName Conv_GroupDropDownToLightComponentScheduleName(struct FLightComponentScheduleName LightComponentScheduleDropdown); // Function GlobalLightGroups.GlobalLightGroupsLibrary.Conv_GroupDropDownToLightComponentScheduleName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d6f200
	struct FName Conv_GroupDropDownToGroupName(struct FGlobalLightGroupsGroupName GroupDropdown); // Function GlobalLightGroups.GlobalLightGroupsLibrary.Conv_GroupDropDownToGroupName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d6f200
	void ClearAllLightGroupLocks(struct UObject* WorldContextObject, struct FName Region); // Function GlobalLightGroups.GlobalLightGroupsLibrary.ClearAllLightGroupLocks // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d6f140
	void CheckLightGroups(struct UObject* WorldContextObject, struct FName Region, struct FGlobalLightGroupsMask GroupMask, bool& bIsOn); // Function GlobalLightGroups.GlobalLightGroupsLibrary.CheckLightGroups // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d6eff0
	void CheckLightGroup(struct UObject* WorldContextObject, struct FName Region, struct FName Group, bool& bIsOn); // Function GlobalLightGroups.GlobalLightGroupsLibrary.CheckLightGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d6eea0
	void BindComponentVisibility(struct UObject* WorldContextObject, struct FName Region, struct FName Group, struct USceneComponent* SceneComponent, struct FLightGroupBoundComponentSettings Settings); // Function GlobalLightGroups.GlobalLightGroupsLibrary.BindComponentVisibility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d6eb40
	void BindComponentsVisibility(struct UObject* WorldContextObject, struct FName Region, struct FName Group, struct TArray<struct USceneComponent*>& SceneComponents, struct FLightGroupBoundComponentSettings Settings); // Function GlobalLightGroups.GlobalLightGroupsLibrary.BindComponentsVisibility // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d6ece0
};

// Class GlobalLightGroups.GlobalLightGroupsMaster
// Size: 0x310 (Inherited: 0x248)
struct AGlobalLightGroupsMaster : AActor {
	struct UGlobalLightGroupsRegionGroupMap* RegionGroupMap; // 0x248(0x08)
	struct FMulticastInlineDelegate RegionEvent; // 0x250(0x10)
	struct TMap<struct FName, struct FGlobalLightGroupsRegion> RegionMap; // 0x260(0x50)
	struct FLightComponentSchedules LightComponentSchedules; // 0x2b0(0x50)
	struct FName LastRegion; // 0x300(0x08)
	struct FName ActiveRegion; // 0x308(0x08)
};

// Class GlobalLightGroups.GlobalLightGroupsRegionDefinition
// Size: 0x30 (Inherited: 0x30)
struct UGlobalLightGroupsRegionDefinition : UDataAsset {
};

// Class GlobalLightGroups.GlobalLightGroupsGroupNameMap
// Size: 0xa0 (Inherited: 0x28)
struct UGlobalLightGroupsGroupNameMap : UObject {
	struct TMap<struct FName, int32_t> NameGroupMap; // 0x28(0x50)
	struct TArray<struct FName> GroupNames; // 0x78(0x10)
	struct UGlobalLightGroupsNamedGroupSchedules* GroupSchedules; // 0x88(0x08)
	struct UGlobalLightGroupsNamedLightComponentSchedules* LightComponentSchedules; // 0x90(0x08)
	int32_t ReferenceCount; // 0x98(0x04)
	bool bForceGroup0OffGroup1On; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// Class GlobalLightGroups.GlobalLightGroupsRegionGroupMap
// Size: 0xa0 (Inherited: 0x28)
struct UGlobalLightGroupsRegionGroupMap : UObject {
	struct TMap<struct FName, struct UGlobalLightGroupsGroupNameMap*> RegionMap; // 0x28(0x50)
	char pad_78[0x28]; // 0x78(0x28)
};

// Class GlobalLightGroups.GlobalLightGroupsWorldRegionGroupMap
// Size: 0x80 (Inherited: 0x28)
struct UGlobalLightGroupsWorldRegionGroupMap : UObject {
	struct TMap<struct UWorld*, struct UGlobalLightGroupsRegionGroupMap*> WorldMap; // 0x28(0x50)
	struct UGlobalLightGroupsRegionGroupMap* PresetMap; // 0x78(0x08)
};

// Class GlobalLightGroups.GlobalLightGroupsRegionGroupRegistry
// Size: 0x48 (Inherited: 0x30)
struct UGlobalLightGroupsRegionGroupRegistry : UDataAsset {
	struct TArray<struct FGlobalLightGroupsRegionGroups> RegionGroups; // 0x30(0x10)
	struct UGlobalLightGroupsNamedLightComponentSchedules* RegionFreeLightComponentSchedules; // 0x40(0x08)
};

// Class GlobalLightGroups.GlobalLightGroupsRegionGroupDirectory
// Size: 0x38 (Inherited: 0x28)
struct UGlobalLightGroupsRegionGroupDirectory : UObject {
	struct UGlobalLightGroupsRegionGroupRegistry* Registry; // 0x28(0x08)
	struct UGlobalLightGroupsWorldRegionGroupMap* WorldRegionGroupMap; // 0x30(0x08)
};

// Class GlobalLightGroups.LightGroupDeclareRegion
// Size: 0x2a0 (Inherited: 0x280)
struct ALightGroupDeclareRegion : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	struct FGlobalLightGroupsRegionName RegionName; // 0x288(0x08)
	struct ULightOnOffFXList* FXList; // 0x290(0x08)
	float Priority; // 0x298(0x04)
	bool bUnbounded; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
};

// Class GlobalLightGroups.LightGroupDefineNewRegion
// Size: 0x2c8 (Inherited: 0x280)
struct ALightGroupDefineNewRegion : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	struct FGlobalLightGroupsRegionGroups RegionGroups; // 0x288(0x30)
	struct ULightOnOffFXList* FXList; // 0x2b8(0x08)
	float Priority; // 0x2c0(0x04)
	bool bUnbounded; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
};

// Class GlobalLightGroups.Interface_GlobalLightGroupsRegionVolume
// Size: 0x28 (Inherited: 0x28)
struct UInterface_GlobalLightGroupsRegionVolume : UInterface {
};

// Class GlobalLightGroups.GlobalLightGroupsNamedSchedules
// Size: 0x80 (Inherited: 0x30)
struct UGlobalLightGroupsNamedSchedules : UDataAsset {
	struct FGlobalLightGroupsScheduleMap ScheduleMap; // 0x30(0x50)

	void RebuildSchedules(); // Function GlobalLightGroups.GlobalLightGroupsNamedSchedules.RebuildSchedules // (Final|Native|Public) // @ game+0x1074730
};

// Class GlobalLightGroups.GlobalLightGroupsNamedGroupSchedules
// Size: 0x80 (Inherited: 0x80)
struct UGlobalLightGroupsNamedGroupSchedules : UGlobalLightGroupsNamedSchedules {
};

// Class GlobalLightGroups.GlobalLightGroupsNamedLightComponentSchedules
// Size: 0x80 (Inherited: 0x80)
struct UGlobalLightGroupsNamedLightComponentSchedules : UGlobalLightGroupsNamedSchedules {
};

// Class GlobalLightGroups.LightOnOffFXList
// Size: 0x40 (Inherited: 0x30)
struct ULightOnOffFXList : UDataAsset {
	struct TArray<struct FLightOnOffFX> FXList; // 0x30(0x10)
};

// Class GlobalLightGroups.Interface_LightRegionGroup
// Size: 0x28 (Inherited: 0x28)
struct UInterface_LightRegionGroup : UInterface {
};

