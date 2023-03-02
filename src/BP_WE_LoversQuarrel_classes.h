// BlueprintGeneratedClass BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C
// Size: 0x330 (Inherited: 0x280)
struct ABP_WE_LoversQuarrel_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UBoxComponent* Trigger_Volume; // 0x288(0x08)
	struct UChildActorComponent* Ghost_Female; // 0x290(0x08)
	struct UChildActorComponent* Ghost_Male; // 0x298(0x08)
	struct USceneComponent* Scene; // 0x2a0(0x08)
	float Descent_Timeline_NewTrack_0_E94509E74437C43820173F90610A0005; // 0x2a8(0x04)
	enum class ETimelineDirection Descent_Timeline__Direction_E94509E74437C43820173F90610A0005; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* Descent_Timeline; // 0x2b0(0x08)
	struct FVector Trigger box extent; // 0x2b8(0x0c)
	int32_t WE_Variation; // 0x2c4(0x04)
	struct USkeletalMeshComponent* SK_GhostM; // 0x2c8(0x08)
	struct USkeletalMeshComponent* SK_GhostF; // 0x2d0(0x08)
	bool RND_Variation; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct TArray<struct UAvaAudioDialogueEvent*> Dialogue; // 0x2e0(0x10)
	struct TArray<struct UAnimMontage*> GhostM_Montages; // 0x2f0(0x10)
	struct TArray<struct UAnimMontage*> GhostF_Montages; // 0x300(0x10)
	struct AActor* Male GhostActor; // 0x310(0x08)
	struct AActor* Female GhostActor; // 0x318(0x08)
	struct TArray<float> DescentSpeedModifier; // 0x320(0x10)

	void Set scene variation(); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.Set scene variation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Idle anims(); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.Set Idle anims // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Unregister actors from Interact sense(); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.Unregister actors from Interact sense // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Descent_Timeline__FinishedFunc(); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.Descent_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Descent_Timeline__UpdateFunc(); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.Descent_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnNotifyEnd_E79C5C6844FCA12E1A39B6B863703F1D(struct FName NotifyName); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnNotifyEnd_E79C5C6844FCA12E1A39B6B863703F1D // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyBegin_E79C5C6844FCA12E1A39B6B863703F1D(struct FName NotifyName); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnNotifyBegin_E79C5C6844FCA12E1A39B6B863703F1D // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInterrupted_E79C5C6844FCA12E1A39B6B863703F1D(struct FName NotifyName); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnInterrupted_E79C5C6844FCA12E1A39B6B863703F1D // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBlendOut_E79C5C6844FCA12E1A39B6B863703F1D(struct FName NotifyName); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnBlendOut_E79C5C6844FCA12E1A39B6B863703F1D // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCompleted_E79C5C6844FCA12E1A39B6B863703F1D(struct FName NotifyName); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnCompleted_E79C5C6844FCA12E1A39B6B863703F1D // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyEnd_27B4A0764D3913DA91E08FB14058A9BE(struct FName NotifyName); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnNotifyEnd_27B4A0764D3913DA91E08FB14058A9BE // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyBegin_27B4A0764D3913DA91E08FB14058A9BE(struct FName NotifyName); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnNotifyBegin_27B4A0764D3913DA91E08FB14058A9BE // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInterrupted_27B4A0764D3913DA91E08FB14058A9BE(struct FName NotifyName); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnInterrupted_27B4A0764D3913DA91E08FB14058A9BE // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBlendOut_27B4A0764D3913DA91E08FB14058A9BE(struct FName NotifyName); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnBlendOut_27B4A0764D3913DA91E08FB14058A9BE // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCompleted_27B4A0764D3913DA91E08FB14058A9BE(struct FName NotifyName); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnCompleted_27B4A0764D3913DA91E08FB14058A9BE // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExitDescent(struct USceneComponent* Target SK mesh, struct AActor* Target Actor, struct FName Notify Name); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.ExitDescent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_LoversQuarrel(int32_t EntryPoint); // Function BP_WE_LoversQuarrel.BP_WE_LoversQuarrel_C.ExecuteUbergraph_BP_WE_LoversQuarrel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

