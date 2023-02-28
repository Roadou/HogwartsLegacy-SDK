// BlueprintGeneratedClass BP_Herb.BP_Herb_C
// Size: 0x3c4 (Inherited: 0x2d0)
struct ABP_Herb_C : AHerb {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UStaticMeshComponent* PlantStageStaticMesh; // 0x2d8(0x08)
	struct UParticleSystemComponent* PlantReadyEmitter; // 0x2e0(0x08)
	struct USceneComponent* SceneRoot; // 0x2e8(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2f0(0x08)
	float Timeline_PlantReady_NewTrack_0_9B848BBD4A0734A8D8A22AB75F879B3D; // 0x2f8(0x04)
	enum class ETimelineDirection Timeline_PlantReady__Direction_9B848BBD4A0734A8D8A22AB75F879B3D; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct UTimelineComponent* Timeline_PlantReady; // 0x300(0x08)
	float Timeline_GrowPlant_ScaleOffset_FAF16BF14A3765DB5A08F19613E2D776; // 0x308(0x04)
	float Timeline_GrowPlant_Rotate_FAF16BF14A3765DB5A08F19613E2D776; // 0x30c(0x04)
	enum class ETimelineDirection Timeline_GrowPlant__Direction_FAF16BF14A3765DB5A08F19613E2D776; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct UTimelineComponent* Timeline_GrowPlant; // 0x318(0x08)
	struct FVector Timeline_HarvestPlant_Single_Scale_26E5652F419AD6210B5B85BEF509E586; // 0x320(0x0c)
	float Timeline_HarvestPlant_Single_Rotate_26E5652F419AD6210B5B85BEF509E586; // 0x32c(0x04)
	enum class ETimelineDirection Timeline_HarvestPlant_Single__Direction_26E5652F419AD6210B5B85BEF509E586; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct UTimelineComponent* Timeline_HarvestPlant_Single; // 0x338(0x08)
	struct FVector Timeline_HarvestPlant_Multi_Scale_7EF35D8645DEBDF4B19725B6234D261F; // 0x340(0x0c)
	enum class ETimelineDirection Timeline_HarvestPlant_Multi__Direction_7EF35D8645DEBDF4B19725B6234D261F; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct UTimelineComponent* Timeline_HarvestPlant_Multi; // 0x350(0x08)
	struct FVector Timeline_DestroyPlant_Translation_286D5C154D661F0F091806AB2B071661; // 0x358(0x0c)
	struct FVector Timeline_DestroyPlant_Scale_286D5C154D661F0F091806AB2B071661; // 0x364(0x0c)
	float Timeline_DestroyPlant_Rotate_286D5C154D661F0F091806AB2B071661; // 0x370(0x04)
	enum class ETimelineDirection Timeline_DestroyPlant__Direction_286D5C154D661F0F091806AB2B071661; // 0x374(0x01)
	char pad_375[0x3]; // 0x375(0x03)
	struct UTimelineComponent* Timeline_DestroyPlant; // 0x378(0x08)
	struct UStaticMesh* CurrentStageMesh; // 0x380(0x08)
	float PlantRotateMult; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct UParticleSystem* PlantStateChangeEffect; // 0x390(0x08)
	float RandomSpin; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct TArray<struct UStaticMesh*> PlantStageStaticMeshes; // 0x3a0(0x10)
	struct UAkComponent* AkComponent; // 0x3b0(0x08)
	struct USpotLightComponent* SpotLightComponent; // 0x3b8(0x08)
	int32_t StageShown; // 0x3c0(0x04)

	void GetPlantExtent(struct FVector& Box Extent); // Function BP_Herb.BP_Herb_C.GetPlantExtent // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SwitchMesh(int32_t New Stage); // Function BP_Herb.BP_Herb_C.SwitchMesh // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	int32_t GetNumStages(); // Function BP_Herb.BP_Herb_C.GetNumStages // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void Timeline_HarvestPlant_Single__FinishedFunc(); // Function BP_Herb.BP_Herb_C.Timeline_HarvestPlant_Single__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_HarvestPlant_Single__UpdateFunc(); // Function BP_Herb.BP_Herb_C.Timeline_HarvestPlant_Single__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_HarvestPlant_Multi__FinishedFunc(); // Function BP_Herb.BP_Herb_C.Timeline_HarvestPlant_Multi__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_HarvestPlant_Multi__UpdateFunc(); // Function BP_Herb.BP_Herb_C.Timeline_HarvestPlant_Multi__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_GrowPlant__FinishedFunc(); // Function BP_Herb.BP_Herb_C.Timeline_GrowPlant__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_GrowPlant__UpdateFunc(); // Function BP_Herb.BP_Herb_C.Timeline_GrowPlant__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_PlantReady__FinishedFunc(); // Function BP_Herb.BP_Herb_C.Timeline_PlantReady__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_PlantReady__UpdateFunc(); // Function BP_Herb.BP_Herb_C.Timeline_PlantReady__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_DestroyPlant__FinishedFunc(); // Function BP_Herb.BP_Herb_C.Timeline_DestroyPlant__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_DestroyPlant__UpdateFunc(); // Function BP_Herb.BP_Herb_C.Timeline_DestroyPlant__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Grow Plant(int32_t StageToShow); // Function BP_Herb.BP_Herb_C.Grow Plant // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BP_NotifyHerbHarvested(); // Function BP_Herb.BP_Herb_C.BP_NotifyHerbHarvested // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void NotifyStageChange(int32_t NewStage, bool bIsInitialState); // Function BP_Herb.BP_Herb_C.NotifyStageChange // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ShowPlantReadyFeedback(); // Function BP_Herb.BP_Herb_C.ShowPlantReadyFeedback // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Herb.BP_Herb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Herb.BP_Herb_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Herb.BP_Herb_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BP_NotifyHerbDestroyed(); // Function BP_Herb.BP_Herb_C.BP_NotifyHerbDestroyed // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Herb.BP_Herb_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Herb.BP_Herb_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Herb.BP_Herb_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Herb.BP_Herb_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Herb.BP_Herb_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BP_NotifyHerbPlanted(); // Function BP_Herb.BP_Herb_C.BP_NotifyHerbPlanted // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Herb(int32_t EntryPoint); // Function BP_Herb.BP_Herb_C.ExecuteUbergraph_BP_Herb // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

