// Class SequencerScripting.MovieSceneBindingExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneBindingExtensions : UBlueprintFunctionLibrary {

	void SetParent(struct FSequencerBindingProxy& InBinding, struct FSequencerBindingProxy& InParentBinding); // Function SequencerScripting.MovieSceneBindingExtensions.SetParent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c9f30
	void SetName(struct FSequencerBindingProxy& InBinding, struct FString InName); // Function SequencerScripting.MovieSceneBindingExtensions.SetName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c9d80
	void SetDisplayName(struct FSequencerBindingProxy& InBinding, struct FText& InDisplayName); // Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c9ab0
	void RemoveTrack(struct FSequencerBindingProxy& InBinding, struct UMovieSceneTrack* TrackToRemove); // Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c96a0
	void Remove(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.Remove // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c91f0
	void MoveBindingContents(struct FSequencerBindingProxy& SourceBindingId, struct FSequencerBindingProxy& DestinationBindingId); // Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c9100
	bool IsValid(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.IsValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x22c9060
	struct TArray<struct UMovieSceneTrack*> GetTracks(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetTracks // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c8b00
	struct UObject* GetPossessedObjectClass(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c8860
	struct FSequencerBindingProxy GetParent(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetParent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c87b0
	struct UObject* GetObjectTemplate(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c8710
	struct FString GetName(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c8540
	struct FGuid GetId(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetId // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22c8410
	struct FText GetDisplayName(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c81f0
	struct TArray<struct FSequencerBindingProxy> GetChildPossessables(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c7f90
	struct TArray<struct UMovieSceneTrack*> FindTracksByType(struct FSequencerBindingProxy& InBinding, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c7bf0
	struct TArray<struct UMovieSceneTrack*> FindTracksByExactType(struct FSequencerBindingProxy& InBinding, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c7ac0
	struct UMovieSceneTrack* AddTrack(struct FSequencerBindingProxy& InBinding, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.AddTrack // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22c7810
};

// Class SequencerScripting.MovieSceneEventTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneEventTrackExtensions : UBlueprintFunctionLibrary {

	struct UMovieSceneEventTriggerSection* AddEventTriggerSection(struct UMovieSceneEventTrack* InTrack); // Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c71d0
	struct UMovieSceneEventRepeaterSection* AddEventRepeaterSection(struct UMovieSceneEventTrack* InTrack); // Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c7140
};

// Class SequencerScripting.MovieSceneFolderExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneFolderExtensions : UBlueprintFunctionLibrary {

	bool SetFolderName(struct UMovieSceneFolder* Folder, struct FName InFolderName); // Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c9cb0
	bool SetFolderColor(struct UMovieSceneFolder* Folder, struct FColor InFolderColor); // Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x22c9be0
	bool RemoveChildObjectBinding(struct UMovieSceneFolder* Folder, struct FSequencerBindingProxy InObjectBinding); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c9420
	bool RemoveChildMasterTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InMasterTrack); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c9350
	bool RemoveChildFolder(struct UMovieSceneFolder* TargetFolder, struct UMovieSceneFolder* FolderToRemove); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c9280
	struct FName GetFolderName(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x22c8380
	struct FColor GetFolderColor(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x22c82f0
	struct TArray<struct FSequencerBindingProxy> GetChildObjectBindings(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x22c7ec0
	struct TArray<struct UMovieSceneTrack*> GetChildMasterTracks(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x22c7df0
	struct TArray<struct UMovieSceneFolder*> GetChildFolders(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x22c7d20
	bool AddChildObjectBinding(struct UMovieSceneFolder* Folder, struct FSequencerBindingProxy InObjectBinding); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c7050
	bool AddChildMasterTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InMasterTrack); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c6f80
	bool AddChildFolder(struct UMovieSceneFolder* TargetFolder, struct UMovieSceneFolder* FolderToAdd); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c6eb0
};

// Class SequencerScripting.MovieScenePropertyTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieScenePropertyTrackExtensions : UBlueprintFunctionLibrary {

	void SetPropertyNameAndPath(struct UMovieScenePropertyTrack* Track, struct FName& InPropertyName, struct FString InPropertyPath); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22ca020
	void SetObjectPropertyClass(struct UMovieSceneObjectPropertyTrack* Track, struct UObject* PropertyClass); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c9e70
	struct FName GetUniqueTrackName(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c8be0
	struct FString GetPropertyPath(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c8990
	struct FName GetPropertyName(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c8900
	struct UObject* GetObjectPropertyClass(struct UMovieSceneObjectPropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22c8680
};

// Class SequencerScripting.MovieSceneScriptingKey
// Size: 0x40 (Inherited: 0x28)
struct UMovieSceneScriptingKey : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingActorReferenceKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(struct FMovieSceneObjectBindingID& InNewValue); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x22ca390
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22ca150
	struct FMovieSceneObjectBindingID GetValue(); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8c70
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8a60
};

// Class SequencerScripting.MovieSceneScriptingChannel
// Size: 0x30 (Inherited: 0x28)
struct UMovieSceneScriptingChannel : UObject {
	struct FName ChannelName; // 0x28(0x08)
};

// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingActorReferenceChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetDefault(struct FMovieSceneObjectBindingID InDefaultValue); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22c9780
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x22c9610
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22c9510
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8ee0
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c84c0
	struct FMovieSceneObjectBindingID GetDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8070
	struct UMovieSceneScriptingActorReferenceKey* AddKey(struct FFrameNumber InTime, struct FMovieSceneObjectBindingID NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x22c7260
};

// Class SequencerScripting.MovieSceneScriptingBoolKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingBoolKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(bool InNewValue); // Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x22ca4f0
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22ca150
	bool GetValue(); // Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8d60
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8a60
};

// Class SequencerScripting.MovieSceneScriptingBoolChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingBoolChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetDefault(bool InDefaultValue); // Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22c98c0
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x22c9610
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22c9570
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8fb0
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8620
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c84c0
	bool GetDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8110
	struct TArray<bool> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c7940
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c7900
	struct UMovieSceneScriptingBoolKey* AddKey(struct FFrameNumber& InTime, bool NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22c7430
};

// Class SequencerScripting.MovieSceneScriptingByteKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingByteKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(char InNewValue); // Function SequencerScripting.MovieSceneScriptingByteKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x22ca5f0
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingByteKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22ca150
	char GetValue(); // Function SequencerScripting.MovieSceneScriptingByteKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8e20
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingByteKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8a60
};

// Class SequencerScripting.MovieSceneScriptingByteChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingByteChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetDefault(char InDefaultValue); // Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22c99c0
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x22c9610
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22c9570
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8fb0
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c84c0
	char GetDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8110
	struct UMovieSceneScriptingByteKey* AddKey(struct FFrameNumber& InTime, char NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation); // Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22c7620
};

// Class SequencerScripting.MovieSceneScriptingEventKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingEventKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(struct FMovieSceneEvent& InNewValue); // Function SequencerScripting.MovieSceneScriptingEventKey.SetValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x22d26d0
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22ca150
	struct FMovieSceneEvent GetValue(); // Function SequencerScripting.MovieSceneScriptingEventKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0c40
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8a60
};

// Class SequencerScripting.MovieSceneScriptingEventChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingEventChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x22c9610
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c84c0
	struct UMovieSceneScriptingEventKey* AddKey(struct FFrameNumber& InTime, struct FMovieSceneEvent NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22cf510
};

// Class SequencerScripting.MovieSceneScriptingFloatKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingFloatKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x22d2800
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22ca150
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode // (Final|Native|Public|BlueprintCallable) // @ game+0x22d2600
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode // (Final|Native|Public|BlueprintCallable) // @ game+0x22d2530
	void SetLeaveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x22d1eb0
	void SetLeaveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x22d1dd0
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode // (Final|Native|Public|BlueprintCallable) // @ game+0x22d1d00
	void SetArriveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x22d1590
	void SetArriveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x22d14b0
	float GetValue(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0d20
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8a60
	enum class ERichCurveTangentWeightMode GetTangentWeightMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0c00
	enum class ERichCurveTangentMode GetTangentMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0bc0
	float GetLeaveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0840
	float GetLeaveTangent(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0800
	enum class ERichCurveInterpMode GetInterpolationMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d07c0
	float GetArriveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0260
	float GetArriveTangent(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0220
};

// Class SequencerScripting.MovieSceneScriptingFloatChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingFloatChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x22d2040
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x22d1f90
	void SetDefault(float InDefaultValue); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22d1670
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x22c9610
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22d12d0
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0fa0
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0a40
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d09e0
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0880
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c84c0
	float GetDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0370
	struct TArray<float> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22cff90
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22cff50
	struct UMovieSceneScriptingFloatKey* AddKey(struct FFrameNumber& InTime, float NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22cf7c0
};

// Class SequencerScripting.MovieSceneScriptingIntegerKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingIntegerKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(int32_t InNewValue); // Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x22d28e0
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22ca150
	int32_t GetValue(); // Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0d60
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8a60
};

// Class SequencerScripting.MovieSceneScriptingIntegerChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingIntegerChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetDefault(int32_t InDefaultValue); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22d1770
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x22c9610
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22d1370
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d1030
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c84c0
	int32_t GetDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0410
	struct UMovieSceneScriptingIntegerKey* AddKey(struct FFrameNumber& InTime, int32_t NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22cf980
};

// Class SequencerScripting.MovieSceneScriptingObjectPathKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingObjectPathKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(struct UObject* InNewValue); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x22d29e0
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22ca150
	struct UObject* GetValue(); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0e20
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8a60
};

// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingObjectPathChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetDefault(struct UObject* InDefaultValue); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22d1860
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x22c9610
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22c9510
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d10c0
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c84c0
	struct UObject* GetDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d04b0
	struct UMovieSceneScriptingObjectPathKey* AddKey(struct FFrameNumber InTime, struct UObject* NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x22cfb70
};

// Class SequencerScripting.MovieSceneScriptingStringKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingStringKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(struct FString InNewValue); // Function SequencerScripting.MovieSceneScriptingStringKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x22d2b30
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22ca150
	struct FString GetValue(); // Function SequencerScripting.MovieSceneScriptingStringKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d0e90
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c8a60
};

// Class SequencerScripting.MovieSceneScriptingStringChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingStringChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetDefault(struct FString InDefaultValue); // Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22d1920
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x22c9610
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x22d1410
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d1100
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22c84c0
	struct FString GetDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22d04e0
	struct UMovieSceneScriptingStringKey* AddKey(struct FFrameNumber& InTime, struct FString NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22cfd40
};

// Class SequencerScripting.MovieSceneSectionExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneSectionExtensions : UBlueprintFunctionLibrary {

	void SetStartFrameSeconds(struct UMovieSceneSection* Section, float StartTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d2470
	void SetStartFrameBounded(struct UMovieSceneSection* Section, bool bIsBounded); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d23b0
	void SetStartFrame(struct UMovieSceneSection* Section, int32_t StartFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d22f0
	void SetRangeSeconds(struct UMovieSceneSection* Section, float StartTime, float EndTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d21f0
	void SetRange(struct UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d20f0
	void SetEndFrameSeconds(struct UMovieSceneSection* Section, float EndTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d1c40
	void SetEndFrameBounded(struct UMovieSceneSection* Section, bool bIsBounded); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d1b80
	void SetEndFrame(struct UMovieSceneSection* Section, int32_t EndFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d1ac0
	bool HasStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d1240
	bool HasEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d11b0
	float GetStartFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d0b30
	int32_t GetStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d0aa0
	int32_t GetParentSequenceFrame(struct UMovieSceneSubSection* Section, int32_t InFrame, struct UMovieSceneSequence* ParentSequence); // Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d08e0
	float GetEndFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d0730
	int32_t GetEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d06a0
	struct TArray<struct UMovieSceneScriptingChannel*> GetChannels(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetChannels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d02a0
	struct TArray<struct UMovieSceneScriptingChannel*> FindChannelsByType(struct UMovieSceneSection* Section, struct UMovieSceneScriptingChannel* ChannelType); // Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d0110
};

// Class SequencerScripting.MovieSceneSequenceExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneSequenceExtensions : UBlueprintFunctionLibrary {

	void SortMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d71c0
	void SetWorkRangeStart(struct UMovieSceneSequence* InSequence, float StartTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d7100
	void SetWorkRangeEnd(struct UMovieSceneSequence* InSequence, float EndTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d7100
	void SetViewRangeStart(struct UMovieSceneSequence* InSequence, float StartTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d7100
	void SetViewRangeEnd(struct UMovieSceneSequence* InSequence, float EndTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d7100
	void SetTickResolutionDirectly(struct UMovieSceneSequence* Sequence, struct FFrameRate TickResolution); // Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d7030
	void SetTickResolution(struct UMovieSceneSequence* Sequence, struct FFrameRate TickResolution); // Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6f60
	void SetReadOnly(struct UMovieSceneSequence* Sequence, bool bInReadOnly); // Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6d20
	void SetPlaybackStartSeconds(struct UMovieSceneSequence* Sequence, float StartTime); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6c60
	void SetPlaybackStart(struct UMovieSceneSequence* Sequence, int32_t StartFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6ba0
	void SetPlaybackEndSeconds(struct UMovieSceneSequence* Sequence, float EndTime); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6ae0
	void SetPlaybackEnd(struct UMovieSceneSequence* Sequence, int32_t EndFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6a20
	void SetMarkedFrame(struct UMovieSceneSequence* Sequence, int32_t InMarkIndex, struct FFrameNumber InFrameNumber); // Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x22d6860
	void SetEvaluationType(struct UMovieSceneSequence* InSequence, enum class EMovieSceneEvaluationType InEvaluationType); // Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d67a0
	void SetDisplayRate(struct UMovieSceneSequence* Sequence, struct FFrameRate DisplayRate); // Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d66d0
	void SetClockSource(struct UMovieSceneSequence* InSequence, enum class EUpdateClockSource InClockSource); // Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6450
	struct FSequencerBindingProxy ResolveBindingID(struct UMovieSceneSequence* MasterSequence, struct FMovieSceneObjectBindingID InObjectBindingID); // Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6330
	bool RemoveMasterTrack(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* MasterTrack); // Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d61a0
	struct FSequencerScriptingRange MakeRangeSeconds(struct UMovieSceneSequence* Sequence, float StartTime, float Duration); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6090
	struct FSequencerScriptingRange MakeRange(struct UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d5f80
	struct FMovieSceneObjectBindingID MakeBindingID(struct UMovieSceneSequence* MasterSequence, struct FSequencerBindingProxy& InBinding, enum class EMovieSceneObjectBindingSpace Space); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d5e40
	struct TArray<struct UObject*> LocateBoundObjects(struct UMovieSceneSequence* Sequence, struct FSequencerBindingProxy& InBinding, struct UObject* Context); // Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d5cd0
	bool IsReadOnly(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f044a0
	float GetWorkRangeStart(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x22d5c40
	float GetWorkRangeEnd(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x22d5c40
	float GetViewRangeStart(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x22d5c40
	float GetViewRangeEnd(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x22d5c40
	struct FTimecode GetTimecodeSource(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d5ba0
	struct FFrameRate GetTickResolution(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d5b10
	struct TArray<struct FSequencerBindingProxy> GetSpawnables(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d5a40
	struct TArray<struct UMovieSceneFolder*> GetRootFoldersInSequence(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x22d5780
	struct TArray<struct FSequencerBindingProxy> GetPossessables(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d56b0
	struct FMovieSceneObjectBindingID GetPortableBindingID(struct UMovieSceneSequence* MasterSequence, struct UMovieSceneSequence* DestinationSequence, struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d5570
	float GetPlaybackStartSeconds(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d54e0
	int32_t GetPlaybackStart(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d5450
	struct FSequencerScriptingRange GetPlaybackRange(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d53b0
	float GetPlaybackEndSeconds(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d5320
	int32_t GetPlaybackEnd(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d5290
	struct UMovieScene* GetMovieScene(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d5170
	struct TArray<struct UMovieSceneTrack*> GetMasterTracks(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d50a0
	struct TArray<struct FMovieSceneMarkedFrame> GetMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d4f80
	enum class EMovieSceneEvaluationType GetEvaluationType(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x22d4ef0
	struct FFrameRate GetDisplayRate(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d4e60
	enum class EUpdateClockSource GetClockSource(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x22d4ce0
	struct TArray<struct FSequencerBindingProxy> GetBindings(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d4c10
	struct FMovieSceneObjectBindingID GetBindingID(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d4b60
	int32_t FindNextMarkedFrame(struct UMovieSceneSequence* Sequence, struct FFrameNumber InFrameNumber, bool bForward); // Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x22d4a60
	struct TArray<struct UMovieSceneTrack*> FindMasterTracksByType(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d4950
	struct TArray<struct UMovieSceneTrack*> FindMasterTracksByExactType(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d4840
	int32_t FindMarkedFrameByLabel(struct UMovieSceneSequence* Sequence, struct FString InLabel); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d4760
	int32_t FindMarkedFrameByFrameNumber(struct UMovieSceneSequence* Sequence, struct FFrameNumber InFrameNumber); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x22d4690
	struct FSequencerBindingProxy FindBindingByName(struct UMovieSceneSequence* Sequence, struct FString Name); // Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d4550
	struct FSequencerBindingProxy FindBindingById(struct UMovieSceneSequence* Sequence, struct FGuid BindingID); // Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x22d4460
	void DeleteMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d43e0
	void DeleteMarkedFrame(struct UMovieSceneSequence* Sequence, int32_t DeleteIndex); // Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d4320
	struct FSequencerBindingProxy AddSpawnableFromInstance(struct UMovieSceneSequence* Sequence, struct UObject* ObjectToSpawn); // Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d4240
	struct FSequencerBindingProxy AddSpawnableFromClass(struct UMovieSceneSequence* Sequence, struct UObject* ClassToSpawn); // Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d4240
	struct UMovieSceneFolder* AddRootFolderToSequence(struct UMovieSceneSequence* Sequence, struct FString NewFolderName); // Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d4080
	struct FSequencerBindingProxy AddPossessable(struct UMovieSceneSequence* Sequence, struct UObject* ObjectToPossess); // Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d3fa0
	struct UMovieSceneTrack* AddMasterTrack(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d3ed0
	int32_t AddMarkedFrame(struct UMovieSceneSequence* Sequence, struct FMovieSceneMarkedFrame& InMarkedFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d3dd0
};

// Class SequencerScripting.MovieSceneTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneTrackExtensions : UBlueprintFunctionLibrary {

	void SetSortingOrder(struct UMovieSceneTrack* Track, int32_t SortingOrder); // Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6ea0
	void SetSectionToKey(struct UMovieSceneTrack* Track, struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6de0
	void SetDisplayName(struct UMovieSceneTrack* Track, struct FText& InName); // Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d65d0
	void SetColorTint(struct UMovieSceneTrack* Track, struct FColor& ColorTint); // Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x22d6510
	void RemoveSection(struct UMovieSceneTrack* Track, struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6270
	int32_t GetSortingOrder(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d59b0
	struct UMovieSceneSection* GetSectionToKey(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d5850
	struct TArray<struct UMovieSceneSection*> GetSections(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSections // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d58e0
	struct FText GetDisplayName(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d4d70
	struct FColor GetColorTint(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x22c82f0
	struct UMovieSceneSection* AddSection(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.AddSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d41b0
};

// Class SequencerScripting.MovieSceneVectorTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneVectorTrackExtensions : UBlueprintFunctionLibrary {

	void SetNumChannelsUsed(struct UMovieSceneVectorTrack* Track, int32_t InNumChannelsUsed); // Function SequencerScripting.MovieSceneVectorTrackExtensions.SetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d6960
	int32_t GetNumChannelsUsed(struct UMovieSceneVectorTrack* Track); // Function SequencerScripting.MovieSceneVectorTrackExtensions.GetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22d5200
};

// Class SequencerScripting.SequencerScriptingRangeExtensions
// Size: 0x28 (Inherited: 0x28)
struct USequencerScriptingRangeExtensions : UBlueprintFunctionLibrary {

	void SetStartSeconds(struct FSequencerScriptingRange& Range, float Start); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d7fe0
	void SetStartFrame(struct FSequencerScriptingRange& Range, int32_t Start); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d7f00
	void SetEndSeconds(struct FSequencerScriptingRange& Range, float End); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d7e10
	void SetEndFrame(struct FSequencerScriptingRange& Range, int32_t End); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d7d30
	void RemoveStart(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d7ca0
	void RemoveEnd(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d7c10
	bool HasStart(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d7b70
	bool HasEnd(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d7ad0
	float GetStartSeconds(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d7a30
	int32_t GetStartFrame(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d7990
	float GetEndSeconds(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d78f0
	int32_t GetEndFrame(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22d7850
};

