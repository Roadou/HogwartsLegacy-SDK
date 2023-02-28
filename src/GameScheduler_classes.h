// Class GameScheduler.Scheduler
// Size: 0x8b80 (Inherited: 0x28)
struct UScheduler : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FMulticastInlineDelegate OnInitiateEndOfDay; // 0x30(0x10)
	struct FMulticastInlineDelegate OnStartNewDay; // 0x40(0x10)
	struct FMulticastInlineDelegate OnStartOfFirstDay; // 0x50(0x10)
	char pad_60[0x8b20]; // 0x60(0x8b20)

	void StopTime(bool InStop, struct FName InLockName); // Function GameScheduler.Scheduler.StopTime // (Final|Native|Public|BlueprintCallable) // @ game+0x350bc20
	void StartNewDay(); // Function GameScheduler.Scheduler.StartNewDay // (Final|Native|Public|BlueprintCallable) // @ game+0x350bc00
	void SetSimulationTimeFactorOverride(float Factor); // Function GameScheduler.Scheduler.SetSimulationTimeFactorOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x350bb80
	void SetCurrentTime(int32_t InHours, int32_t InMinutes, int32_t InSeconds, int32_t Month, int32_t Day, int32_t Year); // Function GameScheduler.Scheduler.SetCurrentTime // (Final|Native|Public|BlueprintCallable) // @ game+0x350b9c0
	bool RemoveRegisteredEvent(int32_t InHandle, bool bInAssertIfNotFound); // Function GameScheduler.Scheduler.RemoveRegisteredEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x350b8f0
	int32_t RegisterNewTimeEventBP(struct FDelegate& InSchedulerCallbackDelegate, enum class EEventType InEventType, struct FEventDateTime InDate, enum class EEventFrequency InEventFrequency); // Function GameScheduler.Scheduler.RegisterNewTimeEventBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x350b720
	void Pause(bool bInPause); // Function GameScheduler.Scheduler.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x350b690
	void OnSaveGameLoaded(); // Function GameScheduler.Scheduler.OnSaveGameLoaded // (Final|Native|Public) // @ game+0x350b670
	void OnGameToBeSaved(); // Function GameScheduler.Scheduler.OnGameToBeSaved // (Final|Native|Public) // @ game+0x350b650
	bool IsNowInBetweenStringTimes(struct FString StartTimeString, struct FString EndTimeString); // Function GameScheduler.Scheduler.IsNowInBetweenStringTimes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350b560
	bool IsNight(); // Function GameScheduler.Scheduler.IsNight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x350b530
	bool IsDay(); // Function GameScheduler.Scheduler.IsDay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x350b500
	bool IsClockStopped(); // Function GameScheduler.Scheduler.IsClockStopped // (Final|Native|Public|BlueprintCallable) // @ game+0x350b4d0
	void InitiateEndOfDay(); // Function GameScheduler.Scheduler.InitiateEndOfDay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350b4b0
	void Hide(bool bInHide); // Function GameScheduler.Scheduler.Hide // (Final|Native|Public|BlueprintCallable) // @ game+0x350b420
	float GetTotalSeconds(); // Function GameScheduler.Scheduler.GetTotalSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x350b3f0
	int32_t GetTimeDelta(int32_t In24HourTimeA, int32_t In24HourTimeB); // Function GameScheduler.Scheduler.GetTimeDelta // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350b320
	int32_t GetStringTimeMinutes(struct FString TimeString); // Function GameScheduler.Scheduler.GetStringTimeMinutes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350b280
	float GetSimulationTimeFactorOverride(); // Function GameScheduler.Scheduler.GetSimulationTimeFactorOverride // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x326c890
	int32_t GetSimulatedYearBP(); // Function GameScheduler.Scheduler.GetSimulatedYearBP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350b250
	int32_t GetSimulatedTime24BP(); // Function GameScheduler.Scheduler.GetSimulatedTime24BP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350b200
	struct FDateTime GetSimulatedTime(); // Function GameScheduler.Scheduler.GetSimulatedTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x350b230
	float GetSimulatedSecondMultiplier(); // Function GameScheduler.Scheduler.GetSimulatedSecondMultiplier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x350b1d0
	int32_t GetSimulatedSecondBP(); // Function GameScheduler.Scheduler.GetSimulatedSecondBP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350b1a0
	int32_t GetSimulatedMonthBP(); // Function GameScheduler.Scheduler.GetSimulatedMonthBP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350b170
	int32_t GetSimulatedMinuteBP(); // Function GameScheduler.Scheduler.GetSimulatedMinuteBP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350b140
	int32_t GetSimulatedHourBP(); // Function GameScheduler.Scheduler.GetSimulatedHourBP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350b110
	int32_t GetSimulatedDayBP(); // Function GameScheduler.Scheduler.GetSimulatedDayBP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350b0e0
	struct FDateTime GetSimulateDateTimeBP(); // Function GameScheduler.Scheduler.GetSimulateDateTimeBP // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x350b0b0
	struct FString GetSimlatedTimeDateType(enum class ESchedulerTimeDateType InType); // Function GameScheduler.Scheduler.GetSimlatedTimeDateType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350afe0
	int32_t GetSecondOfTheDay(); // Function GameScheduler.Scheduler.GetSecondOfTheDay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x350afb0
	struct FDateTime GetNurtureTime(); // Function GameScheduler.Scheduler.GetNurtureTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x350af90
	enum class ESchedulerMoonPhase GetMoonPhaseBP(); // Function GameScheduler.Scheduler.GetMoonPhaseBP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350af60
	int32_t GetMonthOfTheYear(); // Function GameScheduler.Scheduler.GetMonthOfTheYear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x350af40
	int32_t GetMinuteOfTheDay(); // Function GameScheduler.Scheduler.GetMinuteOfTheDay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x350af10
	int32_t GetHourOfTheDay(); // Function GameScheduler.Scheduler.GetHourOfTheDay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x350aef0
	void GetHourAndMinutesFromString(struct FString TimeString, int32_t& o_Hour, int32_t& o_Minute); // Function GameScheduler.Scheduler.GetHourAndMinutesFromString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x350adc0
	int32_t GetDayOfTheYear(); // Function GameScheduler.Scheduler.GetDayOfTheYear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x33e1090
	int32_t GetDayOfTheWeek(); // Function GameScheduler.Scheduler.GetDayOfTheWeek // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x350ada0
	int32_t GetDayOfTheMonth(); // Function GameScheduler.Scheduler.GetDayOfTheMonth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x33e1e20
	enum class ESeasonEnum GetCurrentSeason(); // Function GameScheduler.Scheduler.GetCurrentSeason // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350ad80
	int32_t GetCalendarYear(); // Function GameScheduler.Scheduler.GetCalendarYear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x33e0980
	bool GetActive(); // Function GameScheduler.Scheduler.GetActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350ad50
	struct UScheduler* Get(); // Function GameScheduler.Scheduler.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350ad20
	void BeginFirstDay(); // Function GameScheduler.Scheduler.BeginFirstDay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x350ad00
	void AdvanceTimeTo(int32_t InDays, int32_t InHours, int32_t InMinutes, int32_t InSeconds); // Function GameScheduler.Scheduler.AdvanceTimeTo // (Final|Native|Public|BlueprintCallable) // @ game+0x350abb0
	void AdvanceTime(int32_t InDays, int32_t InHours, int32_t InMinutes, int32_t InSeconds); // Function GameScheduler.Scheduler.AdvanceTime // (Final|Native|Public|BlueprintCallable) // @ game+0x350aa60
	void AdvanceSeconds(int32_t InSeconds); // Function GameScheduler.Scheduler.AdvanceSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x350a9d0
	void AdvanceNurtureTime(int32_t InDays, int32_t InHours, int32_t InMinutes, int32_t InSeconds); // Function GameScheduler.Scheduler.AdvanceNurtureTime // (Final|Native|Public|BlueprintCallable) // @ game+0x350a880
	void AdvanceMinutes(int32_t InMinutes); // Function GameScheduler.Scheduler.AdvanceMinutes // (Final|Native|Public|BlueprintCallable) // @ game+0x350a7f0
	void AdvanceHours(int32_t InHours); // Function GameScheduler.Scheduler.AdvanceHours // (Final|Native|Public|BlueprintCallable) // @ game+0x350a760
	void AdvanceDays(int32_t InDays); // Function GameScheduler.Scheduler.AdvanceDays // (Final|Native|Public|BlueprintCallable) // @ game+0x350a6d0
};

// Class GameScheduler.TimeSourceScheduler
// Size: 0x30 (Inherited: 0x28)
struct UTimeSourceScheduler : UTimeSourceVolume {
	bool bDisable; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

