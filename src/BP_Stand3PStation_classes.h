// BlueprintGeneratedClass BP_Stand3PStation.BP_Stand3PStation_C
// Size: 0x478 (Inherited: 0x468)
struct ABP_Stand3PStation_C : ABP_Station_Propless3p_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x470(0x08)

	void ReceiveBeginPlay(); // Function BP_Stand3PStation.BP_Stand3PStation_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Stand3PStation(int32_t EntryPoint); // Function BP_Stand3PStation.BP_Stand3PStation_C.ExecuteUbergraph_BP_Stand3PStation // (Final|UbergraphFunction) // @ game+0x38a7480
};

