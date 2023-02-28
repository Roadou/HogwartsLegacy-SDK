// BlueprintGeneratedClass BTD_IsTargetVelocityAboveThreshold.BTD_IsTargetVelocityAboveThreshold_C
// Size: 0xb0 (Inherited: 0xa0)
struct UBTD_IsTargetVelocityAboveThreshold_C : UBTDecorator_BlueprintBase {
	float Speed; // 0xa0(0x04)
	bool UseAttachParent; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct AActor* Actor; // 0xa8(0x08)

	bool PerformConditionCheck(struct AActor* OwnerActor); // Function BTD_IsTargetVelocityAboveThreshold.BTD_IsTargetVelocityAboveThreshold_C.PerformConditionCheck // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

