// BlueprintGeneratedClass BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C
// Size: 0x30c (Inherited: 0x248)
struct ABP_WE_Slytherin_Squid_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USkeletalMeshComponent* Giant_Squid; // 0x250(0x08)
	struct UStaticMeshComponent* Squid_Location_F; // 0x258(0x08)
	struct UStaticMeshComponent* Squid_Location_E; // 0x260(0x08)
	struct USkeletalMeshComponent* Squid_Short_Tentacle_B; // 0x268(0x08)
	struct UStaticMeshComponent* Squid_Location_D; // 0x270(0x08)
	struct UStaticMeshComponent* Squid_Location_C; // 0x278(0x08)
	struct USkeletalMeshComponent* Squid_Short_Tentacle_A; // 0x280(0x08)
	struct UStaticMeshComponent* Squid_Location_B; // 0x288(0x08)
	struct UStaticMeshComponent* Squid_Location_A; // 0x290(0x08)
	struct USkeletalMeshComponent* Squid_Long_Tentacle_A; // 0x298(0x08)
	struct USphereComponent* SquidEventRange; // 0x2a0(0x08)
	struct UStaticMeshComponent* Location; // 0x2a8(0x08)
	float Squid_Squid_Move_58407CB34E873DE81BE69FBA6EE0C3A7; // 0x2b0(0x04)
	enum class ETimelineDirection Squid__Direction_58407CB34E873DE81BE69FBA6EE0C3A7; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* Squid; // 0x2b8(0x08)
	struct AActor* Player; // 0x2c0(0x08)
	struct TArray<struct UStaticMeshComponent*> Ambient_Squid_Locs; // 0x2c8(0x10)
	bool SquidExists; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct UStaticMeshComponent* Ambient_Squid_Chosen_Loc; // 0x2e0(0x08)
	struct FTimerHandle SquidTimer; // 0x2e8(0x08)
	bool SquidFullEvent; // 0x2f0(0x01)
	bool SquidTentaclesEvent; // 0x2f1(0x01)
	char pad_2F2[0x2]; // 0x2f2(0x02)
	struct FRotator InitialFullSquidRot; // 0x2f4(0x0c)
	struct FRotator EndFullSquidRot; // 0x300(0x0c)

	bool DisableLightInteraction(); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.DisableLightInteraction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisableLightRaytrace(); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.DisableLightRaytrace // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_Ambient_Squid_Loc(struct USkeletalMeshComponent* Mesh, struct USceneComponent* Loc); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.Set_Ambient_Squid_Loc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Setup_Squid(); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.Setup_Squid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Squid__FinishedFunc(); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.Squid__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Squid__UpdateFunc(); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.Squid__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Squid__CamShake__EventFunc(); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.Squid__CamShake__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnEnteredLight(struct AActor* LumosBP, bool bPlayerOwned); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnEnteredLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredLightProximity(struct AActor* LumosBP); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnEnteredLightProximity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredNearby(struct AActor* LumosBP); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnEnteredNearby // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedLight(struct AActor* LumosBP, bool bPlayerOwned); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnExitedLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedLightProximity(struct AActor* LumosBP); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnExitedLightProximity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedNearby(); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnExitedNearby // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__LumosR_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.BndEvt__LumosR_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__LumosR_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.BndEvt__LumosR_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Full_Squid(); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.Full_Squid // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Slytherin_Squid(int32_t EntryPoint); // Function BP_WE_Slytherin_Squid.BP_WE_Slytherin_Squid_C.ExecuteUbergraph_BP_WE_Slytherin_Squid // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

