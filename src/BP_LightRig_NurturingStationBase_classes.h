// BlueprintGeneratedClass BP_LightRig_NurturingStationBase.BP_LightRig_NurturingStationBase_C
// Size: 0x338 (Inherited: 0x248)
struct ABP_LightRig_NurturingStationBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBP_ID_Stationlight_Rim_C* BP_ID_Stationlight_Rim1; // 0x250(0x08)
	struct UBP_ID_Stationlight_Key_C* BP_ID_Stationlight_Key; // 0x258(0x08)
	struct USpotLightComponentWithCullingSettings* Rim light; // 0x260(0x08)
	struct UArrowComponent* Arrow; // 0x268(0x08)
	struct USpotLightComponentWithCullingSettings* Key Light; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float BlendWeight; // 0x280(0x04)
	float BlendDuration; // 0x284(0x04)
	struct FRuntimeFloatCurve BlendCurve; // 0x288(0x88)
	bool BlendDirection; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	float BlendTimer; // 0x314(0x04)
	struct TArray<struct ULightComponent*> LightComponents; // 0x318(0x10)
	struct TArray<float> LightTargetIntensities; // 0x328(0x10)

	void ReceiveBeginPlay(); // Function BP_LightRig_NurturingStationBase.BP_LightRig_NurturingStationBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_LightRig_NurturingStationBase.BP_LightRig_NurturingStationBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlendOutAndDestroy(); // Function BP_LightRig_NurturingStationBase.BP_LightRig_NurturingStationBase_C.BlendOutAndDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_ID_Stationlight_Key_K2Node_ComponentBoundEvent_1_OnIdentityLightTemplateUpdate__DelegateSignature(enum class ESanctuaryIdentity OldIdentity, enum class ESanctuaryIdentity NewIdentity, float BlendWeight); // Function BP_LightRig_NurturingStationBase.BP_LightRig_NurturingStationBase_C.BndEvt__BP_ID_Stationlight_Key_K2Node_ComponentBoundEvent_1_OnIdentityLightTemplateUpdate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_ID_Stationlight_Rim1_K2Node_ComponentBoundEvent_2_OnIdentityLightTemplateUpdate__DelegateSignature(enum class ESanctuaryIdentity OldIdentity, enum class ESanctuaryIdentity NewIdentity, float BlendWeight); // Function BP_LightRig_NurturingStationBase.BP_LightRig_NurturingStationBase_C.BndEvt__BP_ID_Stationlight_Rim1_K2Node_ComponentBoundEvent_2_OnIdentityLightTemplateUpdate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_LightRig_NurturingStationBase(int32_t EntryPoint); // Function BP_LightRig_NurturingStationBase.BP_LightRig_NurturingStationBase_C.ExecuteUbergraph_BP_LightRig_NurturingStationBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

