// BlueprintGeneratedClass BP_OWL_SplineMover.BP_OWL_SplineMover_C
// Size: 0x291 (Inherited: 0x248)
struct ABP_OWL_SplineMover_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float Timeline_0_Alpha_0C04BD8D471B05FABEBAD38C8422D3C3; // 0x260(0x04)
	enum class ETimelineDirection Timeline_0__Direction_0C04BD8D471B05FABEBAD38C8422D3C3; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* Timeline_1; // 0x268(0x08)
	bool Activate; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float Alpha; // 0x274(0x04)
	struct ABP_WE_GenericSpline_C* Owls Spline; // 0x278(0x08)
	float Duration; // 0x280(0x04)
	float Offset; // 0x284(0x04)
	struct ATriggerBox* Box Trigger; // 0x288(0x08)
	bool Visibility; // 0x290(0x01)

	void UserConstructionScript(); // Function BP_OWL_SplineMover.BP_OWL_SplineMover_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_OWL_SplineMover.BP_OWL_SplineMover_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_OWL_SplineMover.BP_OWL_SplineMover_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box Trigger_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_OWL_SplineMover.BP_OWL_SplineMover_C.BndEvt__Box Trigger_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Move Owl(); // Function BP_OWL_SplineMover.BP_OWL_SplineMover_C.Move Owl // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OWL_SplineMover(int32_t EntryPoint); // Function BP_OWL_SplineMover.BP_OWL_SplineMover_C.ExecuteUbergraph_BP_OWL_SplineMover // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

