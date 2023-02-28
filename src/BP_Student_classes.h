// BlueprintGeneratedClass BP_Student.BP_Student_C
// Size: 0x2538 (Inherited: 0x24f0)
struct ABP_Student_C : ABP_SocialBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x24f0(0x08)
	struct FName DynamicTeamName; // 0x24f8(0x08)
	bool CrimeScenePerceptionTest; // 0x2500(0x01)
	bool NotifyPerceptionTest; // 0x2501(0x01)
	char pad_2502[0x2]; // 0x2502(0x02)
	struct FName TeamName; // 0x2504(0x08)
	char pad_250C[0x4]; // 0x250c(0x04)
	struct AActor* IntroAccioTarget; // 0x2510(0x08)
	struct AActor* IntroLeviosaTarget; // 0x2518(0x08)
	struct UEnemyAIAttackData* ForcedAttack; // 0x2520(0x08)
	struct ASceneRigActor* IntroSR; // 0x2528(0x08)
	struct ANPC_Character* FirstProtector; // 0x2530(0x08)

	void PlayerPerceive(struct ANPC_Character* NPCChar); // Function BP_Student.BP_Student_C.PlayerPerceive // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStationOnFinishedExit(); // Function BP_Student.BP_Student_C.OnStationOnFinishedExit // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Student.BP_Student_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Done(struct AActor* Actor, bool bSuccess, bool bReturnControl); // Function BP_Student.BP_Student_C.Done // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Student_DynamicBranch_K2Node_ComponentBoundEvent_0_DynamicBranchBeginAbility__DelegateSignature(enum class EEnemy_Ability EnemyAbility); // Function BP_Student.BP_Student_C.BndEvt__BP_Student_DynamicBranch_K2Node_ComponentBoundEvent_0_DynamicBranchBeginAbility__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Student(int32_t EntryPoint); // Function BP_Student.BP_Student_C.ExecuteUbergraph_BP_Student // (Final|UbergraphFunction) // @ game+0x38a7480
};

