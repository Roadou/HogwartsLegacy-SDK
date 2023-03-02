// BlueprintGeneratedClass BP_AmbientResponsiveEffects.BP_AmbientResponsiveEffects_C
// Size: 0x2a4 (Inherited: 0x248)
struct ABP_AmbientResponsiveEffects_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* Box; // 0x250(0x08)
	struct UParticleSystemComponent* P_BirdsSmallBurst; // 0x258(0x08)
	struct UBillboardComponent* Billboard; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	struct ATriggerVolume* TriggerVolumePlayParticle; // 0x270(0x08)
	bool ParticleAreaTrigger; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct ATriggerVolume* TriggerVolumePlayerArea; // 0x280(0x08)
	bool ReactivateParticle; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	struct FVector Box Size; // 0x28c(0x0c)
	struct FVector ParticleSpawnLocation; // 0x298(0x0c)

	void UserConstructionScript(); // Function BP_AmbientResponsiveEffects.BP_AmbientResponsiveEffects_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerEnteredTriggerArea(); // Function BP_AmbientResponsiveEffects.BP_AmbientResponsiveEffects_C.PlayerEnteredTriggerArea // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_AmbientResponsiveEffects.BP_AmbientResponsiveEffects_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerVolumePlayParticle_K2Node_ComponentBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_AmbientResponsiveEffects.BP_AmbientResponsiveEffects_C.BndEvt__TriggerVolumePlayParticle_K2Node_ComponentBoundEvent_3_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AmbientResponsiveEffects(int32_t EntryPoint); // Function BP_AmbientResponsiveEffects.BP_AmbientResponsiveEffects_C.ExecuteUbergraph_BP_AmbientResponsiveEffects // (Final|UbergraphFunction) // @ game+0x38a7480
};

