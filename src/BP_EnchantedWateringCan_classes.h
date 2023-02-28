// BlueprintGeneratedClass BP_EnchantedWateringCan.BP_EnchantedWateringCan_C
// Size: 0x390 (Inherited: 0x280)
struct ABP_EnchantedWateringCan_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAkComponent* AK_BP_EnchantedWateringCan; // 0x288(0x08)
	struct UStaticMeshComponent* VFX_Location; // 0x290(0x08)
	struct UNiagaraComponent* VFX; // 0x298(0x08)
	struct USkeletalMeshComponent* Watering_CAN; // 0x2a0(0x08)
	struct USceneComponent* Root; // 0x2a8(0x08)
	struct USceneComponent* RotatorPoint; // 0x2b0(0x08)
	float Movement_Timeline_Directional_Rotation_Alpha_946CD0CE4B8429F33B22E195874159B0; // 0x2b8(0x04)
	float Movement_Timeline_Alpha_946CD0CE4B8429F33B22E195874159B0; // 0x2bc(0x04)
	enum class ETimelineDirection Movement_Timeline__Direction_946CD0CE4B8429F33B22E195874159B0; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UTimelineComponent* Movement_Timeline; // 0x2c8(0x08)
	struct FVector Initial_Location; // 0x2d0(0x0c)
	struct FVector Current_Location; // 0x2dc(0x0c)
	struct FVector Arc_Mid_Point; // 0x2e8(0x0c)
	struct FVector Destination_Location; // 0x2f4(0x0c)
	struct FRotator Initial_Rotation; // 0x300(0x0c)
	struct FRotator Current_Rotation; // 0x30c(0x0c)
	struct FRotator Destination_Rotation; // 0x318(0x0c)
	struct FGameplayTag Tag_To_Detect; // 0x324(0x08)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct TArray<struct UWorldEventSocketComponent*> Objects_Array; // 0x330(0x10)
	int32_t Current_Index; // 0x340(0x04)
	float Total_Activity_Time; // 0x344(0x04)
	float Max_Activity_Time; // 0x348(0x04)
	enum class E_WateringCanStates State; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct FTimerHandle Activity_Timer; // 0x350(0x08)
	struct FTimerHandle Behaviour_Timer; // 0x358(0x08)
	int32_t Max_Actions; // 0x360(0x04)
	int32_t Current_Action_Count; // 0x364(0x04)
	struct FRotator Directional_Rotation; // 0x368(0x0c)
	struct FRotator Current_Directional_Rotation; // 0x374(0x0c)
	struct USkeletalMeshComponent* NewVar_2; // 0x380(0x08)
	struct UStaticMeshComponent* NewVar_4; // 0x388(0x08)

	void Set_State(enum class E_WateringCanStates State); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.Set_State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RTN_Quadratic_Bezier(struct FVector A, struct FVector M, struct FVector B, float Alpha, struct FVector& Location); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.RTN_Quadratic_Bezier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void RTN_Arc_Midpoint(struct FVector Location, struct FVector Destination, float Arc_Amount, struct FVector& OffsetMid); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.RTN_Arc_Midpoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Movement_Timeline__FinishedFunc(); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.Movement_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Movement_Timeline__UpdateFunc(); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.Movement_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Move_Object(struct FVector Destination, float Arc_Amount, float Movement_Speed, struct FRotator Movement_Rotation); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.Move_Object // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Play_Custom_Behaviour(); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.Play_Custom_Behaviour // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Move_To_Index(); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.Move_To_Index // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void On_Behaviour_Finished(); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.On_Behaviour_Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void On_Behvaviour_Start(); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.On_Behvaviour_Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_Socket_ROT_For_VFX(); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.Get_Socket_ROT_For_VFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Switch_State(); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.Switch_State // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Stop_Custom_Behaviour(); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.Stop_Custom_Behaviour // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_EnchantedWateringCan(int32_t EntryPoint); // Function BP_EnchantedWateringCan.BP_EnchantedWateringCan_C.ExecuteUbergraph_BP_EnchantedWateringCan // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

