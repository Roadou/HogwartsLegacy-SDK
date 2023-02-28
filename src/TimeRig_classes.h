// Class TimeRig.TimeRigElement
// Size: 0x50 (Inherited: 0x28)
struct UTimeRigElement : UObject {
	bool Enabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UTimeRigElement* ParentElement; // 0x30(0x08)
	struct FName UserName; // 0x38(0x08)
	struct TArray<struct FTimeRigNamedSymbol> NamedSymbols; // 0x40(0x10)
};

// Class TimeRig.TimeRigInterval
// Size: 0x88 (Inherited: 0x50)
struct UTimeRigInterval : UTimeRigElement {
	struct FTimeRigInputSymbol Start; // 0x50(0x18)
	struct FTimeRigOutputSymbol Finish; // 0x68(0x18)
	float SortOrder; // 0x80(0x04)
	bool UsePostActorTick; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)

	void OnStartChanged(struct FTimeRigCoordinate Previous, struct FTimeRigCoordinate Current, struct UTimeRigInstanceContext* Context, struct UTimeRigElementState* State); // Function TimeRig.TimeRigInterval.OnStartChanged // (Native|Public) // @ game+0x1939270
	void OnFinishChanged(struct FTimeRigCoordinate Previous, struct FTimeRigCoordinate Current, struct UTimeRigInstanceContext* Context, struct UTimeRigElementState* State); // Function TimeRig.TimeRigInterval.OnFinishChanged // (Native|Public) // @ game+0x19390f0
};

// Class TimeRig.TimeRigElementState
// Size: 0x48 (Inherited: 0x28)
struct UTimeRigElementState : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct UTimeRigInstanceContext* Context; // 0x38(0x08)
	struct UTimeRigElement* BaseDefinition; // 0x40(0x08)
};

// Class TimeRig.TimeRigIntervalState
// Size: 0x50 (Inherited: 0x48)
struct UTimeRigIntervalState : UTimeRigElementState {
	char pad_48[0x8]; // 0x48(0x08)
};

// Class TimeRig.TimeRig
// Size: 0x168 (Inherited: 0x88)
struct UTimeRig : UTimeRigInterval {
	struct TMap<struct FName, struct FReferencedTimeRigBindings> ReferencedTimeRigBindings; // 0x88(0x50)
	struct TSet<struct UTimeRigEvent*> EventHull; // 0xd8(0x50)
	char pad_128[0x10]; // 0x128(0x10)
	struct TArray<struct UTimeRigElement*> ChildElements; // 0x138(0x10)
	enum class ETimeRigInitializingBehavior InitializingBehavior; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	int32_t RandomSeed; // 0x14c(0x04)
	struct UTimeRig_StoryGraph* StoryGraph; // 0x150(0x08)
	struct TArray<struct FName> WarmUpTags; // 0x158(0x10)
};

// Class TimeRig.TimeRigState
// Size: 0x78 (Inherited: 0x50)
struct UTimeRigState : UTimeRigIntervalState {
	char pad_50[0x28]; // 0x50(0x28)
};

// Class TimeRig.TimeRig_StoryGraph
// Size: 0x80 (Inherited: 0x28)
struct UTimeRig_StoryGraph : UObject {
	struct FString Name; // 0x28(0x10)
	struct TArray<struct UTimeRig_StoryGraphNode*> RootNodes; // 0x38(0x10)
	struct TArray<struct UTimeRig_StoryGraphNode*> AllNodes; // 0x48(0x10)
	struct TArray<struct UTimeRig_StoryGraphEdge*> AllEdges; // 0x58(0x10)
	bool bEdgeEnabled; // 0x68(0x01)
	bool bPersistent; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct TArray<struct TSoftObjectPtr<UWorld>> StageLevels; // 0x70(0x10)

	void Print(bool ToConsole, bool ToScreen); // Function TimeRig.TimeRig_StoryGraph.Print // (Final|Native|Public|BlueprintCallable) // @ game+0x1939610
	void GetNodesByLevel(int32_t Level, struct TArray<struct UTimeRig_StoryGraphNode*>& Nodes); // Function TimeRig.TimeRig_StoryGraph.GetNodesByLevel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1938cf0
	int32_t GetLevelNum(); // Function TimeRig.TimeRig_StoryGraph.GetLevelNum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938cc0
};

// Class TimeRig.TimeRigInstanceContext
// Size: 0x6b0 (Inherited: 0x28)
struct UTimeRigInstanceContext : UObject {
	struct UTimeRig* TimeRig; // 0x28(0x08)
	char pad_30[0x50]; // 0x30(0x50)
	bool IsHammerTime; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FRandomStream RandomStream; // 0x84(0x08)
	bool InitializeAsPaused; // 0x8c(0x01)
	bool IsInEditor; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	struct FTimeRigCursor CurrentCursor; // 0x90(0x08)
	struct FTimeRigCoordinate InitializationDuration; // 0x98(0x04)
	struct FTimeRigCoordinate LastInitializationError; // 0x9c(0x04)
	int32_t EventUpdateToken; // 0xa0(0x04)
	bool bSkippingEnabled; // 0xa4(0x01)
	bool bInUnskippableSection; // 0xa5(0x01)
	bool bSkipping; // 0xa6(0x01)
	char pad_A7[0xb9]; // 0xa7(0xb9)
	struct TMap<struct UTimeRigElement*, struct UTimeRigElementState*> InstanceStateMap; // 0x160(0x50)
	struct TArray<struct UTimeRigInstanceContext*> EmbeddedContexts; // 0x1b0(0x10)
	struct TSet<struct UTimeRigElementState*> ElementStatesNotReadyToPlay; // 0x1c0(0x50)
	struct TMap<struct FName, struct FTimeRigEventHandlerData> PreInitializedEventHandlers; // 0x210(0x50)
	char pad_260[0x58]; // 0x260(0x58)
	struct TArray<struct FTimeRigEnterExitEntry> EnteringExitingEntries; // 0x2b8(0x10)
	struct TSet<struct UTimeRigIntervalState*> EnteringIntervals; // 0x2c8(0x50)
	struct TSet<struct UTimeRigIntervalState*> ExitingIntervals; // 0x318(0x50)
	struct TSet<struct UTimeRigIntervalState*> InsideIntervals; // 0x368(0x50)
	struct TSet<struct UTimeRigIntervalState*> SkippedIntervals; // 0x3b8(0x50)
	struct TSet<struct UTimeRigIntervalState*> InstantIntervals; // 0x408(0x50)
	struct TArray<struct FTimeRigEventToHandle> EventsToHandle; // 0x458(0x10)
	struct TArray<struct UTimeRigEvent*> EventsRegisteredToBeHandled; // 0x468(0x10)
	struct TSet<struct UTimeRigIntervalState*> InsideIntervalsPostActorTick; // 0x478(0x50)
	struct TSet<struct UTimeRigIntervalState*> InstantIntervalsPostActorTick; // 0x4c8(0x50)
	char pad_518[0x198]; // 0x518(0x198)
};

// Class TimeRig.TimeRigPlayer
// Size: 0x288 (Inherited: 0x28)
struct UTimeRigPlayer : UObject {
	char pad_28[0x98]; // 0x28(0x98)
	struct FName BranchID; // 0xc0(0x08)
	char pad_C8[0x118]; // 0xc8(0x118)
	struct UTimeRig* TimeRig; // 0x1e0(0x08)
	struct UTimeRigInstanceContext* InstanceContext; // 0x1e8(0x08)
	float PlaybackScale; // 0x1f0(0x04)
	float RoundTimeToFPS; // 0x1f4(0x04)
	float SecondsRemainingForAlmostCompleteTrigger; // 0x1f8(0x04)
	char pad_1FC[0x8c]; // 0x1fc(0x8c)

	void StopIn(float SecondsFromNow, float BlendTime); // Function TimeRig.TimeRigPlayer.StopIn // (Final|Native|Public|BlueprintCallable) // @ game+0x1939bf0
	void StopImmediate(); // Function TimeRig.TimeRigPlayer.StopImmediate // (Final|Native|Public|BlueprintCallable) // @ game+0x1939bd0
	void Stop(); // Function TimeRig.TimeRigPlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x1939bb0
	bool Skip(); // Function TimeRig.TimeRigPlayer.Skip // (Final|Native|Public|BlueprintCallable) // @ game+0x1939b80
	void SetTime(float Seconds); // Function TimeRig.TimeRigPlayer.SetTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1939af0
	void SetSecondsRemainingForAlmostCompleteTrigger(float Seconds); // Function TimeRig.TimeRigPlayer.SetSecondsRemainingForAlmostCompleteTrigger // (Final|Native|Public|BlueprintCallable) // @ game+0x1939a70
	void SetRoundTimeToFPS(float FPS); // Function TimeRig.TimeRigPlayer.SetRoundTimeToFPS // (Final|Native|Public|BlueprintCallable) // @ game+0x19399f0
	void SetPlaybackScale(float Scale); // Function TimeRig.TimeRigPlayer.SetPlaybackScale // (Final|Native|Public|BlueprintCallable) // @ game+0x1939970
	bool SetOnPlaybackStarting(struct FDelegate InOnPlaybackStarting); // Function TimeRig.TimeRigPlayer.SetOnPlaybackStarting // (Final|Native|Public|BlueprintCallable) // @ game+0x19398c0
	bool SetOnPlaybackStarted(struct FDelegate InOnPlaybackStarted); // Function TimeRig.TimeRigPlayer.SetOnPlaybackStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x1939810
	bool SetLooping(bool LoopingEnabled); // Function TimeRig.TimeRigPlayer.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x1939770
	void RewindToCurrentStartOf(struct UObject* ActionType); // Function TimeRig.TimeRigPlayer.RewindToCurrentStartOf // (Final|Native|Public|BlueprintCallable) // @ game+0x19396e0
	bool ReadyToPlay(); // Function TimeRig.TimeRigPlayer.ReadyToPlay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938f70
	bool PlayImmediate(struct FName InActivationSource); // Function TimeRig.TimeRigPlayer.PlayImmediate // (Final|Native|Public|BlueprintCallable) // @ game+0x1939540
	bool PlaybackHasStarted(); // Function TimeRig.TimeRigPlayer.PlaybackHasStarted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19395e0
	bool Play(struct FName InActivationSource); // Function TimeRig.TimeRigPlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x19394a0
	void PauseAfterCurrentEndOf(struct UObject* ActionType); // Function TimeRig.TimeRigPlayer.PauseAfterCurrentEndOf // (Final|Native|Public|BlueprintCallable) // @ game+0x1939410
	void Pause(); // Function TimeRig.TimeRigPlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x19393f0
	bool IsWantingToPlayButNotPlaying(); // Function TimeRig.TimeRigPlayer.IsWantingToPlayButNotPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19390c0
	bool IsTicking(); // Function TimeRig.TimeRigPlayer.IsTicking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1939090
	bool IsStopping(); // Function TimeRig.TimeRigPlayer.IsStopping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1939060
	bool IsPlaying(); // Function TimeRig.TimeRigPlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1939030
	bool IsLooping(); // Function TimeRig.TimeRigPlayer.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1939000
	bool IsInitializing(); // Function TimeRig.TimeRigPlayer.IsInitializing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938fd0
	bool IsInitialized(); // Function TimeRig.TimeRigPlayer.IsInitialized // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938fa0
	bool IsActive(); // Function TimeRig.TimeRigPlayer.IsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938f70
	bool HasEvent(struct FName EventName); // Function TimeRig.TimeRigPlayer.HasEvent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1938ed0
	struct UTimeRig* GetTimeRig(); // Function TimeRig.TimeRigPlayer.GetTimeRig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938eb0
	float GetTime(); // Function TimeRig.TimeRigPlayer.GetTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938e70
	float GetSecondsRemainingForAlmostCompleteTrigger(); // Function TimeRig.TimeRigPlayer.GetSecondsRemainingForAlmostCompleteTrigger // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938e50
	float GetRoundTimeToFPS(); // Function TimeRig.TimeRigPlayer.GetRoundTimeToFPS // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938e30
	enum class ETimeRigPlayerState GetPlayerState(); // Function TimeRig.TimeRigPlayer.GetPlayerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938e00
	float GetPlaybackScale(); // Function TimeRig.TimeRigPlayer.GetPlaybackScale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938de0
	float GetEndTime(); // Function TimeRig.TimeRigPlayer.GetEndTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938ca0
	float GetCurrentTime(); // Function TimeRig.TimeRigPlayer.GetCurrentTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938c70
	float GetBeginTime(); // Function TimeRig.TimeRigPlayer.GetBeginTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1938c50
	void FastForwardToNextStartOf(struct UObject* ActionType); // Function TimeRig.TimeRigPlayer.FastForwardToNextStartOf // (Final|Native|Public|BlueprintCallable) // @ game+0x1938bc0
	void FastForwardToNextEndOf(struct UObject* ActionType); // Function TimeRig.TimeRigPlayer.FastForwardToNextEndOf // (Final|Native|Public|BlueprintCallable) // @ game+0x1938b30
	void FastForwardToEvent(struct FName& EventName); // Function TimeRig.TimeRigPlayer.FastForwardToEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1938aa0
	void FastForwardToCurrentEndOf(struct UObject* ActionType); // Function TimeRig.TimeRigPlayer.FastForwardToCurrentEndOf // (Final|Native|Public|BlueprintCallable) // @ game+0x1938a10
	bool EventOccursNow(struct FName EventName); // Function TimeRig.TimeRigPlayer.EventOccursNow // (Final|Native|Public|BlueprintCallable) // @ game+0x1938970
	bool EventOccursAt(struct FName EventName, float SecondsFromNow); // Function TimeRig.TimeRigPlayer.EventOccursAt // (Final|Native|Public|BlueprintCallable) // @ game+0x19388a0
	bool AddEventHandler(struct FName EventName, struct FDelegate& Handler); // Function TimeRig.TimeRigPlayer.AddEventHandler // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19387a0
	bool AddCriticalEventHandler(struct FName EventName, struct FDelegate& Handler); // Function TimeRig.TimeRigPlayer.AddCriticalEventHandler // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19386a0
};

// Class TimeRig.TimeRigRule
// Size: 0xa0 (Inherited: 0x88)
struct UTimeRigRule : UTimeRigInterval {
	char pad_88[0x8]; // 0x88(0x08)
	struct TArray<struct UTimeRigElement*> BakedChildren; // 0x90(0x10)
};

// Class TimeRig.TimeRigRuleState
// Size: 0x78 (Inherited: 0x50)
struct UTimeRigRuleState : UTimeRigIntervalState {
	char pad_50[0x18]; // 0x50(0x18)
	struct UTimeRig* GeneratedTimeRig; // 0x68(0x08)
	struct UTimeRigInstanceContext* InstanceContext; // 0x70(0x08)
};

// Class TimeRig.TimeRig_StoryGraphNode
// Size: 0x98 (Inherited: 0x28)
struct UTimeRig_StoryGraphNode : UObject {
	struct TArray<struct UTimeRig_StoryGraphNode*> ParentNodes; // 0x28(0x10)
	struct TArray<struct UTimeRig_StoryGraphNode*> ChildrenNodes; // 0x38(0x10)
	struct TMap<struct UTimeRig_StoryGraphNode*, struct UTimeRig_StoryGraphEdge*> Edges; // 0x48(0x50)
};

// Class TimeRig.TimeRigEvent
// Size: 0x30 (Inherited: 0x28)
struct UTimeRigEvent : UObject {
	int32_t CoordinateIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class TimeRig.TimeRigAutoEvent
// Size: 0x40 (Inherited: 0x30)
struct UTimeRigAutoEvent : UTimeRigEvent {
	char pad_30[0x8]; // 0x30(0x08)
	struct FTimeRigCoordinate DefaultOffset; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class TimeRig.TimeRigChainEvent
// Size: 0x38 (Inherited: 0x30)
struct UTimeRigChainEvent : UTimeRigEvent {
	struct FTimeRigCoordinate Offset; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class TimeRig.TimeRigClampEvent
// Size: 0xe8 (Inherited: 0x30)
struct UTimeRigClampEvent : UTimeRigEvent {
	struct FTimeRigEventReference Input; // 0x30(0x38)
	struct FTimeRigEventReference Minimum; // 0x68(0x38)
	struct FTimeRigCoordinate MinimumOffset; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FTimeRigEventReference Maximum; // 0xa8(0x38)
	struct FTimeRigCoordinate MaximumOffset; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// Class TimeRig.TimeRigCustomEvent
// Size: 0x48 (Inherited: 0x30)
struct UTimeRigCustomEvent : UTimeRigEvent {
	char pad_30[0x8]; // 0x30(0x08)
	struct FName CustomEventName; // 0x38(0x08)
	struct FTimeRigCoordinate DefaultOffset; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class TimeRig.TimeRigExternalEvent
// Size: 0x40 (Inherited: 0x30)
struct UTimeRigExternalEvent : UTimeRigEvent {
	char pad_30[0x8]; // 0x30(0x08)
	enum class ETimeRigExternalEventConstraint Constraint; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float DefaultTime; // 0x3c(0x04)
};

// Class TimeRig.TimeRigFirstOfEvent
// Size: 0x40 (Inherited: 0x30)
struct UTimeRigFirstOfEvent : UTimeRigEvent {
	struct TArray<struct FTimeRigEventReference> InputEventReferences; // 0x30(0x10)
};

// Class TimeRig.TimeRigFractionEvent
// Size: 0xa8 (Inherited: 0x30)
struct UTimeRigFractionEvent : UTimeRigEvent {
	struct FTimeRigEventReference StartReference; // 0x30(0x38)
	struct FTimeRigEventReference FinishReference; // 0x68(0x38)
	float Fraction; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class TimeRig.TimeRigFractionPlusEvent
// Size: 0xa8 (Inherited: 0x30)
struct UTimeRigFractionPlusEvent : UTimeRigEvent {
	struct FTimeRigEventReference StartReference; // 0x30(0x38)
	struct FTimeRigEventReference FinishReference; // 0x68(0x38)
	struct UFloatProvider* FractionProvider; // 0xa0(0x08)
};

// Class TimeRig.TimeRigLastOfEvent
// Size: 0x40 (Inherited: 0x30)
struct UTimeRigLastOfEvent : UTimeRigEvent {
	struct TArray<struct FTimeRigEventReference> InputEventReferences; // 0x30(0x10)
};

// Class TimeRig.TimeRigLastOfChildrenEvent
// Size: 0x30 (Inherited: 0x30)
struct UTimeRigLastOfChildrenEvent : UTimeRigEvent {
};

// Class TimeRig.TimeRigMatchParentEvent
// Size: 0x30 (Inherited: 0x30)
struct UTimeRigMatchParentEvent : UTimeRigEvent {
};

// Class TimeRig.TimeRigRelativeEvent
// Size: 0x70 (Inherited: 0x30)
struct UTimeRigRelativeEvent : UTimeRigEvent {
	struct FTimeRigEventReference ParentReference; // 0x30(0x38)
	struct FTimeRigCoordinate Offset; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class TimeRig.TimeRigRelativePlusEvent
// Size: 0x70 (Inherited: 0x30)
struct UTimeRigRelativePlusEvent : UTimeRigEvent {
	struct FTimeRigEventReference ParentReference; // 0x30(0x38)
	struct UFloatProvider* OffsetProvider; // 0x68(0x08)
};

// Class TimeRig.TimeRigSelfEvent
// Size: 0x38 (Inherited: 0x30)
struct UTimeRigSelfEvent : UTimeRigEvent {
	struct FTimeRigCoordinate Offset; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class TimeRig.TimeRigSelfPlusEvent
// Size: 0x38 (Inherited: 0x30)
struct UTimeRigSelfPlusEvent : UTimeRigEvent {
	struct UFloatProvider* OffsetProvider; // 0x30(0x08)
};

// Class TimeRig.TimeRigGenerator
// Size: 0x28 (Inherited: 0x28)
struct UTimeRigGenerator : UInterface {
};

// Class TimeRig.StoryGraphConditionProvider
// Size: 0x28 (Inherited: 0x28)
struct UStoryGraphConditionProvider : UBaseProvider {
};

// Class TimeRig.StoryGraphCondition_AND
// Size: 0x38 (Inherited: 0x28)
struct UStoryGraphCondition_AND : UStoryGraphConditionProvider {
	struct TArray<struct UStoryGraphConditionProvider*> Conditions; // 0x28(0x10)
};

// Class TimeRig.StoryGraphCondition_Branch
// Size: 0x50 (Inherited: 0x28)
struct UStoryGraphCondition_Branch : UStoryGraphConditionProvider {
	struct FStoryGraphConditionBranchReference BranchID; // 0x28(0x08)
	struct UBoolProvider* IsVisible; // 0x30(0x08)
	struct UBoolProvider* IsSelectable; // 0x38(0x08)
	struct UStringProvider* DisplayTextID; // 0x40(0x08)
	enum class EStoryGraphBranchIcon DisplayIcon; // 0x48(0x04)
	int32_t NonSelectableHandling; // 0x4c(0x04)
};

// Class TimeRig.StoryGraphCondition_NodeIsActive
// Size: 0x30 (Inherited: 0x28)
struct UStoryGraphCondition_NodeIsActive : UStoryGraphConditionProvider {
	struct FStoryGraphConditionNodeReference Node; // 0x28(0x08)
};

// Class TimeRig.StoryGraphCondition_NOT
// Size: 0x30 (Inherited: 0x28)
struct UStoryGraphCondition_NOT : UStoryGraphConditionProvider {
	struct UStoryGraphConditionProvider* ConditionToInvert; // 0x28(0x08)
};

// Class TimeRig.StoryGraphCondition_OR
// Size: 0x38 (Inherited: 0x28)
struct UStoryGraphCondition_OR : UStoryGraphConditionProvider {
	struct TArray<struct UStoryGraphConditionProvider*> Conditions; // 0x28(0x10)
};

// Class TimeRig.StoryGraphCondition_XOR
// Size: 0x38 (Inherited: 0x28)
struct UStoryGraphCondition_XOR : UStoryGraphConditionProvider {
	struct TArray<struct UStoryGraphConditionProvider*> Conditions; // 0x28(0x10)
};

// Class TimeRig.StoryGraphTriggerProvider
// Size: 0x28 (Inherited: 0x28)
struct UStoryGraphTriggerProvider : UBaseProvider {
};

// Class TimeRig.StoryGraphTrigger_Activate
// Size: 0xa8 (Inherited: 0x28)
struct UStoryGraphTrigger_Activate : UStoryGraphTriggerProvider {
	enum class EStoryGraphTriggerActive_InitializeType InitializationType; // 0x28(0x01)
	enum class EStoryGraphTrigger_ActivateType ActivationType; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FTimeRigEventReference ActivationEvent; // 0x30(0x38)
	enum class ETimeRig_StoryGraphEdgeFeedbackType FeedbackType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FTimeRigEventReference FeedbackEvent; // 0x70(0x38)
};

// Class TimeRig.StoryGraphTrigger_Event
// Size: 0x98 (Inherited: 0x28)
struct UStoryGraphTrigger_Event : UStoryGraphTriggerProvider {
	struct FTimeRigEventReference SourceEvent; // 0x28(0x38)
	struct FTimeRigEventReference TargetEvent; // 0x60(0x38)
};

// Class TimeRig.StoryGraphTrigger_Initialize
// Size: 0xa8 (Inherited: 0x28)
struct UStoryGraphTrigger_Initialize : UStoryGraphTriggerProvider {
	enum class EStoryGraphTrigger_InitializeType InitializationType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FTimeRigEventReference InitializationEvent; // 0x30(0x38)
	enum class ETimeRig_StoryGraphEdgeFeedbackType FeedbackType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FTimeRigEventReference FeedbackEvent; // 0x70(0x38)
};

// Class TimeRig.TimeRigChain
// Size: 0xa8 (Inherited: 0x88)
struct UTimeRigChain : UTimeRigInterval {
	struct FLinearColor Color; // 0x88(0x10)
	struct TArray<struct UTimeRigElement*> ChildElements; // 0x98(0x10)
};

// Class TimeRig.TimeRigChainState
// Size: 0x68 (Inherited: 0x50)
struct UTimeRigChainState : UTimeRigIntervalState {
	char pad_50[0x18]; // 0x50(0x18)
};

// Class TimeRig.TimeRigGroup
// Size: 0xa8 (Inherited: 0x88)
struct UTimeRigGroup : UTimeRigInterval {
	struct FLinearColor Color; // 0x88(0x10)
	struct TArray<struct UTimeRigElement*> ChildElements; // 0x98(0x10)
};

// Class TimeRig.TimeRigGroupState
// Size: 0x68 (Inherited: 0x50)
struct UTimeRigGroupState : UTimeRigIntervalState {
	char pad_50[0x18]; // 0x50(0x18)
};

// Class TimeRig.TimeRigParentElement
// Size: 0x28 (Inherited: 0x28)
struct UTimeRigParentElement : UInterface {
};

// Class TimeRig.TimeRigPlaceholder
// Size: 0x68 (Inherited: 0x50)
struct UTimeRigPlaceholder : UTimeRigElement {
	struct UTimeRigElement* PlaceholderForType; // 0x50(0x08)
	struct TArray<struct UTimeRigElement*> ChildElements; // 0x58(0x10)
};

// Class TimeRig.TimeRigPlaceholderState
// Size: 0x70 (Inherited: 0x48)
struct UTimeRigPlaceholderState : UTimeRigElementState {
	char pad_48[0x28]; // 0x48(0x28)
};

// Class TimeRig.TimeRigScratchAnimationContainer
// Size: 0x28 (Inherited: 0x28)
struct UTimeRigScratchAnimationContainer : UInterface {
};

// Class TimeRig.TimeRigSettableEvent
// Size: 0x28 (Inherited: 0x28)
struct UTimeRigSettableEvent : UInterface {
};

// Class TimeRig.TimeRig_StoryGraphEdge
// Size: 0x110 (Inherited: 0x28)
struct UTimeRig_StoryGraphEdge : UObject {
	struct UStoryGraphConditionProvider* Condition; // 0x28(0x08)
	struct UStoryGraphTriggerProvider* Trigger; // 0x30(0x08)
	enum class ETimeRig_StoryGraphEdgeInitType InitializationType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FTimeRigEventReference InitializationEvent; // 0x40(0x38)
	enum class ETimeRig_StoryGraphEdgeTriggerType TriggerType; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FName BranchID; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
	struct FTimeRigEventReference ActivationEvent; // 0x88(0x38)
	enum class ETimeRig_StoryGraphEdgeFeedbackType FeedbackType; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct FTimeRigEventReference FeedbackEvent; // 0xc8(0x38)
	struct UTimeRig_StoryGraphNode* StartNode; // 0x100(0x08)
	struct UTimeRig_StoryGraphNode* EndNode; // 0x108(0x08)
};

// Class TimeRig.StoryGraphPlayer
// Size: 0x28 (Inherited: 0x28)
struct UStoryGraphPlayer : UInterface {
};

