// Enum AIPathScheduler.EHoboType
enum class EHoboType : uint8 {
	AnyType = 0,
	DarkWizards = 1,
	Ghosts = 2,
	Students = 3,
	TownsPeople = 4,
	HouseElf = 5,
	Authority = 6,
	Worker = 7,
	Child = 8,
	YoungStudent = 9,
	AzkabanPrisoner = 10,
	Custom = 11,
	EHoboType_MAX = 12
};

// Enum AIPathScheduler.EHouseAndGender
enum class EHouseAndGender : uint8 {
	Any = 0,
	Male = 1,
	Female = 2,
	Gryffindor = 3,
	Hufflepuff = 4,
	Ravenclaw = 5,
	Slytherin = 6,
	EHouseAndGender_MAX = 7
};

// Enum AIPathScheduler.ETagType
enum class ETagType : uint8 {
	TagNone = 0,
	TagBranch = 1,
	TagStation = 2,
	ETagType_MAX = 3
};

// Enum AIPathScheduler.EBehaviorState
enum class EBehaviorState : uint8 {
	Simulated = 0,
	Restarting = 1,
	Alive = 2,
	Reacting_MoveToStation = 3,
	Reacting_MoveToSpline = 4,
	Reacting = 5,
	Dormant = 6,
	Paused = 7,
	WalkToStation = 8,
	WalkToSpline = 9,
	RefreshSplineData = 10,
	Spawning = 11,
	Destroyed = 12,
	RenderShutdown = 13,
	FormGroup = 14,
	Transferred = 15,
	EBehaviorState_MAX = 16
};

// Enum AIPathScheduler.ETrafficFlow
enum class ETrafficFlow : uint8 {
	Forward = 0,
	Backwards = 1,
	Bidirectional = 2,
	Blocked = 3,
	Random = 4,
	ETrafficFlow_MAX = 5
};

// ScriptStruct AIPathScheduler.PathScheduleData
// Size: 0x30 (Inherited: 0x00)
struct FPathScheduleData {
	int32_t StartTime; // 0x00(0x04)
	char DaysMask; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t SpawnDensity; // 0x08(0x04)
	char HouseAndGender; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	uint32_t HoboType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FTypeWeight> Weights; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct AIPathScheduler.TypeWeight
// Size: 0x08 (Inherited: 0x00)
struct FTypeWeight {
	int32_t Type; // 0x00(0x04)
	float weight; // 0x04(0x04)
};

// ScriptStruct AIPathScheduler.BaseTagCommand
// Size: 0x01 (Inherited: 0x00)
struct FBaseTagCommand {
	enum class ETagType TagCommandType; // 0x00(0x01)
};

// ScriptStruct AIPathScheduler.BranchTagCommand
// Size: 0x20 (Inherited: 0x01)
struct FBranchTagCommand : FBaseTagCommand {
	char pad_1[0x7]; // 0x01(0x07)
	int64_t UUID_BranchTo; // 0x08(0x08)
	int32_t FromPathPointIndex; // 0x10(0x04)
	int32_t ToPathPointIndex; // 0x14(0x04)
	float Probability; // 0x18(0x04)
	enum class ETrafficFlow ForwardToBranchDirection; // 0x1c(0x01)
	enum class ETrafficFlow BackwardToBranchDirection; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct AIPathScheduler.StationTagCommand
// Size: 0x20 (Inherited: 0x01)
struct FStationTagCommand : FBaseTagCommand {
	char pad_1[0x7]; // 0x01(0x07)
	int64_t UUID_AIPath; // 0x08(0x08)
	int32_t FromPathPointIndex; // 0x10(0x04)
	float Probability; // 0x14(0x04)
	struct FName SiteLocation; // 0x18(0x08)
};

