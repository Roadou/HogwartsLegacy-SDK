// BlueprintGeneratedClass BP_SkyAtmosphere_Spotlight.BP_SkyAtmosphere_Spotlight_C
// Size: 0x310 (Inherited: 0x248)
struct ABP_SkyAtmosphere_Spotlight_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UDayNightAtmosphereLightControllerComponent* DayNightAtmosphereLightController; // 0x250(0x08)
	struct USpotLightComponentWithCullingSettings* SpotLightComponentWithCullingSettings; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float Intensity; // 0x268(0x04)
	float Attenuation Radius; // 0x26c(0x04)
	float Outter Cone Angle; // 0x270(0x04)
	float Inner Cone Angle; // 0x274(0x04)
	struct FLinearColor Color; // 0x278(0x10)
	float Source Radius; // 0x288(0x04)
	float Source Length; // 0x28c(0x04)
	float Indirect Intensity; // 0x290(0x04)
	float Volumetic Scattering; // 0x294(0x04)
	bool Ignore Culling; // 0x298(0x01)
	enum class ELightCullingPriority Light Importance; // 0x299(0x01)
	bool Test; // 0x29a(0x01)
	bool On at Night; // 0x29b(0x01)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct ALightClippingPlanes* Light Clipping Planes Actor; // 0x2a0(0x08)
	float Min Distance; // 0x2a8(0x04)
	bool CastShadows; // 0x2ac(0x01)
	bool Static Shadows Only; // 0x2ad(0x01)
	char pad_2AE[0x2]; // 0x2ae(0x02)
	float Max Draw Distance; // 0x2b0(0x04)
	float Max Distance Fade Range; // 0x2b4(0x04)
	bool Invert Clipping Planes; // 0x2b8(0x01)
	enum class ELightClippingProviderVolumeMode Volume Mode; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)
	struct ALightClippingVolume* Light Clipping Volumes Actor; // 0x2c0(0x08)
	float Near Shadow Clipping Distance; // 0x2c8(0x04)
	float Shadow Resolution Scale; // 0x2cc(0x04)
	struct TArray<struct FWCullingPlane> Culling Planes; // 0x2d0(0x10)
	float Day Sun Light Intensity Mod; // 0x2e0(0x04)
	float Day Sky Intensity Mod; // 0x2e4(0x04)
	struct FLinearColor Day Sun Color Mod; // 0x2e8(0x10)
	float Night Moon Light Intensity Mod; // 0x2f8(0x04)
	float Night Sky Intensity Mod; // 0x2fc(0x04)
	struct FLinearColor Night Moon Color Mod; // 0x300(0x10)

	void UserConstructionScript(); // Function BP_SkyAtmosphere_Spotlight.BP_SkyAtmosphere_Spotlight_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DayNightMoonEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, enum class EMoonPhaseName Phase, bool bLate); // Function BP_SkyAtmosphere_Spotlight.BP_SkyAtmosphere_Spotlight_C.DayNightMoonEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SkyAtmosphere_Spotlight.BP_SkyAtmosphere_Spotlight_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DayNightSunEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate); // Function BP_SkyAtmosphere_Spotlight.BP_SkyAtmosphere_Spotlight_C.DayNightSunEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SkyAtmosphere_Spotlight(int32_t EntryPoint); // Function BP_SkyAtmosphere_Spotlight.BP_SkyAtmosphere_Spotlight_C.ExecuteUbergraph_BP_SkyAtmosphere_Spotlight // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

