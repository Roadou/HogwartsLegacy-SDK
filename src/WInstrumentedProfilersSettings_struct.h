// Enum WInstrumentedProfilersSettings.EWInstrumentedProfilerAutomatedResumeSettings
enum class EWInstrumentedProfilerAutomatedResumeSettings : uint8 {
	Never = 0,
	FirstFrame = 1,
	Start = 2,
	StartProgram = 3,
	LoadingPhasePostConfigInit = 4,
	LoadingPhasePreDefault = 5,
	LoadingPhaseDefault = 6,
	LoadingPhasePostDefault = 7,
	LoadingPhasePreLoadingScreen = 8,
	LoadingPhasePostEngineInit = 9,
	EWInstrumentedProfilerAutomatedResumeSettings_MAX = 10
};

// Enum WInstrumentedProfilersSettings.EWInstrumentedProfilerAvailabilitySettings
enum class EWInstrumentedProfilerAvailabilitySettings : uint8 {
	NotSelected = 0,
	Disabled = 1,
	Minimal = 2,
	Standard = 3,
	Detailed = 4,
	Debug = 5,
	EWInstrumentedProfilerAvailabilitySettings_MAX = 6
};

// Enum WInstrumentedProfilersSettings.EWInstrumentedProfilerCategorySettings
enum class EWInstrumentedProfilerCategorySettings : uint8 {
	NotSelected = 0,
	Always = 1,
	Able = 2,
	Actor = 3,
	AI = 4,
	Anim = 5,
	AsyncTask = 6,
	Audio = 7,
	AvaAnimation = 8,
	Blueprint = 9,
	Character = 10,
	Collision = 11,
	CoreEngine = 12,
	FileIO = 13,
	Gameplay = 14,
	GC = 15,
	IK = 16,
	ImGui = 17,
	Missions = 18,
	Modules = 19,
	MovementComponent = 20,
	Navigation = 21,
	Network = 22,
	Physics = 23,
	Player = 24,
	PSO = 25,
	Rendering = 26,
	Stall = 27,
	Streaming = 28,
	TaskGraph = 29,
	TickFunction = 30,
	UI = 31,
	UnrealLogs = 32,
	UnrealStats = 33,
	VFX = 34,
	EWInstrumentedProfilerCategorySettings_MAX = 35
};

// ScriptStruct WInstrumentedProfilersSettings.WInstrumentedProfilerCategoryAvailability
// Size: 0x08 (Inherited: 0x00)
struct FWInstrumentedProfilerCategoryAvailability {
	enum class EWInstrumentedProfilerCategorySettings Category; // 0x00(0x04)
	enum class EWInstrumentedProfilerAvailabilitySettings Availability; // 0x04(0x04)
};

