// BlueprintGeneratedClass BP_Audio_Pond_Spline.BP_Audio_Pond_Spline_C
// Size: 0x298 (Inherited: 0x248)
struct ABP_Audio_Pond_Spline_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USplineComponent* Spline; // 0x250(0x08)
	struct UBoxComponent* ActivateAudioBox; // 0x258(0x08)
	struct UAkComponent* Ak; // 0x260(0x08)
	float YDiff; // 0x268(0x04)
	struct FVector AudioLoc; // 0x26c(0x0c)
	struct FVector PlayerLoc; // 0x278(0x0c)
	char pad_284[0x4]; // 0x284(0x04)
	struct UAkAudioEvent* LoopAudioEvent; // 0x288(0x08)
	struct ABiped_Player* Player; // 0x290(0x08)

	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_Audio_Pond_Spline.BP_Audio_Pond_Spline_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Audio_Pond_Spline.BP_Audio_Pond_Spline_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Audio_Pond_Spline.BP_Audio_Pond_Spline_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_Audio_Pond_Spline.BP_Audio_Pond_Spline_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_Audio_Pond_Spline.BP_Audio_Pond_Spline_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ActivateBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Audio_Pond_Spline.BP_Audio_Pond_Spline_C.BndEvt__ActivateBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ActivateBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Audio_Pond_Spline.BP_Audio_Pond_Spline_C.BndEvt__ActivateBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Audio_Pond_Spline(int32_t EntryPoint); // Function BP_Audio_Pond_Spline.BP_Audio_Pond_Spline_C.ExecuteUbergraph_BP_Audio_Pond_Spline // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

