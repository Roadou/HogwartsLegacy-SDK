// Enum Mastermind.ETestSuccess
enum class ETestSuccess : uint8 {
	Default = 0,
	Success = 1,
	Failure = 2,
	ETestSuccess_MAX = 3
};

// Enum Mastermind.EMastermindMessageType
enum class EMastermindMessageType : uint8 {
	TestResult = 0,
	StepResult = 1,
	ProgressUpdate = 2,
	EMastermindMessageType_MAX = 3
};

// ScriptStruct Mastermind.MastermindMessage
// Size: 0x08 (Inherited: 0x00)
struct FMastermindMessage {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Mastermind.MastermindCommandResult
// Size: 0x40 (Inherited: 0x08)
struct FMastermindCommandResult : FMastermindMessage {
	bool bIsSuccess; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString ErrorMessage; // 0x10(0x10)
	enum class ETestSuccess TestSuccess; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UMastermindJsonObject* Data; // 0x28(0x08)
	struct TArray<struct FString> Artifacts; // 0x30(0x10)
};

// ScriptStruct Mastermind.MastermindProgressUpdate
// Size: 0x18 (Inherited: 0x08)
struct FMastermindProgressUpdate : FMastermindMessage {
	struct FString Message; // 0x08(0x10)
};

// ScriptStruct Mastermind.MastermindTestResultMessage
// Size: 0x18 (Inherited: 0x08)
struct FMastermindTestResultMessage : FMastermindMessage {
	struct TArray<struct FMastermindTestResult> TestResults; // 0x08(0x10)
};

// ScriptStruct Mastermind.MastermindTestResult
// Size: 0x20 (Inherited: 0x00)
struct FMastermindTestResult {
	bool bIsSuccess; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString TestName; // 0x08(0x10)
	struct FDateTime Timestamp; // 0x18(0x08)
};

