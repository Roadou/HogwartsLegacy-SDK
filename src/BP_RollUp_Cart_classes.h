// BlueprintGeneratedClass BP_RollUp_Cart.BP_RollUp_Cart_C
// Size: 0x428 (Inherited: 0x248)
struct ABP_RollUp_Cart_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* CollisionBox6; // 0x250(0x08)
	struct UBoxComponent* CollisionBox5; // 0x258(0x08)
	struct UBoxComponent* CollisionBox4; // 0x260(0x08)
	struct UBoxComponent* CollisionBox3; // 0x268(0x08)
	struct UBoxComponent* CollisionBox2; // 0x270(0x08)
	struct UBoxComponent* CollisionBox1; // 0x278(0x08)
	struct UStaticMeshComponent* Rug_Collision; // 0x280(0x08)
	struct UStaticMeshComponent* Cone1; // 0x288(0x08)
	struct UStaticMeshComponent* Cone; // 0x290(0x08)
	struct UBoxComponent* CollisionBox; // 0x298(0x08)
	struct UChildActorComponent* Interior; // 0x2a0(0x08)
	struct USceneComponent* BeaconLocation; // 0x2a8(0x08)
	struct UAkComponent* Ak_Music_location; // 0x2b0(0x08)
	struct USphereComponent* PlayerAnimProximity; // 0x2b8(0x08)
	struct UArrowComponent* Arrow; // 0x2c0(0x08)
	struct USceneComponent* UnpackedCollision; // 0x2c8(0x08)
	struct UPointLightComponent* PointLight; // 0x2d0(0x08)
	struct USceneComponent* VFX; // 0x2d8(0x08)
	struct USpotLightComponent* SpotLight; // 0x2e0(0x08)
	struct UStaticMeshComponent* Decal; // 0x2e8(0x08)
	struct UPointLightComponent* PointLight1; // 0x2f0(0x08)
	struct USkeletalMeshComponent* Cart; // 0x2f8(0x08)
	struct USceneComponent* Scene; // 0x300(0x08)
	struct UNiagaraComponent* Sparkler11; // 0x308(0x08)
	struct UNiagaraComponent* Sparkler10; // 0x310(0x08)
	struct UNiagaraComponent* Sparkler9; // 0x318(0x08)
	struct UNiagaraComponent* Sparkler8; // 0x320(0x08)
	struct UNiagaraComponent* Sparkler7; // 0x328(0x08)
	struct UNiagaraComponent* Sparkler6; // 0x330(0x08)
	struct UNiagaraComponent* Sparkler5; // 0x338(0x08)
	struct UNiagaraComponent* Sparkler4; // 0x340(0x08)
	struct UNiagaraComponent* Sparkler3; // 0x348(0x08)
	struct UNiagaraComponent* Sparkler2; // 0x350(0x08)
	struct UNiagaraComponent* Sparkler1; // 0x358(0x08)
	struct UNiagaraComponent* Sparkler; // 0x360(0x08)
	struct UNiagaraComponent* CandleFlame9; // 0x368(0x08)
	struct UNiagaraComponent* CandleFlame8; // 0x370(0x08)
	struct UNiagaraComponent* CandleFlame7; // 0x378(0x08)
	struct UNiagaraComponent* CandleFlame6; // 0x380(0x08)
	struct UNiagaraComponent* CandleFlame5; // 0x388(0x08)
	struct UNiagaraComponent* CandleFlame4; // 0x390(0x08)
	struct UNiagaraComponent* CandleFlame3; // 0x398(0x08)
	struct UNiagaraComponent* CandleFlame2; // 0x3a0(0x08)
	struct UNiagaraComponent* CandleFlame1; // 0x3a8(0x08)
	struct UNiagaraComponent* CandleFlame; // 0x3b0(0x08)
	struct UBoxComponent* Box15; // 0x3b8(0x08)
	struct UBoxComponent* Box14; // 0x3c0(0x08)
	struct UBoxComponent* Box11; // 0x3c8(0x08)
	struct UBoxComponent* Box10; // 0x3d0(0x08)
	struct UBoxComponent* Box9; // 0x3d8(0x08)
	struct UBoxComponent* Box8; // 0x3e0(0x08)
	struct UBoxComponent* Box5; // 0x3e8(0x08)
	struct UBoxComponent* Box4; // 0x3f0(0x08)
	struct UBoxComponent* Box3; // 0x3f8(0x08)
	struct UBoxComponent* Box2; // 0x400(0x08)
	struct UAnimationArchitectComponent* AnimationArchitect; // 0x408(0x08)
	struct UABP_RollUp_Cart_C* ABP Cart; // 0x410(0x08)
	bool IsClosing; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct FTimerHandle Pack Up Timer; // 0x420(0x08)

	void OnLoaded_96DFB4EE4E8E9383174AE09893799EAF(struct UObject* Loaded); // Function BP_RollUp_Cart.BP_RollUp_Cart_C.OnLoaded_96DFB4EE4E8E9383174AE09893799EAF // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_RollUp_Cart.BP_RollUp_Cart_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__PlayerAnimProximity_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_RollUp_Cart.BP_RollUp_Cart_C.BndEvt__PlayerAnimProximity_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ActivateCandles(); // Function BP_RollUp_Cart.BP_RollUp_Cart_C.ActivateCandles // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RepackCart(); // Function BP_RollUp_Cart.BP_RollUp_Cart_C.RepackCart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_RollUp_Cart.BP_RollUp_Cart_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_RollUp_Vendor_Cart_PlayerAnimProximity_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_RollUp_Cart.BP_RollUp_Cart_C.BndEvt__BP_RollUp_Vendor_Cart_PlayerAnimProximity_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void CartUnpacked(); // Function BP_RollUp_Cart.BP_RollUp_Cart_C.CartUnpacked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CartFullSize(); // Function BP_RollUp_Cart.BP_RollUp_Cart_C.CartFullSize // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RepackCurtainsClosed(); // Function BP_RollUp_Cart.BP_RollUp_Cart_C.RepackCurtainsClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_RollUp_Cart(int32_t EntryPoint); // Function BP_RollUp_Cart.BP_RollUp_Cart_C.ExecuteUbergraph_BP_RollUp_Cart // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

