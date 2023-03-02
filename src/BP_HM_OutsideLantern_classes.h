// BlueprintGeneratedClass BP_HM_OutsideLantern.BP_HM_OutsideLantern_C
// Size: 0xb34 (Inherited: 0xaec)
struct ABP_HM_OutsideLantern_C : ANone {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	float Timeline_0_NewTrack_0_38A80C184B17A18882C753A4D21E2776; // 0xaf8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_38A80C184B17A18882C753A4D21E2776; // 0xafc(0x01)
	char pad_AFD[0x3]; // 0xafd(0x03)
	struct UTimelineComponent* Timeline_1; // 0xb00(0x08)
	struct UPointLightComponent* Point Light_1; // 0xb08(0x08)
	struct USpotLightComponent* Spot Light_1; // 0xb10(0x08)
	float Delay; // 0xb18(0x04)
	char pad_B1C[0x4]; // 0xb1c(0x04)
	struct TArray<float> Intensities; // 0xb20(0x10)
	float TargetIntinsity; // 0xb30(0x04)

	void Timeline_0__FinishedFunc(); // Function BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Brighten(); // Function BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.Brighten // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_OutsideLantern(int32_t EntryPoint); // Function BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.ExecuteUbergraph_BP_HM_OutsideLantern // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

