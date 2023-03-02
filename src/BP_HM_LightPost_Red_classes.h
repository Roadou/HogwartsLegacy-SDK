// BlueprintGeneratedClass BP_HM_LightPost_Red.BP_HM_LightPost_Red_C
// Size: 0xb08 (Inherited: 0xaec)
struct ABP_HM_LightPost_Red_C : ANone {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	struct UPointLightComponent* Point Light_1; // 0xaf8(0x08)
	struct USpotLightComponent* Spot Light_1; // 0xb00(0x08)

	void UserConstructionScript(); // Function BP_HM_LightPost_Red.BP_HM_LightPost_Red_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HM_LightPost_Red.BP_HM_LightPost_Red_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_LightPost_Red(int32_t EntryPoint); // Function BP_HM_LightPost_Red.BP_HM_LightPost_Red_C.ExecuteUbergraph_BP_HM_LightPost_Red // (Final|UbergraphFunction) // @ game+0x38a7480
};

