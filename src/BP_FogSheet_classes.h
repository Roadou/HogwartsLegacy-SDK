// BlueprintGeneratedClass BP_FogSheet.BP_FogSheet_C
// Size: 0x2b1 (Inherited: 0x248)
struct ABP_FogSheet_C : AActor {
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct FVector Size; // 0x250(0x0c)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct UMaterialInstanceConstant* Fog Sheet Material; // 0x260(0x08)
	struct UMaterialInstanceDynamic* FogSheetMID; // 0x268(0x08)
	float Brightness; // 0x270(0x04)
	struct FLinearColor Color; // 0x274(0x10)
	float Opacity; // 0x284(0x04)
	float Contrast; // 0x288(0x04)
	float NearFadeDistance; // 0x28c(0x04)
	float PanningSpeed; // 0x290(0x04)
	float NoiseSize; // 0x294(0x04)
	float NoiseProjectionDistance; // 0x298(0x04)
	float DepthFadeDistance; // 0x29c(0x04)
	struct UStaticMesh* Static Mesh; // 0x2a0(0x08)
	struct UTexture* Fog texture; // 0x2a8(0x08)
	bool UseWindOffset; // 0x2b0(0x01)

	void UserConstructionScript(); // Function BP_FogSheet.BP_FogSheet_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

