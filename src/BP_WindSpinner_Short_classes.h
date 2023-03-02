// BlueprintGeneratedClass BP_WindSpinner_Short.BP_WindSpinner_Short_C
// Size: 0x368 (Inherited: 0x248)
struct ABP_WindSpinner_Short_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPointLightComponent* PointLight1; // 0x250(0x08)
	struct UAkComponent* Ak_BP_WindSpinner_Short; // 0x258(0x08)
	struct USceneComponent* SharedRoot; // 0x260(0x08)
	struct USpotLightComponent* SpotLight; // 0x268(0x08)
	struct UStaticMeshComponent* HitBox; // 0x270(0x08)
	struct UObjectStateComponent* ObjectState; // 0x278(0x08)
	struct UStaticMeshComponent* Base; // 0x280(0x08)
	struct UStaticMeshComponent* Spinner; // 0x288(0x08)
	float Timeline_1_NewTrack_0_0C2056ED44101EA85DA915A022341160; // 0x290(0x04)
	enum class ETimelineDirection Timeline_1__Direction_0C2056ED44101EA85DA915A022341160; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Timeline_2; // 0x298(0x08)
	float Timeline_0_NewTrack_0_CD11460E487F76A80ADBEC8DE97C861E; // 0x2a0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_CD11460E487F76A80ADBEC8DE97C861E; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2a8(0x08)
	float PulseTimeline_NewTrack_0_B43E1D764EE92AEA70224691A82B926B; // 0x2b0(0x04)
	enum class ETimelineDirection PulseTimeline__Direction_B43E1D764EE92AEA70224691A82B926B; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* PulseTimeline; // 0x2b8(0x08)
	float MaxRotationTimeline_NewTrack_0_4579CB9942D6D6445DC219AB7AB6787B; // 0x2c0(0x04)
	enum class ETimelineDirection MaxRotationTimeline__Direction_4579CB9942D6D6445DC219AB7AB6787B; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* MaxRotationTimeline; // 0x2c8(0x08)
	struct TArray<struct ABP_ControlledObjects_C*> ControlledObjects; // 0x2d0(0x10)
	float ArrestoDuration; // 0x2e0(0x04)
	float RewindSpeed; // 0x2e4(0x04)
	float RotationSpeedMultiplier; // 0x2e8(0x04)
	bool Reverse; // 0x2ec(0x01)
	bool Frozen; // 0x2ed(0x01)
	bool ACTIVE; // 0x2ee(0x01)
	bool StandingSwitch; // 0x2ef(0x01)
	bool LockSpinner; // 0x2f0(0x01)
	bool Lock; // 0x2f1(0x01)
	bool SwitchLockSpinner; // 0x2f2(0x01)
	char pad_2F3[0x5]; // 0x2f3(0x05)
	struct FString LockSavegameString; // 0x2f8(0x10)
	struct FString LockHermesMessage; // 0x308(0x10)
	struct FMulticastInlineDelegate OnLockedGate; // 0x318(0x10)
	struct FMulticastInlineDelegate OnMovedByDepulso; // 0x328(0x10)
	float ForceRequired; // 0x338(0x04)
	float SpinnerRotations; // 0x33c(0x04)
	float RotationProgress; // 0x340(0x04)
	float Velocity; // 0x344(0x04)
	int32_t HitCount; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UAkAudioEvent* Ak Event First Hit; // 0x350(0x08)
	struct UAkAudioEvent* Ak Event Second Hit; // 0x358(0x08)
	bool Rotating; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	float RotationSpeed; // 0x364(0x04)

	void UserConstructionScript(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MaxRotationTimeline__FinishedFunc(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.MaxRotationTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void MaxRotationTimeline__UpdateFunc(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.MaxRotationTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void PulseTimeline__FinishedFunc(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.PulseTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void PulseTimeline__UpdateFunc(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.PulseTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Rotate(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.Rotate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Shake(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.Shake // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceOpen(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.ForceOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WindSpinner_Short(int32_t EntryPoint); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.ExecuteUbergraph_BP_WindSpinner_Short // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnMovedByDepulso__DelegateSignature(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.OnMovedByDepulso__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLockedGate__DelegateSignature(); // Function BP_WindSpinner_Short.BP_WindSpinner_Short_C.OnLockedGate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

