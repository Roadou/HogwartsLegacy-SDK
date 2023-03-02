// BlueprintGeneratedClass BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C
// Size: 0x490 (Inherited: 0x248)
struct ABP_WE_Slytherin_Fish_React_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* FishPreReturnZone; // 0x250(0x08)
	struct UStaticMeshComponent* Sucker_Loc_05; // 0x258(0x08)
	struct UStaticMeshComponent* SM_HW_SD_CR_Window_Glass; // 0x260(0x08)
	struct UBoxComponent* FishAttractZone; // 0x268(0x08)
	struct USplineComponent* S_ReturnFish; // 0x270(0x08)
	struct UStaticMeshComponent* VFX_SquidRest_Location; // 0x278(0x08)
	struct USkeletalMeshComponent* SK_Squid_Detailed; // 0x280(0x08)
	struct USphereComponent* LumosRange; // 0x288(0x08)
	struct USplineComponent* S_Fish_3; // 0x290(0x08)
	struct UStaticMeshComponent* Glass_HitDetector; // 0x298(0x08)
	struct USplineComponent* S_Fish_2; // 0x2a0(0x08)
	struct UStaticMeshComponent* Location; // 0x2a8(0x08)
	enum class ETimelineDirection Fish_PreReturn_Timeline__Direction_3177253B401AAD9CE634FBADD387774A; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct UTimelineComponent* Fish_PreReturn_Timeline; // 0x2b8(0x08)
	enum class ETimelineDirection Fish_Return_Timeline__Direction_6AB9F6C348FC999C262CA7B0DBB09F5C; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UTimelineComponent* Fish_Return_Timeline; // 0x2c8(0x08)
	float Fish_Flee_Flee_Time_FEB3EA634070B28AE82BC49317A4B350; // 0x2d0(0x04)
	enum class ETimelineDirection Fish_Flee__Direction_FEB3EA634070B28AE82BC49317A4B350; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct UTimelineComponent* Fish_Flee; // 0x2d8(0x08)
	float Fish_Timeline_Fish_Path_8_55BF6231404AD99D9061A3A5630260C0; // 0x2e0(0x04)
	float Fish_Timeline_Fish_Path_7_55BF6231404AD99D9061A3A5630260C0; // 0x2e4(0x04)
	float Fish_Timeline_Fish_Path_6_55BF6231404AD99D9061A3A5630260C0; // 0x2e8(0x04)
	float Fish_Timeline_Fish_Path_5_55BF6231404AD99D9061A3A5630260C0; // 0x2ec(0x04)
	float Fish_Timeline_Fish_Path_4_55BF6231404AD99D9061A3A5630260C0; // 0x2f0(0x04)
	float Fish_Timeline_Fish_Path_3_55BF6231404AD99D9061A3A5630260C0; // 0x2f4(0x04)
	float Fish_Timeline_Fish_Path_2_55BF6231404AD99D9061A3A5630260C0; // 0x2f8(0x04)
	float Fish_Timeline_FishPath_1_55BF6231404AD99D9061A3A5630260C0; // 0x2fc(0x04)
	enum class ETimelineDirection Fish_Timeline__Direction_55BF6231404AD99D9061A3A5630260C0; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct UTimelineComponent* Fish_Timeline; // 0x308(0x08)
	struct AActor* Player; // 0x310(0x08)
	struct AWandTool* Wand; // 0x318(0x08)
	struct TArray<struct USkeletalMeshComponent*> EventFish; // 0x320(0x10)
	int32_t numberOfFish; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct TArray<struct USkeletalMeshComponent*> IdlingFish; // 0x338(0x10)
	struct TArray<float> FishOffset; // 0x348(0x10)
	float FishPosition; // 0x358(0x04)
	float SplineLength; // 0x35c(0x04)
	struct USplineComponent* FishSpline; // 0x360(0x08)
	struct TArray<struct FVector> FishExitLocs; // 0x368(0x10)
	bool FishFlee; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FTimerHandle FishFleeTimer; // 0x380(0x08)
	struct TArray<struct FVector> FishAttractLocs; // 0x388(0x10)
	bool FishAttracted; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct TArray<struct FVector> FishReturnVectors; // 0x3a0(0x10)
	struct TArray<struct FVector> ReturnSplinePoints; // 0x3b0(0x10)
	int32_t ReturnFishIndex; // 0x3c0(0x04)
	struct FVector S_Fish_2_ReturnLoc; // 0x3c4(0x0c)
	struct FRotator S_Fish_2_ReturnRot; // 0x3d0(0x0c)
	struct FVector S_Fish_1_ReturnLoc; // 0x3dc(0x0c)
	struct FRotator S_Fish_1_ReturnRot; // 0x3e8(0x0c)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct USkeletalMeshComponent* ActiveFish; // 0x3f8(0x08)
	struct TArray<struct UStaticMeshComponent*> Sucker_Locs; // 0x400(0x10)
	struct FTimerHandle SpawnSquidTimer; // 0x410(0x08)
	bool Player_Knocked_Over; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	float FishSplineDelta; // 0x41c(0x04)
	struct TArray<float> Fish_Path_Speed_Offsets; // 0x420(0x10)
	struct TArray<struct FVector> Pre_Return_Locations; // 0x430(0x10)
	struct TArray<float> FishReturnDelays; // 0x440(0x10)
	struct TArray<int32_t> FishFinishedIndex; // 0x450(0x10)
	struct TArray<int32_t> FishEnrouteIndex; // 0x460(0x10)
	struct TArray<int32_t> FishForVFX_Index; // 0x470(0x10)
	bool FishIdle; // 0x480(0x01)
	bool InLumosRange; // 0x481(0x01)
	bool LumosActive; // 0x482(0x01)
	char pad_483[0x1]; // 0x483(0x01)
	struct FVector Impact Direction; // 0x484(0x0c)

	bool DisableLightInteraction(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.DisableLightInteraction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisableLightRaytrace(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.DisableLightRaytrace // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FishMover(struct TArray<float>& StartDelays, struct TArray<struct USkeletalMeshComponent*>& Fish, struct TArray<struct FVector>& Destinations, float VInterpSpeed, float RInterpSpeed, struct TArray<int32_t>& EnrouteFish, struct TArray<int32_t>& FinishedFish); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.FishMover // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Knockdown(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.Knockdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Fish Attracted(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.Fish Attracted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Fish_Timeline__FinishedFunc(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.Fish_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Fish_Timeline__UpdateFunc(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.Fish_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Fish_Flee__FinishedFunc(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.Fish_Flee__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Fish_Flee__UpdateFunc(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.Fish_Flee__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Fish_Return_Timeline__FinishedFunc(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.Fish_Return_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Fish_Return_Timeline__UpdateFunc(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.Fish_Return_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Fish_PreReturn_Timeline__FinishedFunc(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.Fish_PreReturn_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Fish_PreReturn_Timeline__UpdateFunc(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.Fish_PreReturn_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnEnteredLight(struct AActor* LumosBP, bool bPlayerOwned); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnEnteredLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredLightProximity(struct AActor* LumosBP); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnEnteredLightProximity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredNearby(struct AActor* LumosBP); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnEnteredNearby // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedLight(struct AActor* LumosBP, bool bPlayerOwned); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnExitedLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedLightProximity(struct AActor* LumosBP); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnExitedLightProximity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedNearby(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnExitedNearby // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void EscapeFish(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.EscapeFish // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__LumosR_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.BndEvt__LumosR_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__LumosR_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.BndEvt__LumosR_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SpawnTheSquid(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.SpawnTheSquid // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FishReturn(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.FishReturn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PrepFishForReturn(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.PrepFishForReturn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLumosActive(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnLumosActive // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLumosEnd(); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.OnLumosEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Slytherin_Fish_React(int32_t EntryPoint); // Function BP_WE_Slytherin_Fish_React.BP_WE_Slytherin_Fish_React_C.ExecuteUbergraph_BP_WE_Slytherin_Fish_React // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

