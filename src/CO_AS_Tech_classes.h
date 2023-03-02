// BlueprintGeneratedClass CO_AS_Tech.CO_AS_Tech_C
// Size: 0x268 (Inherited: 0x250)
struct ACO_AS_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct AActor* COM_25_Diricawl; // 0x258(0x08)
	struct ADynamicObjectVolume* DOV_Diricawl2_ExecuteUbergraph_CO_AS_Tech_RefProperty; // 0x260(0x08)

	void DayNightMoonEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, enum class EMoonPhaseName Phase, bool bLate); // Function CO_AS_Tech.CO_AS_Tech_C.DayNightMoonEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function CO_AS_Tech.CO_AS_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void COM_25_DiricawlSpawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function CO_AS_Tech.CO_AS_Tech_C.COM_25_DiricawlSpawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DayNightSunEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate); // Function CO_AS_Tech.CO_AS_Tech_C.DayNightSunEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Updated COM_26(struct UObject* Caller, struct FMissionID& MissionID); // Function CO_AS_Tech.CO_AS_Tech_C.Updated COM_26 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_CO_AS_Tech(int32_t EntryPoint); // Function CO_AS_Tech.CO_AS_Tech_C.ExecuteUbergraph_CO_AS_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

