// BlueprintGeneratedClass BP_WE_TF_MoveObjectAlongSpline_Thestral.BP_WE_TF_MoveObjectAlongSpline_Thestral_C
// Size: 0x370 (Inherited: 0x318)
struct ABP_WE_TF_MoveObjectAlongSpline_Thestral_C : ABP_WE_SplineMover_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	float GlideTimeline_glide_time_62D998EE45F784B99A2721AD96884C7C; // 0x320(0x04)
	enum class ETimelineDirection GlideTimeline__Direction_62D998EE45F784B99A2721AD96884C7C; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct UTimelineComponent* GlideTimeline; // 0x328(0x08)
	bool IsChild; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float GlideSpeedVelocity; // 0x334(0x04)
	float StartTime; // 0x338(0x04)
	float FlatRate_MIN; // 0x33c(0x04)
	float FlatRate_MAX; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct UAkAudioEvent* SoundFX; // 0x348(0x08)
	float GlideAlpha; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct TScriptInterface<IBPI_WE_ThestralFamily_C> As BPI WE Thestral Family; // 0x358(0x10)
	struct ABP_WE_GenericSpline_C* SplineAlt; // 0x368(0x08)

	void GlideTimeline__FinishedFunc(); // Function BP_WE_TF_MoveObjectAlongSpline_Thestral.BP_WE_TF_MoveObjectAlongSpline_Thestral_C.GlideTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void GlideTimeline__UpdateFunc(); // Function BP_WE_TF_MoveObjectAlongSpline_Thestral.BP_WE_TF_MoveObjectAlongSpline_Thestral_C.GlideTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_TF_MoveObjectAlongSpline_Thestral.BP_WE_TF_MoveObjectAlongSpline_Thestral_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerA(struct FVector Location); // Function BP_WE_TF_MoveObjectAlongSpline_Thestral.BP_WE_TF_MoveObjectAlongSpline_Thestral_C.Event_WE_TriggerA // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerB(struct FVector Location); // Function BP_WE_TF_MoveObjectAlongSpline_Thestral.BP_WE_TF_MoveObjectAlongSpline_Thestral_C.Event_WE_TriggerB // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_TF_MoveObjectAlongSpline_Thestral.BP_WE_TF_MoveObjectAlongSpline_Thestral_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_TF_MoveObjectAlongSpline_Thestral(int32_t EntryPoint); // Function BP_WE_TF_MoveObjectAlongSpline_Thestral.BP_WE_TF_MoveObjectAlongSpline_Thestral_C.ExecuteUbergraph_BP_WE_TF_MoveObjectAlongSpline_Thestral // (Final|UbergraphFunction) // @ game+0x38a7480
};

