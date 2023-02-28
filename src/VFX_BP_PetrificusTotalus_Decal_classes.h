// BlueprintGeneratedClass VFX_BP_PetrificusTotalus_Decal.VFX_BP_PetrificusTotalus_Decal_C
// Size: 0x2b0 (Inherited: 0x248)
struct AVFX_BP_PetrificusTotalus_Decal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UDecalComponent* Decal; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float Timeline_SplatAlpha_NewTrack_0_526B24E6473A4FB9E32F32ACD4E38DA7; // 0x260(0x04)
	float Timeline_SplatAlpha_NewTrack_2_526B24E6473A4FB9E32F32ACD4E38DA7; // 0x264(0x04)
	enum class ETimelineDirection Timeline_SplatAlpha__Direction_526B24E6473A4FB9E32F32ACD4E38DA7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct UTimelineComponent* Timeline_SplatAlpha; // 0x270(0x08)
	float Timeline_0_NewTrack_0_52395EC249D2C39E13B7ECB697E78021; // 0x278(0x04)
	enum class ETimelineDirection Timeline_0__Direction_52395EC249D2C39E13B7ECB697E78021; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x280(0x08)
	float Timeline_Emissive_NewTrack_0_602A760C4CD800AFCC1A3BA17D51707A; // 0x288(0x04)
	enum class ETimelineDirection Timeline_Emissive__Direction_602A760C4CD800AFCC1A3BA17D51707A; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* Timeline_Emissive; // 0x290(0x08)
	struct UMaterialInstanceDynamic* Decal_Mat; // 0x298(0x08)
	struct UMeshComponent* decal_Splat; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* Decal_Splatter; // 0x2a8(0x08)

	void UserConstructionScript(); // Function VFX_BP_PetrificusTotalus_Decal.VFX_BP_PetrificusTotalus_Decal_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_Emissive__FinishedFunc(); // Function VFX_BP_PetrificusTotalus_Decal.VFX_BP_PetrificusTotalus_Decal_C.Timeline_Emissive__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_Emissive__UpdateFunc(); // Function VFX_BP_PetrificusTotalus_Decal.VFX_BP_PetrificusTotalus_Decal_C.Timeline_Emissive__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function VFX_BP_PetrificusTotalus_Decal.VFX_BP_PetrificusTotalus_Decal_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function VFX_BP_PetrificusTotalus_Decal.VFX_BP_PetrificusTotalus_Decal_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_SplatAlpha__FinishedFunc(); // Function VFX_BP_PetrificusTotalus_Decal.VFX_BP_PetrificusTotalus_Decal_C.Timeline_SplatAlpha__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_SplatAlpha__UpdateFunc(); // Function VFX_BP_PetrificusTotalus_Decal.VFX_BP_PetrificusTotalus_Decal_C.Timeline_SplatAlpha__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_PetrificusTotalus_Decal.VFX_BP_PetrificusTotalus_Decal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_PetrificusTotalus_Decal(int32_t EntryPoint); // Function VFX_BP_PetrificusTotalus_Decal.VFX_BP_PetrificusTotalus_Decal_C.ExecuteUbergraph_VFX_BP_PetrificusTotalus_Decal // (Final|UbergraphFunction) // @ game+0x38a7480
};

