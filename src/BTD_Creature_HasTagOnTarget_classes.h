// BlueprintGeneratedClass BTD_Creature_HasTagOnTarget.BTD_Creature_HasTagOnTarget_C
// Size: 0xd0 (Inherited: 0xa0)
struct UBTD_Creature_HasTagOnTarget_C : UBTDecorator_BlueprintBase {
	struct FName TagID; // 0xa0(0x08)
	struct FBlackboardKeySelector TargetActor; // 0xa8(0x28)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_Creature_HasTagOnTarget.BTD_Creature_HasTagOnTarget_C.PerformConditionCheckAI // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool PerformConditionCheck(struct AActor* OwnerActor); // Function BTD_Creature_HasTagOnTarget.BTD_Creature_HasTagOnTarget_C.PerformConditionCheck // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

