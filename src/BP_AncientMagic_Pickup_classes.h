// BlueprintGeneratedClass BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C
// Size: 0x399 (Inherited: 0x248)
struct ABP_AncientMagic_Pickup_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UAkComponent* ancient_magic_picup_loop_start; // 0x258(0x08)
	struct UNiagaraComponent* N_HotspotSplineTrail; // 0x260(0x08)
	struct UNiagaraComponent* N_Metaballs; // 0x268(0x08)
	struct UNiagaraComponent* N_Decal; // 0x270(0x08)
	struct UNiagaraComponent* N_GroundBurst; // 0x278(0x08)
	struct UNiagaraComponent* N_Bubbles; // 0x280(0x08)
	struct UNiagaraComponent* N_GooRibbons; // 0x288(0x08)
	struct UBoxComponent* Decal_LOC; // 0x290(0x08)
	struct UStaticMeshComponent* VFX_SM_AM_Pickup; // 0x298(0x08)
	struct UNiagaraComponent* PickupParticle; // 0x2a0(0x08)
	struct USceneComponent* VFX; // 0x2a8(0x08)
	struct USphereComponent* DetectSphere; // 0x2b0(0x08)
	struct USphereComponent* Root; // 0x2b8(0x08)
	float WipeIn_Timeline_Pickup_WipeIn_6D8BA4C54871C568892F0F85484CA8C2; // 0x2c0(0x04)
	enum class ETimelineDirection WipeIn_Timeline__Direction_6D8BA4C54871C568892F0F85484CA8C2; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* WipeIn_Timeline; // 0x2c8(0x08)
	float VFX_Follow_Suckin_1C2AC679434F2DD6C5A6DE86F99CC25E; // 0x2d0(0x04)
	enum class ETimelineDirection VFX_Follow__Direction_1C2AC679434F2DD6C5A6DE86F99CC25E; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct UTimelineComponent* VFX_Follow; // 0x2d8(0x08)
	bool bBroken; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct AActor* Player; // 0x2e8(0x08)
	float FinisherPercent; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FMulticastInlineDelegate PickupAbsorbed; // 0x2f8(0x10)
	struct UMaterialInstanceDynamic* MAT_Pickup; // 0x308(0x08)
	bool VFX_TraceFoundTerrain; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	float VFX_WispAlpha; // 0x314(0x04)
	struct UMaterialInstanceDynamic* MAT_Decal; // 0x318(0x08)
	float MetaballRadius; // 0x320(0x04)
	float HoverScale; // 0x324(0x04)
	float SpriteSizeScale; // 0x328(0x04)
	int32_t Particles; // 0x32c(0x04)
	struct FDynamicLightAdaptationSettings Settings; // 0x330(0x60)
	struct FRandomStream Random Seed; // 0x390(0x08)
	bool VFX_UseBeacon; // 0x398(0x01)

	void Shutdown(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.Shutdown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reveal(bool bReveal, struct AActor* Player); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.Reveal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Deactivate(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.Deactivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Activate(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.Activate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Follow__FinishedFunc(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.VFX_Follow__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void VFX_Follow__UpdateFunc(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.VFX_Follow__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void WipeIn_Timeline__FinishedFunc(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.WipeIn_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void WipeIn_Timeline__UpdateFunc(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.WipeIn_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void WipeIn_Timeline__Burst__EventFunc(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.WipeIn_Timeline__Burst__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Root_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.BndEvt__Root_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void VFX_Collect(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.VFX_Collect // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Shutdown(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.VFX_Shutdown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Activate(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.VFX_Activate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Deactivate(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.VFX_Deactivate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Setup(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.VFX_Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_AncientMagic_Pickup_DetectSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.BndEvt__BP_AncientMagic_Pickup_DetectSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void VFX_SplineTrailSetup(struct FVector HotspotLocation); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.VFX_SplineTrailSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AncientMagic_Pickup(int32_t EntryPoint); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.ExecuteUbergraph_BP_AncientMagic_Pickup // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PickupAbsorbed__DelegateSignature(); // Function BP_AncientMagic_Pickup.BP_AncientMagic_Pickup_C.PickupAbsorbed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

