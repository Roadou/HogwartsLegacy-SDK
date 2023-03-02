// BlueprintGeneratedClass BP_Godrays.BP_Godrays_C
// Size: 0x2c8 (Inherited: 0x248)
struct ABP_Godrays_C : AActor {
	struct UStaticMeshComponent* StaticMesh; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	bool UseSun; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct AActor* Sun; // 0x260(0x08)
	struct UMaterialInstanceDynamic* Dynamic Material; // 0x268(0x08)
	float Width; // 0x270(0x04)
	float Length; // 0x274(0x04)
	float Width_Fallof; // 0x278(0x04)
	float length_fallof; // 0x27c(0x04)
	struct FLinearColor Color; // 0x280(0x10)
	float Brightness; // 0x290(0x04)
	float FadeDistance; // 0x294(0x04)
	struct FRandomStream RandomTime; // 0x298(0x08)
	bool Animated; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float U-Tiling Noise; // 0x2a4(0x04)
	float V-Tiling Noise; // 0x2a8(0x04)
	float Animated Noise Speed; // 0x2ac(0x04)
	bool Use TextureProfile; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct UTexture* TextureProfile; // 0x2b8(0x08)
	float Top Blend; // 0x2c0(0x04)
	float Depth Fade; // 0x2c4(0x04)

	void UserConstructionScript(); // Function BP_Godrays.BP_Godrays_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

