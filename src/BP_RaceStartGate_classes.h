// BlueprintGeneratedClass BP_RaceStartGate.BP_RaceStartGate_C
// Size: 0x628 (Inherited: 0x5d8)
struct ABP_RaceStartGate_C : ARace {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d8(0x08)
	struct UStaticMeshComponent* SM_BroomRace_FlagA1; // 0x5e0(0x08)
	struct UStaticMeshComponent* SM_BroomRace_FlagA; // 0x5e8(0x08)
	struct UStaticMeshComponent* SM_BroomRace_TopFlagA; // 0x5f0(0x08)
	struct UStaticMeshComponent* SM_BroomRace_TopFlagB; // 0x5f8(0x08)
	struct UStaticMeshComponent* SM_BRR_Post01; // 0x600(0x08)
	struct UStaticMeshComponent* SM_BRR_Post02; // 0x608(0x08)
	struct UStaticMeshComponent* SM_BRR_Post01_Base; // 0x610(0x08)
	struct UStaticMeshComponent* SM_BRR_Post01_Base1; // 0x618(0x08)
	struct UStaticMeshComponent* SM_BRR_RaceFlags; // 0x620(0x08)

	void OnRaceFinish(); // Function BP_RaceStartGate.BP_RaceStartGate_C.OnRaceFinish // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnRaceStart(); // Function BP_RaceStartGate.BP_RaceStartGate_C.OnRaceStart // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnRaceAbandoned(); // Function BP_RaceStartGate.BP_RaceStartGate_C.OnRaceAbandoned // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_RaceStartGate(int32_t EntryPoint); // Function BP_RaceStartGate.BP_RaceStartGate_C.ExecuteUbergraph_BP_RaceStartGate // (Final|UbergraphFunction) // @ game+0x38a7480
};

