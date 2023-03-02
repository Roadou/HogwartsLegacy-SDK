// BlueprintGeneratedClass BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C
// Size: 0x2f9 (Inherited: 0x258)
struct ABP_GobMine_SteamDoor_C : ABP_GM_ConnectedMachineryBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x260(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x268(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x270(0x08)
	struct USphereComponent* StartSphere2; // 0x278(0x08)
	struct USphereComponent* StartSphere1; // 0x280(0x08)
	struct USphereComponent* StartSphere; // 0x288(0x08)
	struct UAkComponent* Ak_BP_GobMine_SteamDoor; // 0x290(0x08)
	struct UBoxComponent* AIBocker; // 0x298(0x08)
	struct UStaticMeshComponent* SM_GobMine_BrickWall_500Hx500W_A; // 0x2a0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2a8(0x08)
	struct USceneComponent* Scene; // 0x2b0(0x08)
	bool bDoorOpen; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	struct FName Stat; // 0x2bc(0x08)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UABP_GobMine_Steam_Door_Master_Skeleton_C* AnimBP; // 0x2c8(0x08)
	struct UNiagaraComponent* SteamSystem; // 0x2d0(0x08)
	struct FMulticastInlineDelegate DoorOpened; // 0x2d8(0x10)
	struct TArray<struct AActor*> SwitchTargets; // 0x2e8(0x10)
	bool Fromsave; // 0x2f8(0x01)

	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BaseSteamUp(); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.BaseSteamUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BaseSteamDown(); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.BaseSteamDown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GobMine_SteamDoor(int32_t EntryPoint); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.ExecuteUbergraph_BP_GobMine_SteamDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void DoorOpened__DelegateSignature(); // Function BP_GobMine_SteamDoor.BP_GobMine_SteamDoor_C.DoorOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

