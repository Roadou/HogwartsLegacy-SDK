// Enum GameScheduler.EEventFrequency
enum class EEventFrequency : uint8 {
	EVENT_FREQ_CONTINUOUS = 0,
	EVENT_FREQ_ONCE = 1,
	EVENT_FREQ_MAX = 2
};

// Enum GameScheduler.EEventType
enum class EEventType : uint8 {
	EVENT_TYPE_HOURLY = 0,
	EVENT_TYPE_MINUTELY = 1,
	EVENT_TYPE_TIME = 2,
	EVENT_TYPE_DELTA_TIME = 3,
	EVENT_TYPE_MAX = 4
};

// Enum GameScheduler.EDaysOfTheWeek
enum class EDaysOfTheWeek : uint8 {
	MONDAY = 0,
	TUESDAY = 1,
	WEDNESDAY = 2,
	THURSDAY = 3,
	FRIDAY = 4,
	SATURDAY = 5,
	SUNDAY = 6,
	ALL_DAYS = 7,
	EDaysOfTheWeek_MAX = 8
};

// Enum GameScheduler.ESchedulerMoonPhase
enum class ESchedulerMoonPhase : uint8 {
	MOONPHASE_NEWMOON = 0,
	MOONPHASE_WAXINGCRESCENT = 1,
	MOONPHASE_FIRSTQUARTER = 2,
	MOONPHASE_WAXINGGIBBOUS = 3,
	MOONPHASE_FULLMOON = 4,
	MOONPHASE_WANINGGIBBOUS = 5,
	MOONPHASE_LASTQUARTER = 6,
	MOONPHASE_WANINGCRESCENT = 7,
	MOONPHASE_MAX = 8
};

// Enum GameScheduler.ESchedulerTimeDateType
enum class ESchedulerTimeDateType : uint8 {
	SCHEDULER_TYPE_TIME = 0,
	SCHEDULER_TYPE_DATE = 1,
	SCHEDULER_TYPE_DAY = 2,
	SCHEDULER_TYPE_MONTH = 3,
	SCHEDULER_TYPE_TIME_AND_DATE = 4,
	SCHEDULER_TYPE_MAX = 5
};

// Enum GameScheduler.EDaysOfTheWeekBitmask
enum class EDaysOfTheWeekBitmask : uint8 {
	Monday = 0,
	Tuesday = 1,
	Wednesday = 2,
	Thursday = 3,
	Friday = 4,
	Saturday = 5,
	Sunday = 6,
	EveryDay = 7,
	EDaysOfTheWeekBitmask_MAX = 8
};

// Enum GameScheduler.EMonthsOfTheYear
enum class EMonthsOfTheYear : uint8 {
	January = 0,
	February = 1,
	March = 2,
	April = 3,
	May = 4,
	June = 5,
	July = 6,
	August = 7,
	September = 8,
	October = 9,
	November = 10,
	December = 11,
	AllMonths = 255,
	EMonthsOfTheYear_MAX = 256
};

// ScriptStruct GameScheduler.TimeEvent
// Size: 0x30 (Inherited: 0x00)
struct FTimeEvent {
	int32_t DayMask; // 0x00(0x04)
	float Hour; // 0x04(0x04)
	float Minute; // 0x08(0x04)
	float Second; // 0x0c(0x04)
	float DeltaTime; // 0x10(0x04)
	float Time24; // 0x14(0x04)
	struct FDateTime SimulatedTime; // 0x18(0x08)
	struct FDateTime EventTime; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct GameScheduler.EventDateTime
// Size: 0x40 (Inherited: 0x08)
struct FEventDateTime : FDateTime {
	int32_t Year; // 0x08(0x04)
	enum class EMonthsOfTheYear Month; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t Day; // 0x10(0x04)
	int32_t Hour; // 0x14(0x04)
	int32_t Minute; // 0x18(0x04)
	int32_t Second; // 0x1c(0x04)
	char pad_20[0x4]; // 0x20(0x04)
	float DeltaMonths; // 0x24(0x04)
	float DeltaDays; // 0x28(0x04)
	float DeltaHours; // 0x2c(0x04)
	float DeltaMinutes; // 0x30(0x04)
	float DeltaSeconds; // 0x34(0x04)
	char DaysMask; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct GameScheduler.RegisteredEvent
// Size: 0x48 (Inherited: 0x00)
struct FRegisteredEvent {
	char pad_0[0x48]; // 0x00(0x48)
};

