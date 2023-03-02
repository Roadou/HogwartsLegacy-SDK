// BlueprintGeneratedClass BP_DepulsoDoor.BP_DepulsoDoor_C
// Size: 0x339 (Inherited: 0x248)
struct ABP_DepulsoDoor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNone* BP_AutosaveComponent; // 0x250(0x08)
	struct UStaticMeshComponent* FXPlacement; // 0x258(0x08)
	struct UAkComponent* Ak_BP_DepulsoDoor; // 0x260(0x08)
	struct UObjectStateComponent* ObjectState; // 0x268(0x08)
	struct UStaticMeshComponent* LeftDoor; // 0x270(0x08)
	struct UStaticMeshComponent* RightDoor; // 0x278(0x08)
	struct USceneComponent* LeftHinge; // 0x280(0x08)
	struct USceneComponent* RightHinge; // 0x288(0x08)
	struct UStaticMeshComponent* StaticMeshComponent2; // 0x290(0x08)
	struct USceneComponent* SharedRoot; // 0x298(0x08)
	float JostleDoor_NewTrack_0_7E70BE6642A2A5627C1902A523FADDF9; // 0x2a0(0x04)
	enum class ETimelineDirection JostleDoor__Direction_7E70BE6642A2A5627C1902A523FADDF9; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* JostleDoor; // 0x2a8(0x08)
	float Open_Close_LerpROT_025A8C6F41BA6F55DAE4AD98319649FD; // 0x2b0(0x04)
	enum class ETimelineDirection Open_Close__Direction_025A8C6F41BA6F55DAE4AD98319649FD; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* Close; // 0x2b8(0x08)
	struct FRotator LeftStartROT; // 0x2c0(0x0c)
	struct FRotator RightStartROT; // 0x2cc(0x0c)
	float DepulsoAccioFlip; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UPrimitiveComponent* Jostle; // 0x2e0(0x08)
	struct FRotator JostleBaseROT; // 0x2e8(0x0c)
	bool JostleDIR; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct FName SaveStat; // 0x2f8(0x08)
	struct TArray<struct AActor*> SwitchTargets; // 0x300(0x10)
	struct FRotator JostleBaseROT2; // 0x310(0x0c)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FMulticastInlineDelegate DepulsoDoorOpened; // 0x320(0x10)
	float PositiveOpenValue; // 0x330(0x04)
	float NegativeOpenValue; // 0x334(0x04)
	bool DoorOpen; // 0x338(0x01)

	void DisableAutoTarget(); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.DisableAutoTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshObstacles(); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.RefreshObstacles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool GetSide(struct USceneComponent* Root, struct USceneComponent* Object, bool Right); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.GetSide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Close__FinishedFunc(); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.Close__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Close__UpdateFunc(); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.Close__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void JostleDoor__FinishedFunc(); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.JostleDoor__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void JostleDoor__UpdateFunc(); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.JostleDoor__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void JostleEvent(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.JostleEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshObstacleTimer(); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.RefreshObstacleTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceOpen(); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.ForceOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DepulsoDoor(int32_t EntryPoint); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.ExecuteUbergraph_BP_DepulsoDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void DepulsoDoorOpened__DelegateSignature(); // Function BP_DepulsoDoor.BP_DepulsoDoor_C.DepulsoDoorOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

