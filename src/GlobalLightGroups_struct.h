// Enum GlobalLightGroups.ELightOnOffFXTargetMode
enum class ELightOnOffFXTargetMode : uint8 {
	UseParentOnOff = 0,
	UseComponentOnOff = 1,
	ChildrenThatMatchParent = 2,
	ChildrenThatOpposeParent = 3,
	ELightOnOffFXTargetMode_MAX = 4
};

// Enum GlobalLightGroups.ELightOnOffFXTargetType
enum class ELightOnOffFXTargetType : uint8 {
	ParentOnly = 0,
	ParentLightOnly = 1,
	ChildrenOnly = 2,
	ChildLightsOnly = 3,
	ParentAndChildren = 4,
	ParentAndChildLightsOnly = 5,
	ELightOnOffFXTargetType_MAX = 6
};

// Enum GlobalLightGroups.EGlobalLightGroupsMaskLockState
enum class EGlobalLightGroupsMaskLockState : uint8 {
	Unlocked = 0,
	LockedOn = 1,
	LockedOff = 2,
	EGlobalLightGroupsMaskLockState_MAX = 3
};

// Enum GlobalLightGroups.EGlobalLightGroupsSunDirection
enum class EGlobalLightGroupsSunDirection : uint8 {
	Rise = 0,
	Set = 1,
	EGlobalLightGroupsSunDirection_MAX = 2
};

// Enum GlobalLightGroups.EGlobalLightGroupsSunAngle
enum class EGlobalLightGroupsSunAngle : uint8 {
	FullBrightSky = 0,
	LowerLimbOnHorizon = 1,
	CenterOnHorizon = 2,
	UpperLimbOnHorizon = 3,
	CivilTwilight = 4,
	NauticalTwilight = 5,
	AstronomicalTwilight = 6,
	EGlobalLightGroupsSunAngle_MAX = 7
};

// Enum GlobalLightGroups.EGlobalLightGroupsRegionChangeOp
enum class EGlobalLightGroupsRegionChangeOp : uint8 {
	Add = 0,
	AddForceRefresh = 1,
	Removed = 2,
	EGlobalLightGroupsRegionChangeOp_MAX = 3
};

// Enum GlobalLightGroups.EGlobalLightGroupsImportScheduleType
enum class EGlobalLightGroupsImportScheduleType : uint8 {
	Time = 0,
	Sun = 1,
	EGlobalLightGroupsImportScheduleType_MAX = 2
};

// Enum GlobalLightGroups.EGlobalLightGroupsTimeSpanOnOffState
enum class EGlobalLightGroupsTimeSpanOnOffState : uint8 {
	TurnedOn = 0,
	TurnedOff = 1,
	EGlobalLightGroupsTimeSpanOnOffState_MAX = 2
};

// ScriptStruct GlobalLightGroups.LightGroupBoundComponentSettings
// Size: 0x0c (Inherited: 0x00)
struct FLightGroupBoundComponentSettings {
	struct FName FXName; // 0x00(0x08)
	enum class ELightOnOffFXTargetType FXType; // 0x08(0x01)
	enum class ELightOnOffFXTargetMode FXMode; // 0x09(0x01)
	char bInvertOnOff : 1; // 0x0a(0x01)
	char bPropagateToChildren : 1; // 0x0a(0x01)
	char pad_A_2 : 6; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsMask
// Size: 0x08 (Inherited: 0x00)
struct FGlobalLightGroupsMask {
	int64_t Mask; // 0x00(0x08)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsGroupName
// Size: 0x08 (Inherited: 0x00)
struct FGlobalLightGroupsGroupName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct GlobalLightGroups.LightComponentScheduleName
// Size: 0x08 (Inherited: 0x00)
struct FLightComponentScheduleName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsRegionName
// Size: 0x08 (Inherited: 0x00)
struct FGlobalLightGroupsRegionName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct GlobalLightGroups.LightComponentMessage
// Size: 0x18 (Inherited: 0x00)
struct FLightComponentMessage {
	struct USceneComponent* Component; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	bool bIsOn; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GlobalLightGroups.LightGroupMessage
// Size: 0x14 (Inherited: 0x00)
struct FLightGroupMessage {
	struct FName Region; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	bool bIsOn; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsTimeOnOff
// Size: 0x50 (Inherited: 0x00)
struct FGlobalLightGroupsTimeOnOff {
	struct FGlobalLightGroupsTimeHMSOnOff TimeOnOff; // 0x00(0x2c)
	struct FGlobalLightGroupsTimeSunOnOff SunOnOff; // 0x2c(0x20)
	bool bUseTime; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsTimeSunOnOff
// Size: 0x20 (Inherited: 0x00)
struct FGlobalLightGroupsTimeSunOnOff {
	struct FGlobalLightGroupsTimeSun On; // 0x00(0x10)
	struct FGlobalLightGroupsTimeSun Off; // 0x10(0x10)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsTimeSun
// Size: 0x10 (Inherited: 0x00)
struct FGlobalLightGroupsTimeSun {
	enum class EGlobalLightGroupsSunAngle Angle; // 0x00(0x01)
	enum class EGlobalLightGroupsSunDirection Direction; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float AngleOffset; // 0x04(0x04)
	float VarianceMinutesMin; // 0x08(0x04)
	float VarianceMinutesMax; // 0x0c(0x04)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsTimeHMSOnOff
// Size: 0x2c (Inherited: 0x00)
struct FGlobalLightGroupsTimeHMSOnOff {
	struct FGlobalLightGroupsTimeHMS On; // 0x00(0x14)
	struct FGlobalLightGroupsTimeHMS Off; // 0x14(0x14)
	bool bNormalizeForSeasons; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsTimeHMS
// Size: 0x14 (Inherited: 0x00)
struct FGlobalLightGroupsTimeHMS {
	int32_t Hour; // 0x00(0x04)
	int32_t Minute; // 0x04(0x04)
	int32_t Second; // 0x08(0x04)
	float VarianceMinutesMin; // 0x0c(0x04)
	float VarianceMinutesMax; // 0x10(0x04)
};

// ScriptStruct GlobalLightGroups.LightGroupSettingsOptional
// Size: 0x14 (Inherited: 0x00)
struct FLightGroupSettingsOptional {
	struct FName Region; // 0x00(0x08)
	struct FGlobalLightGroupsGroupName Group; // 0x08(0x08)
	bool bSetGroup; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct GlobalLightGroups.LightGroupSettings
// Size: 0x10 (Inherited: 0x00)
struct FLightGroupSettings {
	struct FName Region; // 0x00(0x08)
	struct FGlobalLightGroupsGroupName Group; // 0x08(0x08)
};

// ScriptStruct GlobalLightGroups.LightGroupWindowMaterialsBuilder
// Size: 0x20 (Inherited: 0x00)
struct FLightGroupWindowMaterialsBuilder {
	struct FName WindowGroupMaterialParameter; // 0x00(0x08)
	int32_t LightGroup; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UMeshComponent*> RelevantMaterialMeshes; // 0x10(0x10)
};

// ScriptStruct GlobalLightGroups.LightGroupWindowMaterialsResources
// Size: 0x10 (Inherited: 0x00)
struct FLightGroupWindowMaterialsResources {
	struct TArray<struct UMaterialInstanceDynamic*> SwappedMaterials; // 0x00(0x10)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsBoundComponents
// Size: 0x20 (Inherited: 0x00)
struct FGlobalLightGroupsBoundComponents {
	struct TArray<struct FGlobalLightGroupsBoundComponentList> ComponentGroups; // 0x00(0x10)
	struct FGlobalLightGroupsMask LastLightMask; // 0x10(0x08)
	struct FGlobalLightGroupsMask ForceUpdateMask; // 0x18(0x08)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsBoundComponentList
// Size: 0x10 (Inherited: 0x00)
struct FGlobalLightGroupsBoundComponentList {
	struct TArray<struct FGlobalLightGroupsBoundComponent> Components; // 0x00(0x10)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsBoundComponent
// Size: 0x14 (Inherited: 0x00)
struct FGlobalLightGroupsBoundComponent {
	struct TWeakObjectPtr<struct USceneComponent> ComponentPtr; // 0x00(0x08)
	struct FLightGroupBoundComponentSettings Settings; // 0x08(0x0c)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsMaskLock
// Size: 0x10 (Inherited: 0x00)
struct FGlobalLightGroupsMaskLock {
	struct FGlobalLightGroupsMask LockedOnMask; // 0x00(0x08)
	struct FGlobalLightGroupsMask LockedOffMask; // 0x08(0x08)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsRegion
// Size: 0xb0 (Inherited: 0x00)
struct FGlobalLightGroupsRegion {
	struct FName Name; // 0x00(0x08)
	struct FGlobalLightGroupsGroupSchedules GroupSchedules; // 0x08(0x50)
	struct UGlobalLightGroupsGroupNameMap* GroupNameMap; // 0x58(0x08)
	struct FGlobalLightGroupsBoundComponents BoundComponents; // 0x60(0x20)
	struct FGlobalLightGroupsMask LightMaskTarget; // 0x80(0x08)
	struct FGlobalLightGroupsMaskLock LockState; // 0x88(0x10)
	struct FGlobalLightGroupsMask LightMask; // 0x98(0x08)
	struct FGlobalLightGroupsMask LastMask; // 0xa0(0x08)
	bool bInitialEventsSent; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsGroupSchedules
// Size: 0x50 (Inherited: 0x00)
struct FGlobalLightGroupsGroupSchedules {
	struct TMap<struct FName, struct FGlobalLightGroupsGroupSchedule> Schedules; // 0x00(0x50)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsGroupSchedule
// Size: 0x28 (Inherited: 0x00)
struct FGlobalLightGroupsGroupSchedule {
	int32_t Group; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGlobalLightGroupsScheduleEntry> Schedule; // 0x08(0x10)
	struct FName HermesEvent; // 0x18(0x08)
	bool bDisabled; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsScheduleEntry
// Size: 0x68 (Inherited: 0x00)
struct FGlobalLightGroupsScheduleEntry {
	struct FGlobalLightGroupsTimeOnOff OnOff; // 0x00(0x50)
	struct FGlobalLightGroupsTimeSpanOnOff State; // 0x50(0x18)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsTimeSpanOnOff
// Size: 0x18 (Inherited: 0x00)
struct FGlobalLightGroupsTimeSpanOnOff {
	struct FTimespan NextOn; // 0x00(0x08)
	struct FTimespan NextOff; // 0x08(0x08)
	struct FGlobalLightGroupsTimeSpanOnOffState State; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsTimeSpanOnOffState
// Size: 0x01 (Inherited: 0x00)
struct FGlobalLightGroupsTimeSpanOnOffState {
	char State; // 0x00(0x01)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsRegionGroups
// Size: 0x30 (Inherited: 0x00)
struct FGlobalLightGroupsRegionGroups {
	struct FName Region; // 0x00(0x08)
	struct TArray<struct FName> Groups; // 0x08(0x10)
	struct UGlobalLightGroupsNamedGroupSchedules* GroupSchedules; // 0x18(0x08)
	struct UGlobalLightGroupsNamedLightComponentSchedules* LightComponentSchedules; // 0x20(0x08)
	bool bForceGroup0OffGroup1On; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsRegionGroupName
// Size: 0x10 (Inherited: 0x00)
struct FGlobalLightGroupsRegionGroupName {
	struct FName Region; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsFindBestRegion
// Size: 0x0c (Inherited: 0x00)
struct FGlobalLightGroupsFindBestRegion {
	struct FName Name; // 0x00(0x08)
	float Priority; // 0x08(0x04)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsImportScheduleTable
// Size: 0x20 (Inherited: 0x00)
struct FGlobalLightGroupsImportScheduleTable {
	struct UDataTable* ScheduleTable; // 0x00(0x08)
	struct FGlobalLightGroupsImportScheduleOptions ImportOptions; // 0x08(0x14)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsImportScheduleOptions
// Size: 0x14 (Inherited: 0x00)
struct FGlobalLightGroupsImportScheduleOptions {
	enum class EGlobalLightGroupsImportScheduleType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGlobalLightGroupsImportScheduleOptionsAdvanced Advanced; // 0x04(0x10)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsImportScheduleOptionsAdvanced
// Size: 0x10 (Inherited: 0x00)
struct FGlobalLightGroupsImportScheduleOptionsAdvanced {
	struct FName KeyNameFilter; // 0x00(0x08)
	struct FName OverrideKeyNames; // 0x08(0x08)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsScheduleDebugMap
// Size: 0x10 (Inherited: 0x00)
struct FGlobalLightGroupsScheduleDebugMap {
	struct TArray<struct FGlobalLightGroupsScheduleDebugMapEntry> Schedules; // 0x00(0x10)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsScheduleDebugMapEntry
// Size: 0x18 (Inherited: 0x00)
struct FGlobalLightGroupsScheduleDebugMapEntry {
	struct FName Key; // 0x00(0x08)
	struct TArray<struct FString> ScheduleEntries; // 0x08(0x10)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsScheduleMap
// Size: 0x50 (Inherited: 0x00)
struct FGlobalLightGroupsScheduleMap {
	struct TMap<struct FName, struct FGlobalLightGroupsSchedule> Schedules; // 0x00(0x50)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsSchedule
// Size: 0x10 (Inherited: 0x00)
struct FGlobalLightGroupsSchedule {
	struct TArray<struct FGlobalLightGroupsTimeOnOff> ScheduleEntries; // 0x00(0x10)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsImportSunScheduleEntry
// Size: 0x30 (Inherited: 0x08)
struct FGlobalLightGroupsImportSunScheduleEntry : FTableRowBase {
	struct FName GroupName; // 0x08(0x08)
	enum class EGlobalLightGroupsSunAngle OnAngle; // 0x10(0x01)
	enum class EGlobalLightGroupsSunDirection OnDirection; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float OnAngleOffset; // 0x14(0x04)
	float OnRandMinutesMin; // 0x18(0x04)
	float OnRandMinutesMax; // 0x1c(0x04)
	enum class EGlobalLightGroupsSunAngle OffAngle; // 0x20(0x01)
	enum class EGlobalLightGroupsSunDirection OffDirection; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float OffAngleOffset; // 0x24(0x04)
	float OffRandMinutesMin; // 0x28(0x04)
	float OffRandMinutesMax; // 0x2c(0x04)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsImportScheduleEntry
// Size: 0x38 (Inherited: 0x08)
struct FGlobalLightGroupsImportScheduleEntry : FTableRowBase {
	struct FName GroupName; // 0x08(0x08)
	int32_t OnHour; // 0x10(0x04)
	int32_t OnMinute; // 0x14(0x04)
	float OnRandMinutesMin; // 0x18(0x04)
	float OnRandMinutesMax; // 0x1c(0x04)
	int32_t OffHour; // 0x20(0x04)
	int32_t OffMinute; // 0x24(0x04)
	float OffRandMinutesMin; // 0x28(0x04)
	float OffRandMinutesMax; // 0x2c(0x04)
	bool bNormalizeForSeasons; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsComponentSchedules
// Size: 0x50 (Inherited: 0x00)
struct FGlobalLightGroupsComponentSchedules {
	struct TMap<struct TWeakObjectPtr<struct ULightComponent>, struct FGlobalLightGroupsComponentSchedule> Schedules; // 0x00(0x50)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsComponentSchedule
// Size: 0x18 (Inherited: 0x00)
struct FGlobalLightGroupsComponentSchedule {
	struct TArray<struct FGlobalLightGroupsScheduleEntry> Schedule; // 0x00(0x10)
	char bToggleChildren : 1; // 0x10(0x01)
	char bPropagateToParent : 1; // 0x10(0x01)
	char bDisabled : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsUpdateTime
// Size: 0x10 (Inherited: 0x00)
struct FGlobalLightGroupsUpdateTime {
	struct FTimespan Time; // 0x00(0x08)
	struct FTimespan SolarTime; // 0x08(0x08)
};

// ScriptStruct GlobalLightGroups.GlobalLightGroupsDebugTimeOfDay
// Size: 0x18 (Inherited: 0x00)
struct FGlobalLightGroupsDebugTimeOfDay {
	struct FDateTime DateTime; // 0x00(0x08)
	struct FString DateTimeString; // 0x08(0x10)
};

// ScriptStruct GlobalLightGroups.SolarTime
// Size: 0x08 (Inherited: 0x00)
struct FSolarTime {
	struct FTimespan Time; // 0x00(0x08)
};

// ScriptStruct GlobalLightGroups.LightComponentSchedules
// Size: 0x50 (Inherited: 0x00)
struct FLightComponentSchedules {
	struct TMap<struct TWeakObjectPtr<struct USceneComponent>, struct FLightComponentSchedule> Schedules; // 0x00(0x50)
};

// ScriptStruct GlobalLightGroups.LightComponentSchedule
// Size: 0x28 (Inherited: 0x00)
struct FLightComponentSchedule {
	struct TArray<struct FGlobalLightGroupsScheduleEntry> Schedule; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct FName HermesEvent; // 0x18(0x08)
	char bToggleChildren : 1; // 0x20(0x01)
	char bDisabled : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GlobalLightGroups.LightOnOffFX
// Size: 0x38 (Inherited: 0x00)
struct FLightOnOffFX {
	struct FName Name; // 0x00(0x08)
	struct FLightSwitchFX TurnOnFX; // 0x08(0x18)
	struct FLightSwitchFX TurnOffFX; // 0x20(0x18)
};

// ScriptStruct GlobalLightGroups.LightSwitchFX
// Size: 0x18 (Inherited: 0x00)
struct FLightSwitchFX {
	struct UNiagaraSystem* NiagaraFX; // 0x00(0x08)
	struct UAkAudioEvent* SoundFX; // 0x08(0x08)
	struct USceneComponent* AttachComponent; // 0x10(0x08)
};

// ScriptStruct GlobalLightGroups.LightOnOffFXTargetList
// Size: 0x10 (Inherited: 0x00)
struct FLightOnOffFXTargetList {
	struct TArray<struct FLightOnOffFXTarget> Targets; // 0x00(0x10)
};

// ScriptStruct GlobalLightGroups.LightOnOffFXTarget
// Size: 0x10 (Inherited: 0x00)
struct FLightOnOffFXTarget {
	struct USceneComponent* SceneComponent; // 0x00(0x08)
	bool bOnOff; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

