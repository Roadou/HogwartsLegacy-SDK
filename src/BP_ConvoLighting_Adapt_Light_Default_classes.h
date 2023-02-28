// BlueprintGeneratedClass BP_ConvoLighting_Adapt_Light_Default.BP_ConvoLighting_Adapt_Light_Default_C
// Size: 0x368 (Inherited: 0x248)
struct ABP_ConvoLighting_Adapt_Light_Default_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct ULightAdaptationComponentChildOfLight* LightAdaptationComponentChildOfLight_Fill; // 0x250(0x08)
	struct UDayNightTemperatureCurveLightControllerComponent* DayNightTemperatureCurveLightController_Key; // 0x258(0x08)
	struct UDayNightTemperatureCurveLightControllerComponent* DayNightTemperatureCurveLightController_Rim; // 0x260(0x08)
	struct UDayNightTemperatureCurveLightControllerComponent* DayNightTemperatureCurveLightController_fill; // 0x268(0x08)
	struct UArrowComponent* Fill_Direction; // 0x270(0x08)
	struct USpotLightComponent* Fill; // 0x278(0x08)
	struct USceneComponent* Fill_Parent; // 0x280(0x08)
	struct UArrowComponent* Rim_Direction; // 0x288(0x08)
	struct UArrowComponent* Key_Direction; // 0x290(0x08)
	struct UArrowComponent* Arrow_Camera_Facing; // 0x298(0x08)
	struct UPostProcessComponent* PostProcess; // 0x2a0(0x08)
	struct ULightAdaptationComponentChildOfLight* LightAdaptationComponentChildOfLight_Rim; // 0x2a8(0x08)
	struct ULightAdaptationComponentChildOfLight* LightAdaptationComponentChildOfLight_Key; // 0x2b0(0x08)
	struct USceneComponent* Rim_Parent; // 0x2b8(0x08)
	struct USpotLightComponent* Rim; // 0x2c0(0x08)
	struct USpotLightComponent* Key; // 0x2c8(0x08)
	struct USceneComponent* Key_Parent; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)
	float Light Temperature Key; // 0x2e0(0x04)
	float Light Temperature Rim; // 0x2e4(0x04)
	float Light Temperature Fill; // 0x2e8(0x04)
	bool Uses sky Colors; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct UCurveFloat* Rim temperature curve; // 0x2f0(0x08)
	struct UCurveFloat* Key temperature curve; // 0x2f8(0x08)
	struct UCurveFloat* Fill temperature curve; // 0x300(0x08)
	struct FDynamicLightAdaptationSettings LightAdaptationSettings; // 0x308(0x60)

	void SetLightTemperatureValues(); // Function BP_ConvoLighting_Adapt_Light_Default.BP_ConvoLighting_Adapt_Light_Default_C.SetLightTemperatureValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_ConvoLighting_Adapt_Light_Default.BP_ConvoLighting_Adapt_Light_Default_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ConvoLighting_Adapt_Light_Default.BP_ConvoLighting_Adapt_Light_Default_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ConvoLighting_Adapt_Light_Default.BP_ConvoLighting_Adapt_Light_Default_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ConvoLighting_Adapt_Light_Default(int32_t EntryPoint); // Function BP_ConvoLighting_Adapt_Light_Default.BP_ConvoLighting_Adapt_Light_Default_C.ExecuteUbergraph_BP_ConvoLighting_Adapt_Light_Default // (Final|UbergraphFunction) // @ game+0x38a7480
};

