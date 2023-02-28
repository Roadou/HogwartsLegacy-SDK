// BlueprintGeneratedClass BP_Candles.BP_Candles_C
// Size: 0x51d (Inherited: 0x420)
struct ABP_Candles_C : ACandles {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UMaterialBillboardComponent* MaterialBillboard; // 0x428(0x08)
	struct UAkComponent* Ak_BP_Candles; // 0x430(0x08)
	struct UAnimatedLightComponent* AnimatedLight; // 0x438(0x08)
	struct USpotLightComponent* SpotLight; // 0x440(0x08)
	struct UPointLightComponent* PointLight; // 0x448(0x08)
	struct UObjectStateComponent* ObjectState; // 0x450(0x08)
	float LerpIntensity_NewTrack_0_C93EB44641A0097D0B777F95878EBC23; // 0x458(0x04)
	enum class ETimelineDirection LerpIntensity__Direction_C93EB44641A0097D0B777F95878EBC23; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	struct UTimelineComponent* LerpIntensity; // 0x460(0x08)
	enum class E_CandleType CandleType; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	int32_t CandleIndex; // 0x46c(0x04)
	struct FMulticastInlineDelegate OnLit; // 0x470(0x10)
	struct FMulticastInlineDelegate OnExtinguished; // 0x480(0x10)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> FatCandles; // 0x490(0x10)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> SkinnyCandles; // 0x4a0(0x10)
	struct ALightClippingPlanes* Light Clipping Planes Actor; // 0x4b0(0x08)
	struct ALightClippingVolume* Light Clipping Volumes Actor; // 0x4b8(0x08)
	enum class ELightClippingProviderVolumeMode Volume Mode; // 0x4c0(0x01)
	bool On During Day; // 0x4c1(0x01)
	bool Cast Static Only; // 0x4c2(0x01)
	char pad_4C3[0x1]; // 0x4c3(0x01)
	float BaseMinIntensity; // 0x4c4(0x04)
	float SwitchTargetMinIntensity; // 0x4c8(0x04)
	float Delay; // 0x4cc(0x04)
	float BaseWaveSpeed1; // 0x4d0(0x04)
	float BaseWaveSpeed2; // 0x4d4(0x04)
	bool LerpCandleStickGlow; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct UMaterialInstanceDynamic* MatCandle; // 0x4e0(0x08)
	float BaseCandleGlow; // 0x4e8(0x04)
	float TargetCandleGlow; // 0x4ec(0x04)
	struct UMaterialInstanceDynamic* MatFlame; // 0x4f0(0x08)
	struct FRandomStream Random Seed; // 0x4f8(0x08)
	enum class ELightCullingPriority Culling Priority; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float Max Draw Distance; // 0x504(0x04)
	float Max Distance Fade Range; // 0x508(0x04)
	float Flame Emissive Value; // 0x50c(0x04)
	struct FVector Sound Offset; // 0x510(0x0c)
	bool StaticMeshBlocksCamera; // 0x51c(0x01)

	void PlaceFlames(); // Function BP_Candles.BP_Candles_C.PlaceFlames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaceCandles(); // Function BP_Candles.BP_Candles_C.PlaceCandles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConstructCandles(); // Function BP_Candles.BP_Candles_C.ConstructCandles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Candles.BP_Candles_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LerpIntensity__FinishedFunc(); // Function BP_Candles.BP_Candles_C.LerpIntensity__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void LerpIntensity__UpdateFunc(); // Function BP_Candles.BP_Candles_C.LerpIntensity__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void DayNightMoonEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, enum class EMoonPhaseName Phase, bool bLate); // Function BP_Candles.BP_Candles_C.DayNightMoonEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnEnterLightTickRange(struct ULightComponent* LightComponent); // Function BP_Candles.BP_Candles_C.OnEnterLightTickRange // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitLightTickRange(struct ULightComponent* LightComponent); // Function BP_Candles.BP_Candles_C.OnExitLightTickRange // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Candles.BP_Candles_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DayNightSunEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate); // Function BP_Candles.BP_Candles_C.DayNightSunEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_Candles.BP_Candles_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Brighten(); // Function BP_Candles.BP_Candles_C.Brighten // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_Candles.BP_Candles_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Candles(int32_t EntryPoint); // Function BP_Candles.BP_Candles_C.ExecuteUbergraph_BP_Candles // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnExtinguished__DelegateSignature(); // Function BP_Candles.BP_Candles_C.OnExtinguished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLit__DelegateSignature(); // Function BP_Candles.BP_Candles_C.OnLit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

