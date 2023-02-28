// Class AnimationSharing.AnimSharingStateInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct UAnimSharingStateInstance : UAnimInstance {
	struct UAnimSequence* AnimationToPlay; // 0x2b8(0x08)
	float PermutationTimeOffset; // 0x2c0(0x04)
	float PlayRate; // 0x2c4(0x04)
	bool bStateBool; // 0x2c8(0x01)
	struct UAnimSharingInstance* Instance; // 0x2d0(0x08)
	char pad_2D9[0x7]; // 0x2d9(0x07)

	void GetInstancedActors(struct TArray<struct AActor*>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x252a790
};

// Class AnimationSharing.AnimSharingTransitionInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UAnimSharingTransitionInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> FromComponent; // 0x2b8(0x08)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> ToComponent; // 0x2c0(0x08)
	float BlendTime; // 0x2c8(0x04)
	bool bBlendBool; // 0x2cc(0x01)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UAnimSharingAdditiveInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> BaseComponent; // 0x2b8(0x08)
	struct TWeakObjectPtr<struct UAnimSequence> AdditiveAnimation; // 0x2c0(0x08)
	float Alpha; // 0x2c8(0x04)
	bool bStateBool; // 0x2cc(0x01)
};

// Class AnimationSharing.AnimSharingInstance
// Size: 0x120 (Inherited: 0x28)
struct UAnimSharingInstance : UObject {
	struct TArray<struct AActor*> RegisteredActors; // 0x28(0x10)
	char pad_38[0x50]; // 0x38(0x50)
	struct UAnimationSharingStateProcessor* StateProcessor; // 0x88(0x08)
	char pad_90[0x38]; // 0x90(0x38)
	struct TArray<struct UAnimSequence*> UsedAnimationSequences; // 0xc8(0x10)
	char pad_D8[0x10]; // 0xd8(0x10)
	struct UEnum* StateEnum; // 0xe8(0x08)
	struct AActor* SharingActor; // 0xf0(0x08)
	char pad_F8[0x28]; // 0xf8(0x28)
};

// Class AnimationSharing.AnimationSharingManager
// Size: 0xc0 (Inherited: 0x28)
struct UAnimationSharingManager : UObject {
	struct TArray<struct USkeleton*> Skeletons; // 0x28(0x10)
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData; // 0x38(0x10)
	char pad_48[0x70]; // 0x48(0x70)
	struct UAnimationSharingSetup* InitializationSetup; // 0xb8(0x08)

	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP // (Final|Native|Public|BlueprintCallable) // @ game+0x252aa00
	struct UAnimationSharingManager* GetAnimationSharingManager(struct UObject* WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x252a6d0
	bool CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x252a600
	bool AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x252a5d0
};

// Class AnimationSharing.AnimationSharingSetup
// Size: 0x48 (Inherited: 0x28)
struct UAnimationSharingSetup : UObject {
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28(0x10)
	struct FAnimationSharingScalability ScalabilitySettings; // 0x38(0x10)
};

// Class AnimationSharing.AnimationSharingStateProcessor
// Size: 0x50 (Inherited: 0x28)
struct UAnimationSharingStateProcessor : UObject {
	struct TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28(0x28)

	void ProcessActorState(int32_t& OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x252a840
	struct UEnum* GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum // (Native|Event|Public|BlueprintEvent) // @ game+0x252a760
};

