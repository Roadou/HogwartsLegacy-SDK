// BlueprintGeneratedClass BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C
// Size: 0x328 (Inherited: 0x248)
struct ABP_Super_Smash_Peeves_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Sphere1; // 0x250(0x08)
	struct UChildActorComponent* BP_DB_Character; // 0x258(0x08)
	struct UChildActorComponent* ItemsInArm; // 0x260(0x08)
	struct USphereComponent* Sphere; // 0x268(0x08)
	struct UArrowComponent* Arrow; // 0x270(0x08)
	struct UArrowComponent* Arrow1; // 0x278(0x08)
	struct ABP_Super_Smash_Bounds_C* Bounds_REF; // 0x280(0x08)
	struct UABP_Super_Smash_Peeves_C* ABP_REF; // 0x288(0x08)
	bool Is_Throwing; // 0x290(0x01)
	bool Is_Reloading; // 0x291(0x01)
	bool Is_Taunting?; // 0x292(0x01)
	char pad_293[0x1]; // 0x293(0x01)
	struct FVector Peeves_Hand_Location; // 0x294(0x0c)
	struct UCustomizableCharacterComponent* CustomizationComponent_REF; // 0x2a0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh_REF; // 0x2a8(0x08)
	enum class E_Super_Smash_Move_States Movement_Setting; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct TArray<struct UStaticMeshComponent*> Items_In_Arm; // 0x2b8(0x10)
	struct ABP_Super_Smash_Items_C* Items_BP_REF; // 0x2c8(0x08)
	int32_t Next_Item_Index; // 0x2d0(0x04)
	int32_t Taunt_ID; // 0x2d4(0x04)
	struct TArray<int32_t> Taunt_ID_Array; // 0x2d8(0x10)
	struct TArray<int32_t> Dialogue_ID_Array; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnDiveEnd; // 0x2f8(0x10)
	enum class E_Super_Smash_ObjectList ChosenObjects; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct TArray<struct UChildActorComponent*> ItemsPeevesIsHolding; // 0x310(0x10)
	struct ABP_Super_Smash_Bounds_C* Super Smash Bounds REF; // 0x320(0x08)

	void RTN_ItemsInArms(struct TArray<struct ABP_Super_Smash_In_Hand_Base_C*>& AvailableItemsInLeftArm); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.RTN_ItemsInArms // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Is_Dialogue_Playing?(bool& Is_Playing?); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Is_Dialogue_Playing? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void RemoveItemFromInArm(int32_t Index); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.RemoveItemFromInArm // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Attach_Items_To_Peeves(); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Attach_Items_To_Peeves // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_Is_Taunting?(bool Taunting?); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Set_Is_Taunting? // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_Is_Exit?(bool Exit?); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Set_Is_Exit? // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_Strafe_Alpha(float Alpha); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Set_Strafe_Alpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_Movement_Strafe(enum class E_Super_Smash_Move_States Movement_State); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Set_Movement_Strafe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_Is_Throwing?(bool Throwing?); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Set_Is_Throwing? // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_Is_Reloading?(bool Reloading?); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Set_Is_Reloading? // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCustomisationComponent(struct UCustomizableCharacterComponent*& Customization Component); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.GetCustomisationComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void OnCharacterLoaded(struct AActor* Actor); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.OnCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RTN_Hand_Position(struct FVector& Position, struct FRotator& Rotation); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.RTN_Hand_Position // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Drop_Jars(); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Drop_Jars // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Clutch_Taunt_Dialogue(); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Clutch_Taunt_Dialogue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Laugh_Dialogue(); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Laugh_Dialogue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Clap_Taunt_Dialogue(); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Clap_Taunt_Dialogue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Point_Taunt_Dialogue(); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Point_Taunt_Dialogue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Throw_Taunt_Dialogue(); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.Throw_Taunt_Dialogue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupItemsInLeftArm(); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.SetupItemsInLeftArm // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChatacterLoaded(struct AActor* Actor); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.ChatacterLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Super_Smash_Peeves(int32_t EntryPoint); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.ExecuteUbergraph_BP_Super_Smash_Peeves // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnDiveEnd__DelegateSignature(); // Function BP_Super_Smash_Peeves.BP_Super_Smash_Peeves_C.OnDiveEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

