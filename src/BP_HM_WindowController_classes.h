// BlueprintGeneratedClass BP_HM_WindowController.BP_HM_WindowController_C
// Size: 0x278 (Inherited: 0x220)
struct UBP_HM_WindowController_C : USceneComponent {
	struct USceneComponent* Window SM Component; // 0x220(0x08)
	float Day Diffuse ScatteredLight Transmission; // 0x228(0x04)
	float Day Diffuse ScatteredLight Desaturation; // 0x22c(0x04)
	float Day Diffuse Direct Light Transmission; // 0x230(0x04)
	float Day Diffuse Direct Light Desaturation; // 0x234(0x04)
	float Day Fake Ext Scattered Light Transmission; // 0x238(0x04)
	float Day Fake Ext Scattered Light Desaturation; // 0x23c(0x04)
	float Night Diffuse Scattered Light Transmission; // 0x240(0x04)
	struct FLinearColor Night Fake Ext Color Tint; // 0x244(0x10)
	char pad_254[0x4]; // 0x254(0x04)
	struct TArray<struct UMaterialInterface*> MIDs; // 0x258(0x10)
	struct TArray<struct UMaterialInterface*> MICs; // 0x268(0x10)

	void Clear MIDs(); // Function BP_HM_WindowController.BP_HM_WindowController_C.Clear MIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Change Windows(); // Function BP_HM_WindowController.BP_HM_WindowController_C.Change Windows // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

