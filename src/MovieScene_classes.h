// Class MovieScene.MovieSceneSignedObject
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneSignedObject : UObject {
	struct FGuid Signature; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)
};

// Class MovieScene.MovieSceneSection
// Size: 0xe8 (Inherited: 0x50)
struct UMovieSceneSection : UMovieSceneSignedObject {
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x50(0x02)
	char pad_52[0x6]; // 0x52(0x06)
	struct FMovieSceneEasingSettings Easing; // 0x58(0x38)
	struct FMovieSceneFrameRange SectionRange; // 0x90(0x10)
	struct FFrameNumber PreRollFrames; // 0xa0(0x04)
	struct FFrameNumber PostRollFrames; // 0xa4(0x04)
	int32_t RowIndex; // 0xa8(0x04)
	int32_t OverlapPriority; // 0xac(0x04)
	char bIsActive : 1; // 0xb0(0x01)
	char bIsLocked : 1; // 0xb0(0x01)
	char pad_B0_2 : 6; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float StartTime; // 0xb4(0x04)
	float EndTime; // 0xb8(0x04)
	float PrerollTime; // 0xbc(0x04)
	float PostrollTime; // 0xc0(0x04)
	char bIsInfinite : 1; // 0xc4(0x01)
	char pad_C4_1 : 7; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	bool bSupportsInfiniteRange; // 0xc8(0x01)
	struct FOptionalMovieSceneBlendType BlendType; // 0xc9(0x02)
	char pad_CB[0x1d]; // 0xcb(0x1d)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x4d115a0
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x4d11510
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x4d11480
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x4d11250
	void SetIsLocked(bool bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x4d111c0
	void SetIsActive(bool bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive // (Final|Native|Public|BlueprintCallable) // @ game+0x4d11110
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10e60
	void SetBlendType(enum class EMovieSceneBlendType InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x4d10de0
	bool IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d10200
	bool IsActive(); // Function MovieScene.MovieSceneSection.IsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d101d0
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2617a90
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d10120
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d10100
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x326c8b0
	enum class EMovieSceneCompletionMode GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d0fe90
	struct FOptionalMovieSceneBlendType GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d0fd50
};

// Class MovieScene.MovieSceneTrack
// Size: 0x90 (Inherited: 0x50)
struct UMovieSceneTrack : UMovieSceneSignedObject {
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x50(0x04)
	char pad_54[0x1]; // 0x54(0x01)
	bool bIsEvalDisabled; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct TArray<int32_t> RowsDisabled; // 0x58(0x10)
	char pad_68[0x4]; // 0x68(0x04)
	struct FGuid EvaluationFieldGuid; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FMovieSceneTrackEvaluationField EvaluationField; // 0x80(0x10)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

// Class MovieScene.MovieSceneSequence
// Size: 0x60 (Inherited: 0x50)
struct UMovieSceneSequence : UMovieSceneSignedObject {
	struct UMovieSceneCompiledData* CompiledData; // 0x50(0x08)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x58(0x01)
	bool bParentContextsAreSignificant; // 0x59(0x01)
	bool bPlayableDirectly; // 0x5a(0x01)
	enum class EMovieSceneSequenceFlags SequenceFlags; // 0x5b(0x01)
	char pad_5C[0x4]; // 0x5c(0x04)

	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d0fc70
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d0fbc0
};

// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x4e8 (Inherited: 0x28)
struct UMovieSceneSequencePlayer : UObject {
	char pad_28[0x238]; // 0x28(0x238)
	struct FMulticastInlineDelegate OnPlay; // 0x260(0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x270(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x280(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x290(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x2a0(0x10)
	enum class EMovieScenePlayerStatus Status; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	char bReversePlayback : 1; // 0x2b4(0x01)
	char pad_2B4_1 : 7; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UMovieSceneSequence* Sequence; // 0x2b8(0x08)
	struct FFrameNumber StartTime; // 0x2c0(0x04)
	int32_t DurationFrames; // 0x2c4(0x04)
	float DurationSubFrames; // 0x2c8(0x04)
	int32_t CurrentNumLoops; // 0x2cc(0x04)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2d0(0x14)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2e8(0xe8)
	char pad_3D0[0x68]; // 0x3d0(0x68)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x438(0x10)
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x448(0x10)
	struct UMovieSceneSequenceTickManager* TickManager; // 0x458(0x08)
	char pad_460[0x88]; // 0x460(0x88)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime // (Final|Native|Public|BlueprintCallable) // @ game+0x4d11720
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x4d11700
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange // (Final|Native|Public|BlueprintCallable) // @ game+0x4d11630
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate // (Final|Native|Public|BlueprintCallable) // @ game+0x4d112e0
	void SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition // (Final|Native|Public|BlueprintCallable) // @ game+0x4d11360
	void SetFrameRate(struct FFrameRate FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate // (Final|Native|Public|BlueprintCallable) // @ game+0x4d11080
	void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10f70
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10ee0
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10d30
	bool ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10c20
	void ScrubToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10b70
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10b50
	void RPC_OnStopEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4d10a90
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4d109b0
	void RestoreState(); // Function MovieScene.MovieSceneSequencePlayer.RestoreState // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10b30
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10900
	bool PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x4d107f0
	void PlayToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10740
	void PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams); // Function MovieScene.MovieSceneSequencePlayer.PlayTo // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10620
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10600
	void PlayLooping(int32_t NumLoops); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10570
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10550
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10530
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10480
	bool JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x4d10370
	void JumpToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x4d102c0
	bool IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d10290
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d10260
	bool IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d10230
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop // (Final|Native|Public|BlueprintCallable) // @ game+0x4d101b0
	struct FQualifiedFrameTime GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d10160
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSequencePlayer.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d10140
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d100d0
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x4d0fff0
	struct FFrameRate GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c2f80
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d0ffc0
	struct FQualifiedFrameTime GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d0ff60
	struct FQualifiedFrameTime GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d0ff20
	bool GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // @ game+0x4d0fef0
	struct FQualifiedFrameTime GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d0feb0
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x4d0fd80
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x4d0fba0
};

// Class MovieScene.MovieSceneSubSection
// Size: 0x168 (Inherited: 0xe8)
struct UMovieSceneSubSection : UMovieSceneSection {
	struct FMovieSceneSectionParameters Parameters; // 0xe8(0x24)
	float StartOffset; // 0x10c(0x04)
	float TimeScale; // 0x110(0x04)
	float PrerollTime; // 0x114(0x04)
	char NetworkMask; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct UMovieSceneSequence* SubSequence; // 0x120(0x08)
	LazyObjectProperty ActorToRecord; // 0x128(0x1c)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString TargetSequenceName; // 0x148(0x10)
	struct FDirectoryPath TargetPathToRecordTo; // 0x158(0x10)

	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x4d146b0
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d14680
};

// Class MovieScene.MovieSceneEntitySystem
// Size: 0x40 (Inherited: 0x28)
struct UMovieSceneEntitySystem : UObject {
	struct UMovieSceneEntitySystemLinker* Linker; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
};

// Class MovieScene.MovieSceneSubTrack
// Size: 0xa0 (Inherited: 0x90)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
};

// Class MovieScene.MovieSceneCustomClockSource
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCustomClockSource : UInterface {

	void OnTick(float DeltaSeconds, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnTick // (Native|Public) // @ game+0x1057900
	void OnStopPlaying(struct FQualifiedFrameTime& InStopTime); // Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying // (Native|Public|HasOutParms) // @ game+0x4d04bf0
	void OnStartPlaying(struct FQualifiedFrameTime& InStartTime); // Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying // (Native|Public|HasOutParms) // @ game+0x4d04b40
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime // (Native|Public|HasOutParms) // @ game+0x4d04a40
};

// Class MovieScene.MovieSceneDeterminismSource
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneDeterminismSource : UInterface {
};

// Class MovieScene.MovieSceneEntityProvider
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneEntityProvider : UInterface {
};

// Class MovieScene.MovieSceneEvaluationHook
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneEvaluationHook : UInterface {
};

// Class MovieScene.MovieScenePlaybackClient
// Size: 0x28 (Inherited: 0x28)
struct UMovieScenePlaybackClient : UInterface {
};

// Class MovieScene.MovieSceneTrackTemplateProducer
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneTrackTemplateProducer : UInterface {
};

// Class MovieScene.NodeAndChannelMappings
// Size: 0x28 (Inherited: 0x28)
struct UNodeAndChannelMappings : UInterface {
};

// Class MovieScene.MovieSceneNodeGroup
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneNodeGroup : UObject {
};

// Class MovieScene.MovieSceneNodeGroupCollection
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneNodeGroupCollection : UObject {
};

// Class MovieScene.MovieScene
// Size: 0x148 (Inherited: 0x50)
struct UMovieScene : UMovieSceneSignedObject {
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x50(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x60(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x70(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x80(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xd0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xe0(0x08)
	struct FMovieSceneFrameRange SelectionRange; // 0xe8(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0xf8(0x10)
	struct FFrameRate TickResolution; // 0x108(0x08)
	struct FFrameRate DisplayRate; // 0x110(0x08)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x118(0x01)
	enum class EUpdateClockSource ClockSource; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
	struct FSoftObjectPath CustomClockSourcePath; // 0x120(0x18)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x138(0x10)
};

// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x90 (Inherited: 0x28)
struct UMovieSceneBindingOverrides : UObject {
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x28(0x10)
	char pad_38[0x58]; // 0x38(0x58)
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Class MovieScene.MovieSceneBlenderSystem
// Size: 0x68 (Inherited: 0x40)
struct UMovieSceneBlenderSystem : UMovieSceneEntitySystem {
	char pad_40[0x28]; // 0x40(0x28)
};

// Class MovieScene.MovieSceneBoolSection
// Size: 0x180 (Inherited: 0xe8)
struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FMovieSceneBoolChannel BoolCurve; // 0xf0(0x90)
};

// Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneEntityInstantiatorSystem : UMovieSceneEntitySystem {
};

// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneGenericBoundObjectInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneBoundSceneComponentInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneSceneComponentImpersonator
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneSceneComponentImpersonator : UInterface {
};

// Class MovieScene.MovieSceneCompiledData
// Size: 0x3f8 (Inherited: 0x28)
struct UMovieSceneCompiledData : UObject {
	struct FMovieSceneEvaluationTemplate EvaluationTemplate; // 0x28(0x160)
	struct FMovieSceneSequenceHierarchy Hierarchy; // 0x188(0x118)
	struct FMovieSceneEntityComponentField EntityComponentField; // 0x2a0(0xf0)
	struct FMovieSceneEvaluationField TrackTemplateField; // 0x390(0x30)
	struct TArray<struct FFrameTime> DeterminismFences; // 0x3c0(0x10)
	struct FGuid CompiledSignature; // 0x3d0(0x10)
	struct FGuid CompilerVersion; // 0x3e0(0x10)
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask; // 0x3f0(0x01)
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask; // 0x3f1(0x01)
	enum class EMovieSceneSequenceFlags AccumulatedFlags; // 0x3f2(0x01)
	char pad_3F3[0x5]; // 0x3f3(0x05)
};

// Class MovieScene.MovieSceneCompiledDataManager
// Size: 0x230 (Inherited: 0x28)
struct UMovieSceneCompiledDataManager : UObject {
	char pad_28[0xb0]; // 0x28(0xb0)
	struct TMap<int32_t, struct FMovieSceneSequenceHierarchy> Hierarchies; // 0xd8(0x50)
	struct TMap<int32_t, struct FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128(0x50)
	struct TMap<int32_t, struct FMovieSceneEvaluationField> TrackTemplateFields; // 0x178(0x50)
	struct TMap<int32_t, struct FMovieSceneEntityComponentField> EntityComponentFields; // 0x1c8(0x50)
	char pad_218[0x18]; // 0x218(0x18)
};

// Class MovieScene.MovieSceneFloatDecomposer
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneFloatDecomposer : UInterface {
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneBuiltInEasingFunction : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class EMovieSceneBuiltInEasing Type; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneEasingExternalCurve : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UCurveFloat* Curve; // 0x30(0x08)
};

// Class MovieScene.MovieSceneEasingFunction
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneEasingFunction : UInterface {

	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate // (Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
};

// Class MovieScene.MovieSceneEntitySystemLinker
// Size: 0x4f0 (Inherited: 0x28)
struct UMovieSceneEntitySystemLinker : UObject {
	char pad_28[0x270]; // 0x28(0x270)
	struct FMovieSceneEntitySystemGraph SystemGraph; // 0x298(0x138)
	char pad_3D0[0x120]; // 0x3d0(0x120)
};

// Class MovieScene.MovieSceneEvalTimeSystem
// Size: 0x50 (Inherited: 0x40)
struct UMovieSceneEvalTimeSystem : UMovieSceneEntitySystem {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class MovieScene.MovieSceneEvaluationHookSystem
// Size: 0x90 (Inherited: 0x40)
struct UMovieSceneEvaluationHookSystem : UMovieSceneEntitySystem {
	struct TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance; // 0x40(0x50)
};

// Class MovieScene.MovieSceneFolder
// Size: 0x70 (Inherited: 0x28)
struct UMovieSceneFolder : UObject {
	struct FName FolderName; // 0x28(0x08)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x40(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class MovieScene.MovieSceneHookSection
// Size: 0x100 (Inherited: 0xe8)
struct UMovieSceneHookSection : UMovieSceneSection {
	char pad_E8[0x10]; // 0xe8(0x10)
	char bRequiresRangedHook : 1; // 0xf8(0x01)
	char bRequiresTriggerHooks : 1; // 0xf8(0x01)
	char pad_F8_2 : 6; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class MovieScene.MovieSceneKeyProxy
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneKeyProxy : UInterface {
};

// Class MovieScene.MovieSceneMasterInstantiatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneMasterInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieScenePreAnimatedStateSystemInterface : UInterface {
};

// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneCachePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x20]; // 0x40(0x20)
};

// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// Size: 0x50 (Inherited: 0x40)
struct UMovieSceneRestorePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class MovieScene.MovieSceneSequenceActor
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneSequenceActor : UInterface {
};

// Class MovieScene.MovieSceneSequenceTickManager
// Size: 0xd0 (Inherited: 0x28)
struct UMovieSceneSequenceTickManager : UObject {
	struct TArray<struct FMovieSceneSequenceActorPointers> SequenceActors; // 0x28(0x10)
	struct UMovieSceneEntitySystemLinker* Linker; // 0x38(0x08)
	char pad_40[0x90]; // 0x40(0x90)
};

// Class MovieScene.MovieSceneSpawnablesSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneSpawnablesSystem : UMovieSceneEntitySystem {
};

// Class MovieScene.MovieSceneSpawnSection
// Size: 0x188 (Inherited: 0x180)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection {
	char pad_180[0x8]; // 0x180(0x08)
};

// Class MovieScene.MovieSceneSpawnTrack
// Size: 0xb0 (Inherited: 0x90)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
	struct FGuid ObjectGuid; // 0xa0(0x10)
};

// Class MovieScene.TestMovieSceneTrack
// Size: 0xb0 (Inherited: 0x90)
struct UTestMovieSceneTrack : UMovieSceneTrack {
	char pad_90[0x8]; // 0x90(0x08)
	bool bHighPassFilter; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0xa0(0x10)
};

// Class MovieScene.TestMovieSceneSection
// Size: 0xe8 (Inherited: 0xe8)
struct UTestMovieSceneSection : UMovieSceneSection {
};

// Class MovieScene.TestMovieSceneSequence
// Size: 0x68 (Inherited: 0x60)
struct UTestMovieSceneSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x60(0x08)
};

// Class MovieScene.TestMovieSceneSubTrack
// Size: 0xb0 (Inherited: 0xa0)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0xa0(0x10)
};

// Class MovieScene.TestMovieSceneSubSection
// Size: 0x168 (Inherited: 0x168)
struct UTestMovieSceneSubSection : UMovieSceneSubSection {
};

// Class MovieScene.TestMovieSceneEvalHookTrack
// Size: 0xa0 (Inherited: 0x90)
struct UTestMovieSceneEvalHookTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x90(0x10)
};

// Class MovieScene.TestMovieSceneEvalHookSection
// Size: 0x118 (Inherited: 0x100)
struct UTestMovieSceneEvalHookSection : UMovieSceneHookSection {
	char pad_100[0x18]; // 0x100(0x18)
};

// Class MovieScene.MovieSceneTrackInstance
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneTrackInstance : UObject {
	struct UObject* AnimatedObject; // 0x28(0x08)
	bool bIsMasterTrackInstance; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UMovieSceneEntitySystemLinker* Linker; // 0x38(0x08)
	struct TArray<struct FMovieSceneTrackInstanceInput> Inputs; // 0x40(0x10)
};

// Class MovieScene.MovieSceneTrackInstanceInstantiator
// Size: 0xf0 (Inherited: 0x40)
struct UMovieSceneTrackInstanceInstantiator : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0xb0]; // 0x40(0xb0)
};

// Class MovieScene.MovieSceneTrackInstanceSystem
// Size: 0x48 (Inherited: 0x40)
struct UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem {
	struct UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40(0x08)
};

