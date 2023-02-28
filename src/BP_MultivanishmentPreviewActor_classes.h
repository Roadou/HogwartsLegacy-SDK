// BlueprintGeneratedClass BP_MultivanishmentPreviewActor.BP_MultivanishmentPreviewActor_C
// Size: 0x450 (Inherited: 0x430)
struct ABP_MultivanishmentPreviewActor_C : ATransfigurationPreviewActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct USceneComponent* CentredMeshRoot; // 0x438(0x08)
	float ScaleDownTimeline_Scale_B912410A49773DD88DD5FA97F560C186; // 0x440(0x04)
	enum class ETimelineDirection ScaleDownTimeline__Direction_B912410A49773DD88DD5FA97F560C186; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	struct UTimelineComponent* ScaleDownTimeline; // 0x448(0x08)

	void ScaleDownTimeline__FinishedFunc(); // Function BP_MultivanishmentPreviewActor.BP_MultivanishmentPreviewActor_C.ScaleDownTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void ScaleDownTimeline__UpdateFunc(); // Function BP_MultivanishmentPreviewActor.BP_MultivanishmentPreviewActor_C.ScaleDownTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnVanishStart(); // Function BP_MultivanishmentPreviewActor.BP_MultivanishmentPreviewActor_C.OnVanishStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnPreviewMeshLoaded(); // Function BP_MultivanishmentPreviewActor.BP_MultivanishmentPreviewActor_C.OnPreviewMeshLoaded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MultivanishmentPreviewActor(int32_t EntryPoint); // Function BP_MultivanishmentPreviewActor.BP_MultivanishmentPreviewActor_C.ExecuteUbergraph_BP_MultivanishmentPreviewActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

