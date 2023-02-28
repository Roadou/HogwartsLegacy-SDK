// Enum SequencerScripting.ESequenceTimeUnit
enum class ESequenceTimeUnit : uint8 {
	DisplayRate = 0,
	TickResolution = 1,
	ESequenceTimeUnit_MAX = 2
};

// ScriptStruct SequencerScripting.SequencerBindingProxy
// Size: 0x18 (Inherited: 0x00)
struct FSequencerBindingProxy {
	struct FGuid BindingID; // 0x00(0x10)
	struct UMovieSceneSequence* Sequence; // 0x10(0x08)
};

// ScriptStruct SequencerScripting.SequencerScriptingRange
// Size: 0x14 (Inherited: 0x00)
struct FSequencerScriptingRange {
	char bHasStart : 1; // 0x00(0x01)
	char bHasEnd : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t InclusiveStart; // 0x04(0x04)
	int32_t ExclusiveEnd; // 0x08(0x04)
	struct FFrameRate InternalRate; // 0x0c(0x08)
};

