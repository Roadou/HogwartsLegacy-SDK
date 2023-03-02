// BlueprintGeneratedClass BP_WE_BOP_MoveObjectAlongSpline_Hippogriff.BP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C
// Size: 0x350 (Inherited: 0x318)
struct ABP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C : ABP_WE_SplineMover_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	float SnapTimeline_glide_time_67BBD44F4C788A00078F77ADDECB1599; // 0x320(0x04)
	enum class ETimelineDirection SnapTimeline__Direction_67BBD44F4C788A00078F77ADDECB1599; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct UTimelineComponent* SnapTimeline; // 0x328(0x08)
	float GlideTimeline_glide_time_79A90E94406FA64DECEB919ADBEC5171; // 0x330(0x04)
	enum class ETimelineDirection GlideTimeline__Direction_79A90E94406FA64DECEB919ADBEC5171; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct UTimelineComponent* GlideTimeline; // 0x338(0x08)
	float GlideSpeedVelocity; // 0x340(0x04)
	float GlideAlpha; // 0x344(0x04)
	struct UABP_WE_BOP_Hippogriff_C* As ABP WE BOP Hippogriff; // 0x348(0x08)

	void GlideTimeline__FinishedFunc(); // Function BP_WE_BOP_MoveObjectAlongSpline_Hippogriff.BP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C.GlideTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void GlideTimeline__UpdateFunc(); // Function BP_WE_BOP_MoveObjectAlongSpline_Hippogriff.BP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C.GlideTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void GlideTimeline__EndGlide__EventFunc(); // Function BP_WE_BOP_MoveObjectAlongSpline_Hippogriff.BP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C.GlideTimeline__EndGlide__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void SnapTimeline__FinishedFunc(); // Function BP_WE_BOP_MoveObjectAlongSpline_Hippogriff.BP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C.SnapTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void SnapTimeline__UpdateFunc(); // Function BP_WE_BOP_MoveObjectAlongSpline_Hippogriff.BP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C.SnapTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerA(struct FVector Location); // Function BP_WE_BOP_MoveObjectAlongSpline_Hippogriff.BP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C.Event_WE_TriggerA // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerB(struct FVector Location); // Function BP_WE_BOP_MoveObjectAlongSpline_Hippogriff.BP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C.Event_WE_TriggerB // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_BOP_MoveObjectAlongSpline_Hippogriff.BP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_BOP_MoveObjectAlongSpline_Hippogriff.BP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_BOP_MoveObjectAlongSpline_Hippogriff(int32_t EntryPoint); // Function BP_WE_BOP_MoveObjectAlongSpline_Hippogriff.BP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C.ExecuteUbergraph_BP_WE_BOP_MoveObjectAlongSpline_Hippogriff // (Final|UbergraphFunction) // @ game+0x38a7480
};

