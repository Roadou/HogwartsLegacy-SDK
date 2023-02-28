// BlueprintGeneratedClass BP_FastTravel_PillarPlaque.BP_FastTravel_PillarPlaque_C
// Size: 0x16a1 (Inherited: 0x1680)
struct ABP_FastTravel_PillarPlaque_C : APillarPlaque_Character {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1680(0x08)
	struct UAkComponent* AkIgnatiaVoice; // 0x1688(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x1690(0x08)
	struct UBoxComponent* Box; // 0x1698(0x08)
	bool bSuppressDialogue; // 0x16a0(0x01)

	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_FastTravel_PillarPlaque.BP_FastTravel_PillarPlaque_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_FastTravel_PillarPlaque.BP_FastTravel_PillarPlaque_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_FastTravel_PillarPlaque.BP_FastTravel_PillarPlaque_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_FastTravel_PillarPlaque_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_FastTravel_PillarPlaque.BP_FastTravel_PillarPlaque_C.BndEvt__BP_FastTravel_PillarPlaque_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_FastTravel_PillarPlaque_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_FastTravel_PillarPlaque.BP_FastTravel_PillarPlaque_C.BndEvt__BP_FastTravel_PillarPlaque_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FastTravel_PillarPlaque.BP_FastTravel_PillarPlaque_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FastTravel_PillarPlaque(int32_t EntryPoint); // Function BP_FastTravel_PillarPlaque.BP_FastTravel_PillarPlaque_C.ExecuteUbergraph_BP_FastTravel_PillarPlaque // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

