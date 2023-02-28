// BlueprintGeneratedClass BP_ShadowBlinkTravelActor.BP_ShadowBlinkTravelActor_C
// Size: 0x261 (Inherited: 0x248)
struct ABP_ShadowBlinkTravelActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Sphere; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	bool IsTriggered; // 0x260(0x01)

	void ReceiveBeginPlay(); // Function BP_ShadowBlinkTravelActor.BP_ShadowBlinkTravelActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_ShadowBlinkTravelActor_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_ShadowBlinkTravelActor.BP_ShadowBlinkTravelActor_C.BndEvt__BP_ShadowBlinkTravelActor_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ShadowBlinkTravelActor(int32_t EntryPoint); // Function BP_ShadowBlinkTravelActor.BP_ShadowBlinkTravelActor_C.ExecuteUbergraph_BP_ShadowBlinkTravelActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

