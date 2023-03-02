// BlueprintGeneratedClass BP_FireflyShow.BP_FireflyShow_C
// Size: 0x2c1 (Inherited: 0x280)
struct ABP_FireflyShow_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USphereComponent* Sphere; // 0x288(0x08)
	struct UNiagaraComponent* Niagara; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float Timeline_0_NewTrack_0_016AA87F46DF93A694A9069EE343EC9D; // 0x2a0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_016AA87F46DF93A694A9069EE343EC9D; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2a8(0x08)
	bool EventIsLocked?; // 0x2b0(0x01)
	bool EventIsBusy?; // 0x2b1(0x01)
	char pad_2B2[0x6]; // 0x2b2(0x06)
	struct USphereComponent* Sphere collider; // 0x2b8(0x08)
	bool EventIsIlluminated?; // 0x2c0(0x01)

	bool DisableLightInteraction(); // Function BP_FireflyShow.BP_FireflyShow_C.DisableLightInteraction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisableLightRaytrace(); // Function BP_FireflyShow.BP_FireflyShow_C.DisableLightRaytrace // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reset Sphere Collider(); // Function BP_FireflyShow.BP_FireflyShow_C.Reset Sphere Collider // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_FireflyShow.BP_FireflyShow_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_FireflyShow.BP_FireflyShow_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnEnteredLightProximity(struct AActor* LumosBP); // Function BP_FireflyShow.BP_FireflyShow_C.OnEnteredLightProximity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredNearby(struct AActor* LumosBP); // Function BP_FireflyShow.BP_FireflyShow_C.OnEnteredNearby // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedLightProximity(struct AActor* LumosBP); // Function BP_FireflyShow.BP_FireflyShow_C.OnExitedLightProximity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedNearby(); // Function BP_FireflyShow.BP_FireflyShow_C.OnExitedNearby // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_FireflyShow.BP_FireflyShow_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_FireflyShow.BP_FireflyShow_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_FireflyShow.BP_FireflyShow_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_FireflyShow.BP_FireflyShow_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_FireflyShow.BP_FireflyShow_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_FireflyShow.BP_FireflyShow_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TriggerFireflies(struct FString Spell Effect, bool AllowEventToContinue?, float BusyDuration); // Function BP_FireflyShow.BP_FireflyShow_C.TriggerFireflies // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_FireflyShow.BP_FireflyShow_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredLight(struct AActor* LumosBP, bool bPlayerOwned); // Function BP_FireflyShow.BP_FireflyShow_C.OnEnteredLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FireflyShow.BP_FireflyShow_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnExitedLight(struct AActor* LumosBP, bool bPlayerOwned); // Function BP_FireflyShow.BP_FireflyShow_C.OnExitedLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_FireflyShow.BP_FireflyShow_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FireflyShow(int32_t EntryPoint); // Function BP_FireflyShow.BP_FireflyShow_C.ExecuteUbergraph_BP_FireflyShow // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

