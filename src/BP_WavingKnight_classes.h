// BlueprintGeneratedClass BP_WavingKnight.BP_WavingKnight_C
// Size: 0x2a8 (Inherited: 0x248)
struct ABP_WavingKnight_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x250(0x08)
	struct UBoxComponent* Box; // 0x258(0x08)
	struct UObjectStateComponent* ObjectState; // 0x260(0x08)
	struct UArrowComponent* Arrow; // 0x268(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float PrecisionY; // 0x280(0x04)
	float PrecisionZ; // 0x284(0x04)
	bool WavingKnight; // 0x288(0x01)
	bool HoldWeapon; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct TArray<struct UAnimSequence*> Anim; // 0x290(0x10)
	struct USkeletalMeshComponent* NewVar_1; // 0x2a0(0x08)

	void UserConstructionScript(); // Function BP_WavingKnight.BP_WavingKnight_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WavingKnight.BP_WavingKnight_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WavingKnight.BP_WavingKnight_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function BP_WavingKnight.BP_WavingKnight_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WavingKnight(int32_t EntryPoint); // Function BP_WavingKnight.BP_WavingKnight_C.ExecuteUbergraph_BP_WavingKnight // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

