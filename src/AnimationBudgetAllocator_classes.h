// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x13a9150
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x13a9090
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0xf60 (Inherited: 0xf30)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent {
	char pad_F30[0x20]; // 0xf30(0x20)
	char bAutoRegisterWithBudgetAllocator : 1; // 0xf50(0x01)
	char bAutoCalculateSignificance : 1; // 0xf50(0x01)
	char bShouldUseActorRenderedFlag : 1; // 0xf50(0x01)
	char pad_F50_3 : 5; // 0xf50(0x01)
	char pad_F51[0xf]; // 0xf51(0x0f)

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator // (Final|Native|Public|BlueprintCallable) // @ game+0x13a92e0
};

