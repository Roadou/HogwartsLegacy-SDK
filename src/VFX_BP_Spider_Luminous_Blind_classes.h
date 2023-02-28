// BlueprintGeneratedClass VFX_BP_Spider_Luminous_Blind.VFX_BP_Spider_Luminous_Blind_C
// Size: 0x2c4 (Inherited: 0x248)
struct AVFX_BP_Spider_Luminous_Blind_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* NS_Flashes; // 0x250(0x08)
	struct UPointLightComponent* PointLight; // 0x258(0x08)
	struct UPostProcessComponent* PostProcess; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	float Timeline_0_Lightintisity_70DECC1E46B965328A5BFAA068EB7A70; // 0x270(0x04)
	float Timeline_0_Strength_70DECC1E46B965328A5BFAA068EB7A70; // 0x274(0x04)
	enum class ETimelineDirection Timeline_0__Direction_70DECC1E46B965328A5BFAA068EB7A70; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct UTimelineComponent* Timeline_1; // 0x280(0x08)
	float LightIntesity; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct USceneComponent* NewVar_1; // 0x290(0x08)
	struct APlayerCameraManager* NewVar_2; // 0x298(0x08)
	struct FVector NewVar_3; // 0x2a0(0x0c)
	struct FVector NewVar_4; // 0x2ac(0x0c)
	struct FRotator NewVar_5; // 0x2b8(0x0c)

	void Timeline_0__FinishedFunc(); // Function VFX_BP_Spider_Luminous_Blind.VFX_BP_Spider_Luminous_Blind_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function VFX_BP_Spider_Luminous_Blind.VFX_BP_Spider_Luminous_Blind_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Spider_Luminous_Blind.VFX_BP_Spider_Luminous_Blind_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Spider_Luminous_Blind(int32_t EntryPoint); // Function VFX_BP_Spider_Luminous_Blind.VFX_BP_Spider_Luminous_Blind_C.ExecuteUbergraph_VFX_BP_Spider_Luminous_Blind // (Final|UbergraphFunction) // @ game+0x38a7480
};

