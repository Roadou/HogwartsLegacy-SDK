// BlueprintGeneratedClass BTD_DistanceBetweenLocationsIsUnderThreshold.BTD_DistanceBetweenLocationsIsUnderThreshold_C
// Size: 0xf4 (Inherited: 0xa0)
struct UBTD_DistanceBetweenLocationsIsUnderThreshold_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector LocationA; // 0xa0(0x28)
	struct FBlackboardKeySelector LocationB; // 0xc8(0x28)
	float Threshold; // 0xf0(0x04)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_DistanceBetweenLocationsIsUnderThreshold.BTD_DistanceBetweenLocationsIsUnderThreshold_C.PerformConditionCheckAI // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool PerformConditionCheck(struct AActor* OwnerActor); // Function BTD_DistanceBetweenLocationsIsUnderThreshold.BTD_DistanceBetweenLocationsIsUnderThreshold_C.PerformConditionCheck // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

