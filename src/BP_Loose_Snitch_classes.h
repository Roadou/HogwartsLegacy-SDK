// BlueprintGeneratedClass BP_Loose_Snitch.BP_Loose_Snitch_C
// Size: 0x328 (Inherited: 0x280)
struct ABP_Loose_Snitch_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAkComponent* Ak_fly_motion; // 0x288(0x08)
	struct USkeletalMeshComponent* SK_GoldenSnitch; // 0x290(0x08)
	struct UBoxComponent* VibrationBox; // 0x298(0x08)
	struct UBoxComponent* OverlapBox; // 0x2a0(0x08)
	struct UBoxComponent* Inner_Box_Bounds; // 0x2a8(0x08)
	struct UStaticMeshComponent* Snitch_Mesh; // 0x2b0(0x08)
	float Snitch_Flit_Movement_Alpha_Alpha_75C6E5BF476B916D473F2C81E1260D4D; // 0x2b8(0x04)
	enum class ETimelineDirection Snitch_Flit_Movement_Alpha__Direction_75C6E5BF476B916D473F2C81E1260D4D; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* Snitch_Flit_Movement_Alpha; // 0x2c0(0x08)
	float Snitch_Swoop_Movement_Alpha_Alpha_01097AFF4CC0AFF0CB43A5B57398D72B; // 0x2c8(0x04)
	enum class ETimelineDirection Snitch_Swoop_Movement_Alpha__Direction_01097AFF4CC0AFF0CB43A5B57398D72B; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct UTimelineComponent* Snitch_Swoop_Movement_Alpha; // 0x2d0(0x08)
	float Snitch_Rotation_Alpha_Alpha_332B07AE4F5427C1EAB433A1F72C0AE0; // 0x2d8(0x04)
	enum class ETimelineDirection Snitch_Rotation_Alpha__Direction_332B07AE4F5427C1EAB433A1F72C0AE0; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct UTimelineComponent* Snitch_Rotation_Alpha; // 0x2e0(0x08)
	struct ABP_Snitch_Container_C* Snitch_Box_REF; // 0x2e8(0x08)
	enum class E_Loose_Snitch Snitch_States; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	float Snitch_Speed; // 0x2f4(0x04)
	float Max_Snitch_Wait_Time; // 0x2f8(0x04)
	struct FVector Current_Location; // 0x2fc(0x0c)
	struct FVector Mid_Point; // 0x308(0x0c)
	struct FVector Move_To_Location; // 0x314(0x0c)
	int32_t Flit_Count; // 0x320(0x04)
	int32_t Max_Flit_Cap; // 0x324(0x04)

	void PlayDialogueVO(struct UAvaAudioDialogueEvent* DialogueEvent, struct FDialogueConversationReference DialogueEventName, struct AActor* Actor); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.PlayDialogueVO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FN_Rotate_Face_Destination(float Alpha); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.FN_Rotate_Face_Destination // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RTN_QuadraticBezier(struct FVector A, struct FVector Mid, struct FVector B, float Alpha, struct FVector& Location); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.RTN_QuadraticBezier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void RTN_GetMidOffset(struct FVector A, struct FVector B, struct FVector& OffsetMid); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.RTN_GetMidOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Snitch_Rotation_Alpha__FinishedFunc(); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.Snitch_Rotation_Alpha__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Snitch_Rotation_Alpha__UpdateFunc(); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.Snitch_Rotation_Alpha__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Snitch_Swoop_Movement_Alpha__FinishedFunc(); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.Snitch_Swoop_Movement_Alpha__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Snitch_Swoop_Movement_Alpha__UpdateFunc(); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.Snitch_Swoop_Movement_Alpha__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Snitch_Flit_Movement_Alpha__FinishedFunc(); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.Snitch_Flit_Movement_Alpha__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Snitch_Flit_Movement_Alpha__UpdateFunc(); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.Snitch_Flit_Movement_Alpha__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Event_Switch_State(enum class E_Loose_Snitch Snitch_States); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.Event_Switch_State // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void INIT_Swooping_Movement(); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.INIT_Swooping_Movement // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void INIT_Flit_Motion(); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.INIT_Flit_Motion // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void INIT_VibrateOnSpot(); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.INIT_VibrateOnSpot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Loose_Snitch(int32_t EntryPoint); // Function BP_Loose_Snitch.BP_Loose_Snitch_C.ExecuteUbergraph_BP_Loose_Snitch // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

