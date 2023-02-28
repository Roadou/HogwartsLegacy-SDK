// BlueprintGeneratedClass BP_BenchStation_Propless.BP_BenchStation_Propless_C
// Size: 0x451 (Inherited: 0x438)
struct ABP_BenchStation_Propless_C : ABP_Station_Propless2p_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UStaticMeshComponent* Bench Front Edge Reference Plane; // 0x440(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x448(0x08)
	bool IsBenchAlignmentVisible?; // 0x450(0x01)

	void UserConstructionScript(); // Function BP_BenchStation_Propless.BP_BenchStation_Propless_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BenchStation_Propless.BP_BenchStation_Propless_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BenchStation_Propless(int32_t EntryPoint); // Function BP_BenchStation_Propless.BP_BenchStation_Propless_C.ExecuteUbergraph_BP_BenchStation_Propless // (Final|UbergraphFunction) // @ game+0x38a7480
};

