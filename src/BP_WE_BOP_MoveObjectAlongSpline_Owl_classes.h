// BlueprintGeneratedClass BP_WE_BOP_MoveObjectAlongSpline_Owl.BP_WE_BOP_MoveObjectAlongSpline_Owl_C
// Size: 0x350 (Inherited: 0x318)
struct ABP_WE_BOP_MoveObjectAlongSpline_Owl_C : ABP_WE_SplineMover_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	float GlideTimeline_glide_time_DCAA316F4B818BC18E403985F49B12AA; // 0x320(0x04)
	enum class ETimelineDirection GlideTimeline__Direction_DCAA316F4B818BC18E403985F49B12AA; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct UTimelineComponent* GlideTimeline; // 0x328(0x08)
	enum class E_WE_BOP_Preytype TypeOfPrey; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float GlideSpeedVelocity; // 0x334(0x04)
	float GlideAlpha; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct TScriptInterface<IBPI_WE_BirdOfPrey_C> As BPI Bird Of Prey; // 0x340(0x10)

	void GetBirdGlide(bool& Glide); // Function BP_WE_BOP_MoveObjectAlongSpline_Owl.BP_WE_BOP_MoveObjectAlongSpline_Owl_C.GetBirdGlide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GlideTimeline__FinishedFunc(); // Function BP_WE_BOP_MoveObjectAlongSpline_Owl.BP_WE_BOP_MoveObjectAlongSpline_Owl_C.GlideTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void GlideTimeline__UpdateFunc(); // Function BP_WE_BOP_MoveObjectAlongSpline_Owl.BP_WE_BOP_MoveObjectAlongSpline_Owl_C.GlideTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void GlideTimeline__EndGlide__EventFunc(); // Function BP_WE_BOP_MoveObjectAlongSpline_Owl.BP_WE_BOP_MoveObjectAlongSpline_Owl_C.GlideTimeline__EndGlide__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void SetBirdGlide(bool Glide?); // Function BP_WE_BOP_MoveObjectAlongSpline_Owl.BP_WE_BOP_MoveObjectAlongSpline_Owl_C.SetBirdGlide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerA(struct FVector Location); // Function BP_WE_BOP_MoveObjectAlongSpline_Owl.BP_WE_BOP_MoveObjectAlongSpline_Owl_C.Event_WE_TriggerA // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerB(struct FVector Location); // Function BP_WE_BOP_MoveObjectAlongSpline_Owl.BP_WE_BOP_MoveObjectAlongSpline_Owl_C.Event_WE_TriggerB // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_BOP_MoveObjectAlongSpline_Owl.BP_WE_BOP_MoveObjectAlongSpline_Owl_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_BOP_MoveObjectAlongSpline_Owl.BP_WE_BOP_MoveObjectAlongSpline_Owl_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_BOP_MoveObjectAlongSpline_Owl(int32_t EntryPoint); // Function BP_WE_BOP_MoveObjectAlongSpline_Owl.BP_WE_BOP_MoveObjectAlongSpline_Owl_C.ExecuteUbergraph_BP_WE_BOP_MoveObjectAlongSpline_Owl // (Final|UbergraphFunction) // @ game+0x38a7480
};

