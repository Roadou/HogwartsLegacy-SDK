// BlueprintGeneratedClass BP_Lightpolution.BP_LightPolution_C
// Size: 0x2b9 (Inherited: 0x248)
struct ABP_LightPolution_C : AActor {
	struct UBillboardComponent* Billboard; // 0x248(0x08)
	struct UStaticMeshComponent* Sphere_inversenormals; // 0x250(0x08)
	struct UPointLightComponent* PointLight; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct FLinearColor Light Color; // 0x268(0x10)
	struct UMaterialInstanceDynamic* Scattering material; // 0x278(0x08)
	float Light Intensity; // 0x280(0x04)
	struct FVector Radius; // 0x284(0x0c)
	float Density; // 0x290(0x04)
	float Fade end; // 0x294(0x04)
	float Fade Start; // 0x298(0x04)
	float Gradient Power; // 0x29c(0x04)
	float Fresnel Exponent; // 0x2a0(0x04)
	float Emissive Intensity; // 0x2a4(0x04)
	bool Link Pointlight radius; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	struct FVector Pointlight offset; // 0x2ac(0x0c)
	bool Use Pointlight; // 0x2b8(0x01)

	void UserConstructionScript(); // Function BP_Lightpolution.BP_LightPolution_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

