// BlueprintGeneratedClass BP_HW_Bust.BP_HW_Bust_C
// Size: 0x2d4 (Inherited: 0x248)
struct ABP_HW_Bust_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCapsuleComponent* Capsule; // 0x250(0x08)
	struct UPoseableMeshComponent* PoseableMesh; // 0x258(0x08)
	struct USceneComponent* Scene; // 0x260(0x08)
	bool AllowSnapToAttention; // 0x268(0x01)
	enum class E_BustType BustType; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct TMap<enum class E_BustType, struct FSTR_BustInfo> BustTypeMap; // 0x270(0x50)
	bool Asleep; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float Old Head Value; // 0x2c4(0x04)
	struct FRotator NeckBone; // 0x2c8(0x0c)

	void UserConstructionScript(); // Function BP_HW_Bust.BP_HW_Bust_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_Bust.BP_HW_Bust_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_HW_Bust.BP_HW_Bust_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_HW_Bust.BP_HW_Bust_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_HW_Bust.BP_HW_Bust_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_HW_Bust.BP_HW_Bust_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_HW_Bust.BP_HW_Bust_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_HW_Bust.BP_HW_Bust_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_HW_Bust.BP_HW_Bust_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_HW_Bust.BP_HW_Bust_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HW_Bust.BP_HW_Bust_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_HW_Bust.BP_HW_Bust_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HW_Bust.BP_HW_Bust_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Bust(int32_t EntryPoint); // Function BP_HW_Bust.BP_HW_Bust_C.ExecuteUbergraph_BP_HW_Bust // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

