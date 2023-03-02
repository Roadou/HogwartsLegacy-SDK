// BlueprintGeneratedClass BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C
// Size: 0x2e1 (Inherited: 0x248)
struct ABP_Swing_Open_Gate_GobTempCamp_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* InteractAttachPOint; // 0x250(0x08)
	struct UStaticMeshComponent* SM_Gob_CampTemp_BeamWall; // 0x258(0x08)
	struct UArrowComponent* Arrow; // 0x260(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x268(0x08)
	struct UObjectStateComponent* ObjectState; // 0x270(0x08)
	struct USceneComponent* Scene; // 0x278(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x280(0x08)
	struct UStaticMeshComponent* SM_CampB_DoorA1; // 0x288(0x08)
	struct UStaticMeshComponent* SM_CampB_DoorA; // 0x290(0x08)
	struct USceneComponent* GatePivot; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	float openTimeline_NewTrack_0_2A4D0E8044E30909658314B2D305E3E7; // 0x2a8(0x04)
	enum class ETimelineDirection openTimeline__Direction_2A4D0E8044E30909658314B2D305E3E7; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* openTimeline; // 0x2b0(0x08)
	bool OpenClockwise; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	float TimeToOpen; // 0x2bc(0x04)
	float TimeToClose; // 0x2c0(0x04)
	bool GateOpen; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct ABP_Swing_Open_Gate_GobTempCamp_C* Other Gate To Open; // 0x2c8(0x08)
	struct FMulticastInlineDelegate GateOpened; // 0x2d0(0x10)
	bool interactable; // 0x2e0(0x01)

	void UserConstructionScript(); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void openTimeline__FinishedFunc(); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.openTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void openTimeline__UpdateFunc(); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.openTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void openTimeline__OpenOrClose__EventFunc(); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.openTimeline__OpenOrClose__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Open Gate(); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.Open Gate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseGate(); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.CloseGate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Swing_Open_Gate_GobTempCamp(int32_t EntryPoint); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.ExecuteUbergraph_BP_Swing_Open_Gate_GobTempCamp // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void GateOpened__DelegateSignature(); // Function BP_Swing_Open_Gate_GobTempCamp.BP_Swing_Open_Gate_GobTempCamp_C.GateOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

