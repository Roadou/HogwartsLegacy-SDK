// Enum TimeRig.ETimeRigInitializingBehavior
enum class ETimeRigInitializingBehavior : uint8 {
	UseSRSettings = 0,
	None = 1,
	ShowLoadingIcon = 2,
	FadeToBlackAndShowLoadingIcon = 3,
	HardToBlackAndShowLoadingIcon = 4,
	FadeToBlackHoldFade = 5,
	BehindCurtain = 6,
	ETimeRigInitializingBehavior_MAX = 7
};

// Enum TimeRig.ETimeRigExternalEventConstraint
enum class ETimeRigExternalEventConstraint : uint8 {
	NotConstrained = 0,
	BeforeEvent = 1,
	AfterEvent = 2,
	ETimeRigExternalEventConstraint_MAX = 3
};

// Enum TimeRig.EStoryGraphBranchIcon
enum class EStoryGraphBranchIcon : uint8 {
	None = 0,
	Info = 1,
	InfoHub = 2,
	Straight = 3,
	Special = 4,
	BackTo = 5,
	Exit = 6,
	MainMission = 7,
	SideMission = 8,
	Assignment = 9,
	Conversation = 10,
	Vendor = 11,
	EStoryGraphBranchIcon_MAX = 12
};

// Enum TimeRig.EStoryGraphTrigger_ActivateType
enum class EStoryGraphTrigger_ActivateType : uint8 {
	ActivatedByFinish = 0,
	ActivatedByEvent = 1,
	EStoryGraphTrigger_MAX = 2
};

// Enum TimeRig.EStoryGraphTriggerActive_InitializeType
enum class EStoryGraphTriggerActive_InitializeType : uint8 {
	InitializeWhenTriggered = 0,
	InitializeWithPrevious = 1,
	EStoryGraphTriggerActive_MAX = 2
};

// Enum TimeRig.EStoryGraphTrigger_InitializeType
enum class EStoryGraphTrigger_InitializeType : uint8 {
	InitializeWithPrevious = 0,
	InitializeByEvent = 1,
	EStoryGraphTrigger_MAX = 2
};

// Enum TimeRig.ETimeRigElement_FlagType
enum class ETimeRigElement_FlagType : uint8 {
	None = 0,
	Red = 1,
	Orange = 2,
	Yellow = 3,
	Green = 4,
	Cyan = 5,
	Blue = 6,
	Magenta = 7,
	White = 8,
	Grey = 9,
	Black = 10,
	ETimeRigElement_MAX = 11
};

// Enum TimeRig.ETimeRigEnterExitType
enum class ETimeRigEnterExitType : uint8 {
	Entering = 0,
	EnteringInside = 1,
	Exiting = 2,
	Instant = 3,
	Skip = 4,
	Unknown = 5,
	ETimeRigEnterExitType_MAX = 6
};

// Enum TimeRig.ETimeRigPlayerState
enum class ETimeRigPlayerState : uint8 {
	Uninitialized = 0,
	PreparingToInitialize = 1,
	Initializing = 2,
	Active = 3,
	Finishing = 4,
	Finished = 5,
	ETimeRigPlayerState_MAX = 6
};

// Enum TimeRig.ETimeRigScreenFadeType
enum class ETimeRigScreenFadeType : uint8 {
	FadeIn = 0,
	FadeOut = 1,
	ETimeRigScreenFadeType_MAX = 2
};

// Enum TimeRig.ETimeRigFadeEventType
enum class ETimeRigFadeEventType : uint8 {
	None = 0,
	InitialFade = 1,
	FinalFade = 2,
	ETimeRigFadeEventType_MAX = 3
};

// Enum TimeRig.ETimeRig_StoryGraphEdgeFeedbackType
enum class ETimeRig_StoryGraphEdgeFeedbackType : uint8 {
	NoFeedback = 0,
	FeedbackStopOnTargetStart = 1,
	FeedbackEventOnTargetStart = 2,
	ETimeRig_MAX = 3
};

// Enum TimeRig.ETimeRig_StoryGraphEdgeEventTriggerType
enum class ETimeRig_StoryGraphEdgeEventTriggerType : uint8 {
	TriggerEvent = 0,
	DoNotTriggerEvent = 1,
	ETimeRig_MAX = 2
};

// Enum TimeRig.ETimeRig_StoryGraphEdgeActivationType
enum class ETimeRig_StoryGraphEdgeActivationType : uint8 {
	ActivatedByFinish = 0,
	ActivatedByEvent = 1,
	DoNotActivate = 2,
	ETimeRig_MAX = 3
};

// Enum TimeRig.ETimeRig_StoryGraphEdgeTriggerType
enum class ETimeRig_StoryGraphEdgeTriggerType : uint8 {
	TriggeredByFinish = 0,
	TriggeredByParentNode = 1,
	TriggeredByEvent = 2,
	DoNotTrigger = 3,
	ETimeRig_MAX = 4
};

// Enum TimeRig.ETimeRig_StoryGraphEdgeInitType
enum class ETimeRig_StoryGraphEdgeInitType : uint8 {
	InitializeWhenTriggered = 0,
	InitializeWithPrevious = 1,
	InitializeByEvent = 2,
	DoNotInitialize = 3,
	ETimeRig_MAX = 4
};

// Enum TimeRig.ETimeRigUpdatePhase
enum class ETimeRigUpdatePhase : uint8 {
	None = 0,
	HandleUpdate = 2,
	HandleExternalEvents = 3,
	LastPhase = 3,
	ETimeRigUpdatePhase_MAX = 4
};

// ScriptStruct TimeRig.StoryGraphConditionBranchReference
// Size: 0x08 (Inherited: 0x00)
struct FStoryGraphConditionBranchReference {
	struct FName BranchID; // 0x00(0x08)
};

// ScriptStruct TimeRig.StoryGraphConditionNodeReference
// Size: 0x08 (Inherited: 0x00)
struct FStoryGraphConditionNodeReference {
	struct UTimeRig_StoryGraphNode* Node; // 0x00(0x08)
};

// ScriptStruct TimeRig.StoryGraphEdge_ConditionProperties
// Size: 0x01 (Inherited: 0x00)
struct FStoryGraphEdge_ConditionProperties {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TimeRig.ReferencedTimeRigBindings
// Size: 0x58 (Inherited: 0x00)
struct FReferencedTimeRigBindings {
	struct UTimeRig* ReferencedTimeRig; // 0x00(0x08)
	struct TMap<struct TSoftObjectPtr<UTimeRigPlaceholder>, struct UTimeRigElement*> ReferencedPlaceholderMap; // 0x08(0x50)
};

// ScriptStruct TimeRig.TimeRigCoordinate
// Size: 0x04 (Inherited: 0x00)
struct FTimeRigCoordinate {
	float Time; // 0x00(0x04)
};

// ScriptStruct TimeRig.TimeRigEventHandlerData
// Size: 0x28 (Inherited: 0x00)
struct FTimeRigEventHandlerData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TimeRig.TimeRigCursor
// Size: 0x08 (Inherited: 0x00)
struct FTimeRigCursor {
	struct FTimeRigCoordinate PreviousTime; // 0x00(0x04)
	struct FTimeRigCoordinate CurrentTime; // 0x04(0x04)
};

// ScriptStruct TimeRig.TimeRigEventReference
// Size: 0x38 (Inherited: 0x00)
struct FTimeRigEventReference {
	struct TSoftObjectPtr<UTimeRigElement> ReferenceElementSoftPtr; // 0x00(0x28)
	struct TWeakObjectPtr<struct UTimeRigElement> ReferenceElement; // 0x28(0x08)
	struct FName Name; // 0x30(0x08)
};

// ScriptStruct TimeRig.TimeRigEventSymbol
// Size: 0x18 (Inherited: 0x00)
struct FTimeRigEventSymbol {
	char pad_0[0x8]; // 0x00(0x08)
	struct TWeakObjectPtr<struct UTimeRigElement> OwningElement; // 0x08(0x08)
	struct UTimeRigEvent* Event; // 0x10(0x08)
};

// ScriptStruct TimeRig.TimeRigNamedSymbol
// Size: 0x20 (Inherited: 0x18)
struct FTimeRigNamedSymbol : FTimeRigEventSymbol {
	struct FName Name; // 0x18(0x08)
};

// ScriptStruct TimeRig.TimeRigOutputSymbol
// Size: 0x18 (Inherited: 0x18)
struct FTimeRigOutputSymbol : FTimeRigEventSymbol {
};

// ScriptStruct TimeRig.TimeRigInputSymbol
// Size: 0x18 (Inherited: 0x18)
struct FTimeRigInputSymbol : FTimeRigEventSymbol {
};

// ScriptStruct TimeRig.TimeRigEventConstSymbolPair
// Size: 0x10 (Inherited: 0x00)
struct FTimeRigEventConstSymbolPair {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TimeRig.TimeRigEventSymbolPair
// Size: 0x10 (Inherited: 0x00)
struct FTimeRigEventSymbolPair {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TimeRig.TimeRigEventSymbolValue
// Size: 0x10 (Inherited: 0x00)
struct FTimeRigEventSymbolValue {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TimeRig.TimeRigEventSymbolFraction
// Size: 0x18 (Inherited: 0x00)
struct FTimeRigEventSymbolFraction {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TimeRig.TimeRigEventSymbolList
// Size: 0x20 (Inherited: 0x00)
struct FTimeRigEventSymbolList {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TimeRig.TimeRigEnterExitEntry
// Size: 0x10 (Inherited: 0x00)
struct FTimeRigEnterExitEntry {
	enum class ETimeRigEnterExitType EntryType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FTimeRigCoordinate TimeValue; // 0x04(0x04)
	struct UTimeRigIntervalState* IntervalState; // 0x08(0x08)
};

// ScriptStruct TimeRig.TimeRigEventToHandle
// Size: 0x18 (Inherited: 0x00)
struct FTimeRigEventToHandle {
	struct UTimeRigElementState* ElementState; // 0x00(0x08)
	struct FName EventName; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TimeRig.TimeRigScratchAnimation
// Size: 0x08 (Inherited: 0x00)
struct FTimeRigScratchAnimation {
	struct UAnimSequence* Animation; // 0x00(0x08)
};

// ScriptStruct TimeRig.StoryGraphEdge_TriggerProperties
// Size: 0x138 (Inherited: 0x00)
struct FStoryGraphEdge_TriggerProperties {
	char pad_0[0x138]; // 0x00(0x138)
};

// ScriptStruct TimeRig.TimeRigStoryNodeCommandContext
// Size: 0x08 (Inherited: 0x00)
struct FTimeRigStoryNodeCommandContext {
	struct UWorld* PreviewWorld; // 0x00(0x08)
};

