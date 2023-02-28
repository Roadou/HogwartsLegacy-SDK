// BlueprintGeneratedClass BP_Clock.BP_Clock_C
// Size: 0x310 (Inherited: 0x248)
struct ABP_Clock_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct USceneComponent* ViewCheck; // 0x258(0x08)
	struct UStaticMeshComponent* SM_MinuteHand; // 0x260(0x08)
	struct UStaticMeshComponent* SM_HourHand; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float MinuteTimeline_Alpha_5DA8696E4D6F9CE552A49A8E250327E8; // 0x278(0x04)
	enum class ETimelineDirection MinuteTimeline__Direction_5DA8696E4D6F9CE552A49A8E250327E8; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* MinuteTimeline; // 0x280(0x08)
	float HourTImeline_Alpha_AEBE18A54C9AB1D5F60EBBA7410137C3; // 0x288(0x04)
	enum class ETimelineDirection HourTImeline__Direction_AEBE18A54C9AB1D5F60EBBA7410137C3; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* HourTImeline; // 0x290(0x08)
	struct TArray<int32_t> handlesForTimeEvent; // 0x298(0x10)
	struct FRotator desiredMinuteRot; // 0x2a8(0x0c)
	struct FRotator currentMinuteRot; // 0x2b4(0x0c)
	struct FRotator desiredHourRot; // 0x2c0(0x0c)
	struct FRotator currentHourRot; // 0x2cc(0x0c)
	struct UStaticMesh* HourHand; // 0x2d8(0x08)
	struct UStaticMesh* MinuteHand; // 0x2e0(0x08)
	bool xNegative; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	int32_t Hour; // 0x2ec(0x04)
	int32_t Minute; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct ABP_Clocktower_C* Gears; // 0x2f8(0x08)
	struct FVector viewCheckWorldPosition; // 0x300(0x0c)
	bool bFrozen; // 0x30c(0x01)
	bool bGearsFrozen; // 0x30d(0x01)
	bool bArresto; // 0x30e(0x01)
	bool bGearsArresto; // 0x30f(0x01)

	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_Clock.BP_Clock_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowArrestoMomentum(); // Function BP_Clock.BP_Clock_C.DisallowArrestoMomentum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitialRotation(); // Function BP_Clock.BP_Clock_C.SetInitialRotation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Clock.BP_Clock_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HourTImeline__FinishedFunc(); // Function BP_Clock.BP_Clock_C.HourTImeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void HourTImeline__UpdateFunc(); // Function BP_Clock.BP_Clock_C.HourTImeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void MinuteTimeline__FinishedFunc(); // Function BP_Clock.BP_Clock_C.MinuteTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void MinuteTimeline__UpdateFunc(); // Function BP_Clock.BP_Clock_C.MinuteTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_Clock.BP_Clock_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_Clock.BP_Clock_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Clock.BP_Clock_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Clock.BP_Clock_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void UpdateHour(struct FTimeEvent& InTimeEvent); // Function BP_Clock.BP_Clock_C.UpdateHour // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateMinute(struct FTimeEvent& InTimeEvent); // Function BP_Clock.BP_Clock_C.UpdateMinute // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_Clock.BP_Clock_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Gears_K2Node_ComponentBoundEvent_0_Frozen__DelegateSignature(bool bFreeze, struct AActor* Instigator); // Function BP_Clock.BP_Clock_C.BndEvt__Gears_K2Node_ComponentBoundEvent_0_Frozen__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumBegin(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation); // Function BP_Clock.BP_Clock_C.OnArrestoMomentumBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumEnd(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent); // Function BP_Clock.BP_Clock_C.OnArrestoMomentumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Gears_K2Node_ComponentBoundEvent_1_Arresto__DelegateSignature(float Duration); // Function BP_Clock.BP_Clock_C.BndEvt__Gears_K2Node_ComponentBoundEvent_1_Arresto__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Gears_K2Node_ComponentBoundEvent_2_ArrestoEnd__DelegateSignature(); // Function BP_Clock.BP_Clock_C.BndEvt__Gears_K2Node_ComponentBoundEvent_2_ArrestoEnd__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Clock(int32_t EntryPoint); // Function BP_Clock.BP_Clock_C.ExecuteUbergraph_BP_Clock // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

