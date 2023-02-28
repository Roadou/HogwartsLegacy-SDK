// BlueprintGeneratedClass BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C
// Size: 0x408 (Inherited: 0x350)
struct ABP_CUR_Infiltrator_Coin_C : ABP_InventoryObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UNiagaraComponent* VFX_NS_Demiguise_Attractor; // 0x358(0x08)
	struct USphereComponent* ProximityOverlap; // 0x360(0x08)
	struct UChildActorComponent* BP_InfiltratorCoin_Marker; // 0x368(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x370(0x08)
	struct UStaticMeshComponent* Moonstone; // 0x378(0x08)
	struct UStaticMeshComponent* Statue; // 0x380(0x08)
	bool IsActive; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FKnowledgeInfo KnowledgeCard; // 0x390(0x30)
	struct UNiagaraComponent* AcitveParticleSystem; // 0x3c0(0x08)
	struct FTimeInput ActivateTime; // 0x3c8(0x0c)
	struct FTimeInput DeactivateTime; // 0x3d4(0x0c)
	bool DebugStuff; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	struct FName LockId; // 0x3e4(0x08)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct FString LastDumpEverything; // 0x3f0(0x10)
	struct UGameLogicObject* GameLogicObject; // 0x400(0x08)

	void DumpEverything(struct FName EventTag, bool Force); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.DumpEverything // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsUnlocked(bool& IsUnlocked); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.IsUnlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void TimeIsInRange(struct FTimespan Time, struct FTimespan Start, struct FTimespan End, bool& InRange); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.TimeIsInRange // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void GetDateTime(struct FDateTime& CurrentDateTime); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.GetDateTime // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void ConditionalActivate(struct FDateTime DateTime); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.ConditionalActivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateParticleSystem(bool Activate); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.ActivateParticleSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShouldBeActive(struct FDateTime DateTime, bool& Should Be Active); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.ShouldBeActive // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void ActivateToken(bool ACTIVE); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.ActivateToken // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DayNightMoonEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, enum class EMoonPhaseName Phase, bool bLate); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.DayNightMoonEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NotifyPickedUp(struct FName ItemId, int32_t ItemCount); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.NotifyPickedUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DayNightSunEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.DayNightSunEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Telescope_ProximityOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.BndEvt__BP_Telescope_ProximityOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Telescope_ProximityOverlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.BndEvt__BP_Telescope_ProximityOverlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CUR_Infiltrator_Coin(int32_t EntryPoint); // Function BP_CUR_Infiltrator_Coin.BP_CUR_Infiltrator_Coin_C.ExecuteUbergraph_BP_CUR_Infiltrator_Coin // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

