// Class PerlinNoise.DynamicNoiseTextureBase
// Size: 0x50 (Inherited: 0x28)
struct UDynamicNoiseTextureBase : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	int32_t Width; // 0x30(0x04)
	int32_t Height; // 0x34(0x04)
	float UpdateInterval; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UTexture2D* Texture; // 0x40(0x08)
	float Age; // 0x48(0x04)
	float NextUpdate; // 0x4c(0x04)

	struct UTexture2D* GetDynamicTexture(); // Function PerlinNoise.DynamicNoiseTextureBase.GetDynamicTexture // (Native|Public|BlueprintCallable) // @ game+0x172cfe0
};

// Class PerlinNoise.DynamicNoiseTextureColorBase
// Size: 0x60 (Inherited: 0x50)
struct UDynamicNoiseTextureColorBase : UDynamicNoiseTextureBase {
	struct UCurveLinearColor* Palette; // 0x50(0x08)
	bool bWantMask; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class PerlinNoise.DynamicNoiseTexture
// Size: 0x78 (Inherited: 0x60)
struct UDynamicNoiseTexture : UDynamicNoiseTextureColorBase {
	struct FNoiseParams2D NoiseParams; // 0x60(0x14)
	float TimeFactor; // 0x74(0x04)
};

// Class PerlinNoise.DynamicNoiseOctaveTexture
// Size: 0x80 (Inherited: 0x60)
struct UDynamicNoiseOctaveTexture : UDynamicNoiseTextureColorBase {
	struct FOctaveNoiseParams NoiseParams; // 0x60(0x1c)
	float TimeFactor; // 0x7c(0x04)
};

// Class PerlinNoise.DynamicNoiseNormalsBase
// Size: 0x58 (Inherited: 0x50)
struct UDynamicNoiseNormalsBase : UDynamicNoiseTextureBase {
	float NormalStrength; // 0x50(0x04)
	bool bCurl; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class PerlinNoise.DynamicNoiseNormals
// Size: 0x70 (Inherited: 0x58)
struct UDynamicNoiseNormals : UDynamicNoiseNormalsBase {
	struct FNoiseParams2D NoiseParams; // 0x58(0x14)
	float TimeFactor; // 0x6c(0x04)
};

// Class PerlinNoise.DynamicNoiseOctaveNormals
// Size: 0x78 (Inherited: 0x58)
struct UDynamicNoiseOctaveNormals : UDynamicNoiseNormalsBase {
	struct FOctaveNoiseParams NoiseParams; // 0x58(0x1c)
	float TimeFactor; // 0x74(0x04)
};

// Class PerlinNoise.PerlinNoise
// Size: 0x28 (Inherited: 0x28)
struct UPerlinNoise : UObject {

	struct UCurveFloat* SaveCurve(struct FSoftObjectPath Path, struct UCurveFloat* Curve); // Function PerlinNoise.PerlinNoise.SaveCurve // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x172f870
	float PerlinNoiseSeed(); // Function PerlinNoise.PerlinNoise.PerlinNoiseSeed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x172f830
	struct UTexture2D* MakeOctaveNoiseTex(struct AActor* Owner, struct FOctaveNoiseParams& Params, int32_t Width, int32_t Height, float SuperSample, struct UCurveLinearColor* Palette, bool WantMask); // Function PerlinNoise.PerlinNoise.MakeOctaveNoiseTex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172f5f0
	struct UTexture2D* MakeOctaveNoiseNormalTex(struct AActor* Owner, struct FOctaveNoiseParams& Params, int32_t Width, int32_t Height, float Strength, bool Curl, float SuperSample); // Function PerlinNoise.PerlinNoise.MakeOctaveNoiseNormalTex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172f3b0
	struct UCurveFloat* MakeOctaveNoiseCurve(struct AActor* Owner, float Duration, struct FOctaveNoiseParams& Params, float SampleRate, float ErrorThreshold); // Function PerlinNoise.PerlinNoise.MakeOctaveNoiseCurve // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172f1c0
	struct UTexture2D* MakeNoiseTex(struct AActor* Owner, struct FNoiseParams2D& Params, int32_t Width, int32_t Height, float SuperSample, struct UCurveLinearColor* Palette, bool WantMask); // Function PerlinNoise.PerlinNoise.MakeNoiseTex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172ef90
	struct UTexture2D* MakeNoiseNormalTex(struct AActor* Owner, struct FNoiseParams2D& Params, int32_t Width, int32_t Height, float Strength, bool Curl, float SuperSample); // Function PerlinNoise.PerlinNoise.MakeNoiseNormalTex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172eb80
	struct UCurveFloat* MakeNoiseNormalizedCurve(struct AActor* Owner, float Duration, struct FNoiseParams& Params, float SampleRate, float ErrorThreshold); // Function PerlinNoise.PerlinNoise.MakeNoiseNormalizedCurve // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172edc0
	struct UCurveFloat* MakeNoiseCurve(struct AActor* Owner, float Duration, struct FNoiseParams& Params, float SampleRate, float ErrorThreshold); // Function PerlinNoise.PerlinNoise.MakeNoiseCurve // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172e9b0
	void GetOctaveNoise4D(struct FVector Pos, float Time, struct FOctaveNoiseParams& Params, float& Noise); // Function PerlinNoise.PerlinNoise.GetOctaveNoise4D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172e480
	void GetOctaveNoise3D(struct FVector Pos, struct FOctaveNoiseParams& Params, float& Noise); // Function PerlinNoise.PerlinNoise.GetOctaveNoise3D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172e1b0
	void GetOctaveNoise2D(struct FVector2D Pos, struct FOctaveNoiseParams& Params, float& Noise); // Function PerlinNoise.PerlinNoise.GetOctaveNoise2D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172df20
	void GetOctaveNoise(float Time, struct FOctaveNoiseParams& Params, float& Noise); // Function PerlinNoise.PerlinNoise.GetOctaveNoise // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172e770
	void GetNoiseNormalized(float Time, struct FNoiseParams& Params, float& Noise); // Function PerlinNoise.PerlinNoise.GetNoiseNormalized // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172dde0
	void GetNoiseNormal3D(struct FVector Pos, struct FNoiseParams& Params, struct FVector& Normal, float inverseNormalStrength, float Epsilon); // Function PerlinNoise.PerlinNoise.GetNoiseNormal3D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172dc20
	void GetNoiseNormal2D(struct FVector2D Pos, struct FNoiseParams& Params, struct FVector& Normal, float inverseNormalStrength, float Epsilon); // Function PerlinNoise.PerlinNoise.GetNoiseNormal2D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172da50
	void GetNoise4DAsymmetric(struct FVector Pos, float Time, struct FNoiseParams4D& Params, float& Noise); // Function PerlinNoise.PerlinNoise.GetNoise4DAsymmetric // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172d740
	void GetNoise4D(struct FVector Pos, float Time, struct FNoiseParams& Params, float& Noise); // Function PerlinNoise.PerlinNoise.GetNoise4D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172d590
	void GetNoise3DAsymmetric(struct FVector Pos, struct FNoiseParams3D& Params, float& Noise); // Function PerlinNoise.PerlinNoise.GetNoise3DAsymmetric // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172d420
	void GetNoise3D(struct FVector Pos, struct FNoiseParams& Params, float& Noise); // Function PerlinNoise.PerlinNoise.GetNoise3D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172d2b0
	void GetNoise2DAsymmetric(struct FVector2D Pos, struct FNoiseParams2D& Params, float& Noise); // Function PerlinNoise.PerlinNoise.GetNoise2DAsymmetric // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172d160
	void GetNoise2D(struct FVector2D Pos, struct FNoiseParams& Params, float& Noise); // Function PerlinNoise.PerlinNoise.GetNoise2D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172d010
	void GetNoise(float Time, struct FNoiseParams& Params, float& Noise); // Function PerlinNoise.PerlinNoise.GetNoise // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172d910
	void GetCurlNoiseAsNormal(struct FVector2D Pos, struct FNoiseParams& Params, struct FVector& Curl, float CurlEpsilon, float inverseNormalStrength); // Function PerlinNoise.PerlinNoise.GetCurlNoiseAsNormal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172ce10
	void GetCurlNoise3D(struct FVector Pos, struct FNoiseParams& Params, struct FVector& Curl, float CurlEpsilon); // Function PerlinNoise.PerlinNoise.GetCurlNoise3D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172cc80
	void GetCurlNoise2D(struct FVector2D Pos, struct FNoiseParams& Params, struct FVector2D& Curl, float CurlEpsilon); // Function PerlinNoise.PerlinNoise.GetCurlNoise2D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x172cb10
	struct UDynamicNoiseTexture* ConstructDynamicNoiseTexture(struct AActor* Owner, struct FNoiseParams2D& Params, float TimeFactor, int32_t Width, int32_t Height, float UpdateInterval, struct UCurveLinearColor* Palette, bool WantMask); // Function PerlinNoise.PerlinNoise.ConstructDynamicNoiseTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172c8a0
	struct UDynamicNoiseOctaveTexture* ConstructDynamicNoiseOctaveTexture(struct AActor* Owner, struct FOctaveNoiseParams& Params, float TimeFactor, int32_t Width, int32_t Height, float UpdateInterval, struct UCurveLinearColor* Palette, bool WantMask); // Function PerlinNoise.PerlinNoise.ConstructDynamicNoiseOctaveTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172c620
	struct UDynamicNoiseOctaveNormals* ConstructDynamicNoiseOctaveNormals(struct AActor* Owner, struct FOctaveNoiseParams& Params, float TimeFactor, int32_t Width, int32_t Height, float UpdateInterval, float NormalStrength, bool Curl); // Function PerlinNoise.PerlinNoise.ConstructDynamicNoiseOctaveNormals // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172c3a0
	struct UDynamicNoiseNormals* ConstructDynamicNoiseNormals(struct AActor* Owner, struct FNoiseParams2D& Params, float TimeFactor, int32_t Width, int32_t Height, float UpdateInterval, float NormalStrength, bool Curl); // Function PerlinNoise.PerlinNoise.ConstructDynamicNoiseNormals // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x172c130
};

