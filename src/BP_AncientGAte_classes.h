// BlueprintGeneratedClass BP_AncientGAte.BP_AncientGate_C
// Size: 0x6b0 (Inherited: 0x290)
struct ABP_AncientGate_C : AAncientGate {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UAkComponent* ancient_magic_door_energy_motion_Stop; // 0x298(0x08)
	struct UAkComponent* ancient_magic_door_energy_motion; // 0x2a0(0x08)
	struct UPointLightComponent* VFX_PointLight; // 0x2a8(0x08)
	struct UStaticMeshComponent* Center; // 0x2b0(0x08)
	struct USphereComponent* LOC_N_PortalCrossing; // 0x2b8(0x08)
	struct UStaticMeshComponent* Refraction; // 0x2c0(0x08)
	struct UStaticMeshComponent* BubbleCurtain; // 0x2c8(0x08)
	struct USceneComponent* VFX; // 0x2d0(0x08)
	struct USceneComponent* BlueFog; // 0x2d8(0x08)
	struct USceneComponent* RedFog; // 0x2e0(0x08)
	struct UBoxComponent* TransitionFXCollision1; // 0x2e8(0x08)
	struct UBoxComponent* TransitionFXCollision; // 0x2f0(0x08)
	struct UAkComponent* ancient_magic_room_ambience_Stop; // 0x2f8(0x08)
	struct UAkComponent* ancient_magic_room_ambience; // 0x300(0x08)
	struct UAkComponent* ancient_magic_door_energy_Stop; // 0x308(0x08)
	struct UAkComponent* ancient_magic_door_energy; // 0x310(0x08)
	struct UAkComponent* encient_mamgic_door_passthrough; // 0x318(0x08)
	struct UNiagaraComponent* N_AmbientMotes; // 0x320(0x08)
	struct USphereComponent* WipeIn_FX_Radius; // 0x328(0x08)
	struct UStaticMeshComponent* RedSide; // 0x330(0x08)
	struct UStaticMeshComponent* BlueSide; // 0x338(0x08)
	struct USceneComponent* RightPoint; // 0x340(0x08)
	struct USceneComponent* CenterTop; // 0x348(0x08)
	struct USceneComponent* LeftPoint; // 0x350(0x08)
	struct USceneComponent* Vis; // 0x358(0x08)
	struct UBoxComponent* Box; // 0x360(0x08)
	struct USceneComponent* Gate; // 0x368(0x08)
	struct UStaticMeshComponent* Radius; // 0x370(0x08)
	struct UArrowComponent* Arrow; // 0x378(0x08)
	struct UStaticMeshComponent* SM_Sanctum_Dungeon_1_Arch; // 0x380(0x08)
	struct USceneComponent* Scene; // 0x388(0x08)
	float PPCrossfade_BlendPP_12F7DC92432D3B480643D3B2092EC25F; // 0x390(0x04)
	enum class ETimelineDirection PPCrossfade__Direction_12F7DC92432D3B480643D3B2092EC25F; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct UTimelineComponent* PPCrossfade; // 0x398(0x08)
	float Timeline_1_FogOpacity_DBE7A4C64BD65A18CEB5D998420A30A6; // 0x3a0(0x04)
	float Timeline_1_RefractionFX__DBE7A4C64BD65A18CEB5D998420A30A6; // 0x3a4(0x04)
	float Timeline_1_BubbleOpacity_DBE7A4C64BD65A18CEB5D998420A30A6; // 0x3a8(0x04)
	float Timeline_1_ParticleOpacity_DBE7A4C64BD65A18CEB5D998420A30A6; // 0x3ac(0x04)
	float Timeline_1_ParticleSpawnRate_DBE7A4C64BD65A18CEB5D998420A30A6; // 0x3b0(0x04)
	float Timeline_1_OffsetStrength_DBE7A4C64BD65A18CEB5D998420A30A6; // 0x3b4(0x04)
	float Timeline_1_MotionBlurOpacity_DBE7A4C64BD65A18CEB5D998420A30A6; // 0x3b8(0x04)
	float Timeline_1_NewTrack_2_DBE7A4C64BD65A18CEB5D998420A30A6; // 0x3bc(0x04)
	float Timeline_1_Fade_DBE7A4C64BD65A18CEB5D998420A30A6; // 0x3c0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_DBE7A4C64BD65A18CEB5D998420A30A6; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x3c8(0x08)
	struct TArray<struct AActor*> BlueTarget; // 0x3d0(0x10)
	struct AActor* Current; // 0x3e0(0x08)
	struct TArray<struct AActor*> RedTarget; // 0x3e8(0x10)
	bool IsRed; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct UMaterialInstanceDynamic* RingMAT; // 0x400(0x08)
	struct FLinearColor Red; // 0x408(0x10)
	struct FLinearColor Blue; // 0x418(0x10)
	struct USceneComponent* CurrentLeft; // 0x428(0x08)
	struct USceneComponent* CurrentRight; // 0x430(0x08)
	struct AAncientMagicHotSpot* AncientSwitch; // 0x438(0x08)
	struct TMap<struct UMaterialSwapComponent*, struct AActor*> RedMats; // 0x440(0x50)
	struct TMap<struct UMaterialSwapComponent*, struct AActor*> BlueMats; // 0x490(0x50)
	bool HideArch; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	struct FVector GateScale; // 0x4e4(0x0c)
	float AncientRadius; // 0x4f0(0x04)
	struct FVector AncientLocation; // 0x4f4(0x0c)
	bool ShowRadius; // 0x500(0x01)
	bool DisableFX; // 0x501(0x01)
	char pad_502[0x6]; // 0x502(0x06)
	struct TMap<struct AActor*, bool> PassThroughCheck; // 0x508(0x50)
	struct TArray<struct AEnemy_Character*> Enemies; // 0x558(0x10)
	struct TArray<struct ABP_SanctumPortKey_C*> PortKeys; // 0x568(0x10)
	bool Trigger; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct TArray<struct ABP_SanctumPortKey_Pedestal_C*> PortKeyPedestals; // 0x580(0x10)
	struct FTransform RadiusLOC; // 0x590(0x30)
	struct TArray<struct AActor*> InGateArray; // 0x5c0(0x10)
	int32_t TickCount; // 0x5d0(0x04)
	bool WarpColor; // 0x5d4(0x01)
	char pad_5D5[0x3]; // 0x5d5(0x03)
	float ExpandTime; // 0x5d8(0x04)
	float ShrinkTime; // 0x5dc(0x04)
	bool IsReversing; // 0x5e0(0x01)
	char pad_5E1[0x7]; // 0x5e1(0x07)
	struct TArray<struct TSoftObjectPtr<ABP_EdgeFogController_C>> EdgeFog; // 0x5e8(0x10)
	bool TrackPlayer; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	float SquaredTransitionDistance; // 0x5fc(0x04)
	bool IsOn; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	float MaxRefraction; // 0x604(0x04)
	float CurrentRefraction; // 0x608(0x04)
	float MaxTransitionFXOffset; // 0x60c(0x04)
	struct TArray<struct UNiagaraComponent*> RedBaseFogs; // 0x610(0x10)
	struct TArray<struct UNiagaraComponent*> BlueBaseFogs; // 0x620(0x10)
	float MaxFogOpacity; // 0x630(0x04)
	bool DebugRedFog; // 0x634(0x01)
	bool DebugBlueFog; // 0x635(0x01)
	char pad_636[0x2]; // 0x636(0x02)
	float SquaredTransitionDistanceEdge; // 0x638(0x04)
	float CurrentBlendWeight; // 0x63c(0x04)
	struct AVFX_BP_AncMag_PostProcessFX_C* VFX_PostProActor; // 0x640(0x08)
	struct TArray<struct FName> VFX_AvatarMeshFilter; // 0x648(0x10)
	struct FLinearColor VFX_LightColor_Blue; // 0x658(0x10)
	struct FLinearColor VFX_LightColor_Red; // 0x668(0x10)
	float VFX_LightMaxIntensity; // 0x678(0x04)
	float VFX_GateEdgeIntensity; // 0x67c(0x04)
	struct FMulticastInlineDelegate OnRedChanged; // 0x680(0x10)
	bool HasEnemies; // 0x690(0x01)
	char pad_691[0x3]; // 0x691(0x03)
	float InitializeDelay; // 0x694(0x04)
	float HideIfNotLookingAngle; // 0x698(0x04)
	bool ForceAngle; // 0x69c(0x01)
	bool ArrayClear; // 0x69d(0x01)
	char pad_69E[0x2]; // 0x69e(0x02)
	struct UMaterialInstanceDynamic* Mat_Portal_Red; // 0x6a0(0x08)
	struct UMaterialInstanceDynamic* Mat_Portal_Blue; // 0x6a8(0x08)

	void Set Is Red(bool IsRed, bool& bIsRed); // Function BP_AncientGAte.BP_AncientGate_C.Set Is Red // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetBaseFog(); // Function BP_AncientGAte.BP_AncientGate_C.ResetBaseFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DebugFog(); // Function BP_AncientGAte.BP_AncientGate_C.DebugFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateBaseFog(); // Function BP_AncientGAte.BP_AncientGate_C.UpdateBaseFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupBaseFog(); // Function BP_AncientGAte.BP_AncientGate_C.SetupBaseFog // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetPlayerDistance(float& SqauredDistance, struct FVector& Offset, float& DistanceFromEdge, struct FVector& PositionOnEdge); // Function BP_AncientGAte.BP_AncientGate_C.GetPlayerDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ControlTransitionFX(); // Function BP_AncientGAte.BP_AncientGate_C.ControlTransitionFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ArrayFixup(struct TArray<struct AActor*>& Array); // Function BP_AncientGAte.BP_AncientGate_C.ArrayFixup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMatInGate(struct AActor* Actor, bool Tag, bool In); // Function BP_AncientGAte.BP_AncientGate_C.SetMatInGate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TombProtectorStatueOverride(struct TArray<struct AActor*>& Array, struct FName Tag); // Function BP_AncientGAte.BP_AncientGate_C.TombProtectorStatueOverride // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitialMatSetup(); // Function BP_AncientGAte.BP_AncientGate_C.InitialMatSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddAndRemoveToArrays(struct AActor* ToChange, struct TMap<struct UMaterialSwapComponent*, struct AActor*>& ChangeFrom, struct TMap<struct UMaterialSwapComponent*, struct AActor*>& ChangeTo); // Function BP_AncientGAte.BP_AncientGate_C.AddAndRemoveToArrays // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool GetGateSide(struct USceneComponent* Component, struct USceneComponent* Gate, struct FVector Loc, bool BeginOverlap); // Function BP_AncientGAte.BP_AncientGate_C.GetGateSide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetActorAndChildren(struct AActor* Actor, struct TArray<struct AActor*>& Meshes); // Function BP_AncientGAte.BP_AncientGate_C.GetActorAndChildren // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Collision Ignore(struct AActor* Actor); // Function BP_AncientGAte.BP_AncientGate_C.Set Collision Ignore // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCollision(struct AActor* Actor, enum class ECollisionResponse Response); // Function BP_AncientGAte.BP_AncientGate_C.SetCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MATCutoutFlip(bool RedSide); // Function BP_AncientGAte.BP_AncientGate_C.MATCutoutFlip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddTo Array(struct TArray<struct AActor*>& List, struct AActor*& Check, bool InRange, struct FName Tag, struct UMaterialInstance* MAT, struct TArray<struct AActor*>& SecondaryList); // Function BP_AncientGAte.BP_AncientGate_C.AddTo Array // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COLCheck(struct TArray<struct AActor*>& Array, bool Dir, struct TArray<struct AActor*>& Secondary, int32_t PrimaryIndex, int32_t ScrondaryIndex); // Function BP_AncientGAte.BP_AncientGate_C.COLCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_AncientGAte.BP_AncientGate_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_AncientGAte.BP_AncientGate_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_AncientGAte.BP_AncientGate_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__BubbleVisibility__EventFunc(); // Function BP_AncientGAte.BP_AncientGate_C.Timeline_1__BubbleVisibility__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__NewTrack_1__EventFunc(); // Function BP_AncientGAte.BP_AncientGate_C.Timeline_1__NewTrack_1__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void PPCrossfade__FinishedFunc(); // Function BP_AncientGAte.BP_AncientGate_C.PPCrossfade__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void PPCrossfade__UpdateFunc(); // Function BP_AncientGAte.BP_AncientGate_C.PPCrossfade__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_AncientGAte.BP_AncientGate_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_AncientGAte.BP_AncientGate_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_AncientGAte.BP_AncientGate_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_AncientGAte.BP_AncientGate_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_AncientGAte.BP_AncientGate_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_AncientGAte.BP_AncientGate_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_AncientGAte.BP_AncientGate_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_AncientGAte.BP_AncientGate_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_AncientGAte.BP_AncientGate_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AncientGAte.BP_AncientGate_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_AncientGAte.BP_AncientGate_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_AncientGAte.BP_AncientGate_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Radius_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_AncientGAte.BP_AncientGate_C.BndEvt__Radius_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Reset(); // Function BP_AncientGAte.BP_AncientGate_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParams(); // Function BP_AncientGAte.BP_AncientGate_C.SetParams // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Warp(struct AActor* Who); // Function BP_AncientGAte.BP_AncientGate_C.Warp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Recall(struct AActor* Who, struct AActor* Pedestal); // Function BP_AncientGAte.BP_AncientGate_C.Recall // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Rotating(); // Function BP_AncientGAte.BP_AncientGate_C.Rotating // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TransitionFXCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_AncientGAte.BP_AncientGate_C.BndEvt__TransitionFXCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TransitionFXCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_AncientGAte.BP_AncientGate_C.BndEvt__TransitionFXCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_AncientGAte.BP_AncientGate_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void VFX_CrossedPortal(); // Function BP_AncientGAte.BP_AncientGate_C.VFX_CrossedPortal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Setup(); // Function BP_AncientGAte.BP_AncientGate_C.VFX_Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_UpdateBlendWeight(); // Function BP_AncientGAte.BP_AncientGate_C.VFX_UpdateBlendWeight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_PortalEntered(); // Function BP_AncientGAte.BP_AncientGate_C.VFX_PortalEntered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Reset(); // Function BP_AncientGAte.BP_AncientGate_C.VFX_Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Enable(); // Function BP_AncientGAte.BP_AncientGate_C.VFX_Enable // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Disable(); // Function BP_AncientGAte.BP_AncientGate_C.VFX_Disable // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOffGate(); // Function BP_AncientGAte.BP_AncientGate_C.TurnOffGate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceInView(); // Function BP_AncientGAte.BP_AncientGate_C.ForceInView // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitVerify(); // Function BP_AncientGAte.BP_AncientGate_C.ExitVerify // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AncientGAte.BP_AncientGate_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AncientGate(int32_t EntryPoint); // Function BP_AncientGAte.BP_AncientGate_C.ExecuteUbergraph_BP_AncientGate // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnRedChanged__DelegateSignature(bool IsRed); // Function BP_AncientGAte.BP_AncientGate_C.OnRedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

