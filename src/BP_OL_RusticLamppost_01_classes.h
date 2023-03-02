// BlueprintGeneratedClass BP_OL_RusticLamppost_01.BP_OL_RusticLamppost_01_C
// Size: 0xb10 (Inherited: 0xaec)
struct ABP_OL_RusticLamppost_01_C : ABP_LightFixture_Master_C {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	struct UChildActorComponent* ChildActor; // 0xaf8(0x08)
	struct UPointLightComponent* Point Light_1; // 0xb00(0x08)
	struct USpotLightComponent* Spot Light_1; // 0xb08(0x08)

	void UserConstructionScript(); // Function BP_OL_RusticLamppost_01.BP_OL_RusticLamppost_01_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OL_RusticLamppost_01.BP_OL_RusticLamppost_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_RusticLamppost_01(int32_t EntryPoint); // Function BP_OL_RusticLamppost_01.BP_OL_RusticLamppost_01_C.ExecuteUbergraph_BP_OL_RusticLamppost_01 // (Final|UbergraphFunction) // @ game+0x38a7480
};

