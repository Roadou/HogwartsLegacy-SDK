// BlueprintGeneratedClass BP_Stand2PStation.BP_Stand2PStation_C
// Size: 0x448 (Inherited: 0x438)
struct ABP_Stand2PStation_C : ABP_Station_Propless2p_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x440(0x08)

	void ReceiveBeginPlay(); // Function BP_Stand2PStation.BP_Stand2PStation_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Stand2PStation(int32_t EntryPoint); // Function BP_Stand2PStation.BP_Stand2PStation_C.ExecuteUbergraph_BP_Stand2PStation // (Final|UbergraphFunction) // @ game+0x38a7480
};

