// BlueprintGeneratedClass BP_KickupDebris.BP_KickupDebris_C
// Size: 0x2a0 (Inherited: 0x248)
struct ABP_KickupDebris_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x250(0x08)
	enum class E_Hog_CamTriggerShape TrigShape; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct ABiped_Player* Player; // 0x260(0x08)
	struct ABP_XS_Rock_C* ToDestroy; // 0x268(0x08)
	struct TArray<struct ABP_XS_Rock_C*> Debris; // 0x270(0x10)
	struct UParticleSystemComponent* Particle_Rock_FootLeft; // 0x280(0x08)
	struct UParticleSystemComponent* Particle_Rock_FootRight; // 0x288(0x08)
	struct UParticleSystemComponent* Particle_Rock_Hip; // 0x290(0x08)
	struct UParticleSystemComponent* Particle_Dust_Hip; // 0x298(0x08)

	void UserConstructionScript(); // Function BP_KickupDebris.BP_KickupDebris_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_KickupDebris.BP_KickupDebris_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Rain(); // Function BP_KickupDebris.BP_KickupDebris_C.Rain // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Kill(); // Function BP_KickupDebris.BP_KickupDebris_C.Kill // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_KickupDebris.BP_KickupDebris_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_KickupDebris.BP_KickupDebris_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_KickupDebris(int32_t EntryPoint); // Function BP_KickupDebris.BP_KickupDebris_C.ExecuteUbergraph_BP_KickupDebris // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

