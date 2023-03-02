// BlueprintGeneratedClass BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C
// Size: 0x3c0 (Inherited: 0x318)
struct ABP_WE_STS_MoveObjectAlongSpline_Hippogriff_C : ABP_WE_SplineMover_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAkComponent* Ak; // 0x320(0x08)
	struct USphereComponent* Claw_Colision; // 0x328(0x08)
	struct USkeletalMeshComponent* Fish; // 0x330(0x08)
	float Timeline_1_flutter_8C66C4E540D84B8C5B321780532F847F; // 0x338(0x04)
	enum class ETimelineDirection Timeline_1__Direction_8C66C4E540D84B8C5B321780532F847F; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x340(0x08)
	float Timeline_0_glide_time_233F86134F2AD95471DB8E9781F4DDFE; // 0x348(0x04)
	enum class ETimelineDirection Timeline_0__Direction_233F86134F2AD95471DB8E9781F4DDFE; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x350(0x08)
	float GlideSpeedVelocity; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct ATriggerBox* VFX_Trigger_Box; // 0x360(0x08)
	float GlideAlpha; // 0x368(0x04)
	struct FVector VFX Location; // 0x36c(0x0c)
	struct FObjectFadeParamsSpeedDuration Fade Out Creatures; // 0x378(0x0c)
	char pad_384[0x4]; // 0x384(0x04)
	struct UParticleSystemComponent* VFX_Water; // 0x388(0x08)
	struct FTimerHandle VFX_DeleteCooldown; // 0x390(0x08)
	struct UParticleSystemComponent* VFX_Splash; // 0x398(0x08)
	struct UABP_WE_STS_Hippogriff_C* As ABP WE STS Hippogriff; // 0x3a0(0x08)
	struct UABP_WE_STS_Fish_C* As ABP WE STS Fish; // 0x3a8(0x08)
	struct TArray<struct FName> VFX_Emitters; // 0x3b0(0x10)

	void MakeBoxTrigger(struct FDelegate& Event); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.MakeBoxTrigger // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerEvent(struct AActor* OtherActor); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.TriggerEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerA(struct FVector Location); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.Event_WE_TriggerA // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerB(struct FVector Location); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.Event_WE_TriggerB // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_Fade(struct FVector Location); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.Event_WE_Fade // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Play_Fish_VFX(); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.Play_Fish_VFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Claw_Colision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.BndEvt__Claw_Colision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Claw_Colision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.BndEvt__Claw_Colision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void CleanUp_VFX(); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.CleanUp_VFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SocketTriggerOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.SocketTriggerOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BoxTriggerOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.BoxTriggerOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_STS_MoveObjectAlongSpline_Hippogriff(int32_t EntryPoint); // Function BP_WE_STS_MoveObjectAlongSpline_Hippogriff.BP_WE_STS_MoveObjectAlongSpline_Hippogriff_C.ExecuteUbergraph_BP_WE_STS_MoveObjectAlongSpline_Hippogriff // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

