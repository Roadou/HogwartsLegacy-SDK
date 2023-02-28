// BlueprintGeneratedClass BP_FlyingStairManager.BP_FlyingStairManager_C
// Size: 0x314 (Inherited: 0x248)
struct ABP_FlyingStairManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* InTrigger; // 0x250(0x08)
	struct USceneComponent* Scene; // 0x258(0x08)
	struct UAkComponent* Ak_audio location; // 0x260(0x08)
	struct USceneComponent* BottomRoot; // 0x268(0x08)
	struct USceneComponent* TopRoot; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	bool buildClockwise; // 0x280(0x01)
	bool isInner; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	int32_t numSections; // 0x284(0x04)
	float rotationOffsetInner; // 0x288(0x04)
	float verticalOffsetInner; // 0x28c(0x04)
	float rotationOffsetOuter; // 0x290(0x04)
	float verticalOffsetOuter; // 0x294(0x04)
	struct TArray<struct USkeletalMeshComponent*> StairsUp; // 0x298(0x10)
	bool Test; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct TArray<struct USkeletalMeshComponent*> StairsDown; // 0x2b0(0x10)
	struct TArray<struct USkeletalMeshComponent*> StairsDownReverse; // 0x2c0(0x10)
	float PositionUpOff; // 0x2d0(0x04)
	float PositionDownOff; // 0x2d4(0x04)
	struct TArray<struct USkeletalMeshComponent*> StairsUpReverse; // 0x2d8(0x10)
	float PositionUpOn; // 0x2e8(0x04)
	float PositionDownOn; // 0x2ec(0x04)
	struct USkeletalMeshComponent* UpInt0; // 0x2f0(0x08)
	struct TArray<struct UPrimitiveComponent*> Collision; // 0x2f8(0x10)
	int32_t OnInt; // 0x308(0x04)
	int32_t OffInt; // 0x30c(0x04)
	bool Done1; // 0x310(0x01)
	bool Done2; // 0x311(0x01)
	bool Done3; // 0x312(0x01)
	bool Done4; // 0x313(0x01)

	void ClampedArrayItem(struct TArray<struct USkeletalMeshComponent*>& Array, int32_t Value, struct USkeletalMeshComponent*& Output, float& Position, bool& Done); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.ClampedArrayItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearSteps(); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.ClearSteps // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RemoveFromStairs(struct AActor*& ItemToFind, bool Top); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.RemoveFromStairs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddToStairs(struct AActor*& ItemToFind); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.AddToStairs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TurnOn(); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.TurnOn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOff(); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.TurnOff // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoop(); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.OnLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OffLoop(); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.OffLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_FlyingStairManager_InTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.BndEvt__BP_FlyingStairManager_InTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_FlyingStairManager_InTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.BndEvt__BP_FlyingStairManager_InTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FlyingStairManager(int32_t EntryPoint); // Function BP_FlyingStairManager.BP_FlyingStairManager_C.ExecuteUbergraph_BP_FlyingStairManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

