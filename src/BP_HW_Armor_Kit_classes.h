// BlueprintGeneratedClass BP_HW_Armor_Kit.BP_HW_Armor_Kit_C
// Size: 0x310 (Inherited: 0x248)
struct ABP_HW_Armor_Kit_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCapsuleComponent* Capsule; // 0x250(0x08)
	struct USkeletalMeshComponent* SK_HW_Armor_Kit; // 0x258(0x08)
	bool Asleep; // 0x260(0x01)
	bool AllowSnapToAttention; // 0x261(0x01)
	bool IsDancing; // 0x262(0x01)
	enum class E_ArmorKit ArmorKit; // 0x263(0x01)
	enum class E_ArmorPose ArmorPose; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct TMap<enum class E_ArmorKit, struct USkeletalMesh*> ArmorKitMap; // 0x268(0x50)
	struct TMap<enum class E_ArmorPose, struct FSTR_ArmorAnimation> ArmorPoseMap; // 0x2b8(0x50)
	struct FTimerHandle AttentionTimer; // 0x308(0x08)

	void UserConstructionScript(); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SnapToAttention(); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.SnapToAttention // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetSnapToAttention(); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.ResetSnapToAttention // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void PlayIdle(); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.PlayIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Happy Feet Start Dancing(); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.Happy Feet Start Dancing // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Happy Feet Stop Dancing(); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.Happy Feet Stop Dancing // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Armor_Kit(int32_t EntryPoint); // Function BP_HW_Armor_Kit.BP_HW_Armor_Kit_C.ExecuteUbergraph_BP_HW_Armor_Kit // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

