// BlueprintGeneratedClass BP_BasicLightController.BP_BasicLightController_C
// Size: 0x278 (Inherited: 0x220)
struct UBP_BasicLightController_C : USceneComponent {
	struct USceneComponent* PointLight; // 0x220(0x08)
	struct USceneComponent* RootComponent; // 0x228(0x08)
	bool Cast Shadow; // 0x230(0x01)
	bool Static Shadows Only; // 0x231(0x01)
	char pad_232[0x2]; // 0x232(0x02)
	float Attenuation Radius; // 0x234(0x04)
	float Intensity; // 0x238(0x04)
	float Temperature; // 0x23c(0x04)
	float Volumetric Scattering Intensity; // 0x240(0x04)
	struct FLinearColor Light Color; // 0x244(0x10)
	float Shadow Bias; // 0x254(0x04)
	float Contact Shadow Length; // 0x258(0x04)
	float Indirect Intensity; // 0x25c(0x04)
	float Min Distance; // 0x260(0x04)
	float Shadow Resoultion Scale; // 0x264(0x04)
	float Max Draw Distance; // 0x268(0x04)
	float Max Distance Fade Range; // 0x26c(0x04)
	struct ALightClippingPlanes* Light Clipping Planes Actor; // 0x270(0x08)

	void Set Variables(struct UPointLightComponent* Point Light); // Function BP_BasicLightController.BP_BasicLightController_C.Set Variables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Apply Settings(); // Function BP_BasicLightController.BP_BasicLightController_C.Apply Settings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

