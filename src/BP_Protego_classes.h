// BlueprintGeneratedClass BP_Protego.BP_Protego_C
// Size: 0x260 (Inherited: 0x248)
struct ABP_Protego_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCapsuleComponent* bLocked; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)

	void ReceiveBeginPlay(); // Function BP_Protego.BP_Protego_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Protego.BP_Protego_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void MunitionImpact(struct UObject* Caller, struct FMunitionImpactData& MunitionImpactData); // Function BP_Protego.BP_Protego_C.MunitionImpact // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Blocked_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Protego.BP_Protego_C.BndEvt__Blocked_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Protego(int32_t EntryPoint); // Function BP_Protego.BP_Protego_C.ExecuteUbergraph_BP_Protego // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

