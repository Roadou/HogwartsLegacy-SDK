// BlueprintGeneratedClass BP_Bench2x2PStation.BP_Bench2x2PStation_C
// Size: 0x388 (Inherited: 0x371)
struct ABP_Bench2x2PStation_C : ABP_Station_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x380(0x08)

	struct FName GetMainBone(); // Function BP_Bench2x2PStation.BP_Bench2x2PStation_C.GetMainBone // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UPrimitiveComponent* GetMainPrimitive(); // Function BP_Bench2x2PStation.BP_Bench2x2PStation_C.GetMainPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnReset(); // Function BP_Bench2x2PStation.BP_Bench2x2PStation_C.OnReset // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetupSfx(struct UAkComponent* AkComponent); // Function BP_Bench2x2PStation.BP_Bench2x2PStation_C.SetupSfx // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Bench2x2PStation(int32_t EntryPoint); // Function BP_Bench2x2PStation.BP_Bench2x2PStation_C.ExecuteUbergraph_BP_Bench2x2PStation // (Final|UbergraphFunction) // @ game+0x38a7480
};

