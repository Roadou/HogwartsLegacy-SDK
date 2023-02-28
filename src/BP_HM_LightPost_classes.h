// BlueprintGeneratedClass BP_HM_LightPost.BP_HM_LightPost_C
// Size: 0xb30 (Inherited: 0xaec)
struct ABP_HM_LightPost_C : ABP_LightFixture_Master_C {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	struct UPointLightComponent* Point Light_1; // 0xaf8(0x08)
	struct USpotLightComponent* Spot Light_1; // 0xb00(0x08)
	struct TSoftObjectPtr<UStaticMesh> New Mesh; // 0xb08(0x28)

	void ReceiveBeginPlay(); // Function BP_HM_LightPost.BP_HM_LightPost_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_LightPost(int32_t EntryPoint); // Function BP_HM_LightPost.BP_HM_LightPost_C.ExecuteUbergraph_BP_HM_LightPost // (Final|UbergraphFunction) // @ game+0x38a7480
};

