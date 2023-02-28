// BlueprintGeneratedClass BP_HW_Fireplace_Interact.BP_HW_Fireplace_Interact_C
// Size: 0x384 (Inherited: 0x2d8)
struct ABP_HW_Fireplace_Interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UPointLightComponent* PointLight; // 0x2e0(0x08)
	struct UStaticMeshComponent* FireplaceMesh; // 0x2e8(0x08)
	struct UNiagaraComponent* Niagara_FirePlace; // 0x2f0(0x08)
	struct UNiagaraComponent* Niagara_FireBurst; // 0x2f8(0x08)
	struct UNiagaraComponent* Niagara_UnlitTorch_Smoke; // 0x300(0x08)
	struct USceneComponent* ForTag; // 0x308(0x08)
	struct UObjectStateComponent* ObjectState; // 0x310(0x08)
	float Timeline_0_Intencity_Track_5860F036422B1D8378CF918D7A7137FD; // 0x318(0x04)
	enum class ETimelineDirection Timeline_0__Direction_5860F036422B1D8378CF918D7A7137FD; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x320(0x08)
	bool FireOn; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FHermesBPDelegateHandle MessageHandle; // 0x330(0x10)
	struct FString Burst; // 0x340(0x10)
	int32_t BurstListID; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct UNiagaraComponent* Array Element Burst; // 0x358(0x08)
	struct FString Fire; // 0x360(0x10)
	int32_t FireListID; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct UNiagaraComponent* Array Element Fire; // 0x378(0x08)
	float Fireplace_burst_intensity; // 0x380(0x04)

	bool DecreaseFire(float decreaseAmount); // Function BP_HW_Fireplace_Interact.BP_HW_Fireplace_Interact_C.DecreaseFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_HW_Fireplace_Interact.BP_HW_Fireplace_Interact_C.IncreaseFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_HW_Fireplace_Interact.BP_HW_Fireplace_Interact_C.IsPointOnFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_HW_Fireplace_Interact.BP_HW_Fireplace_Interact_C.StartFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_HW_Fireplace_Interact.BP_HW_Fireplace_Interact_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_HW_Fireplace_Interact.BP_HW_Fireplace_Interact_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_Fireplace_Interact.BP_HW_Fireplace_Interact_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void PlayerCastSpell(struct UObject* Caller); // Function BP_HW_Fireplace_Interact.BP_HW_Fireplace_Interact_C.PlayerCastSpell // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HW_Fireplace_Interact.BP_HW_Fireplace_Interact_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_Fireplace_Interact.BP_HW_Fireplace_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Fireplace_Interact(int32_t EntryPoint); // Function BP_HW_Fireplace_Interact.BP_HW_Fireplace_Interact_C.ExecuteUbergraph_BP_HW_Fireplace_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

