// BlueprintGeneratedClass BP_SlytherinEntrance.BP_SlytherinEntrance_C
// Size: 0x360 (Inherited: 0x248)
struct ABP_SlytherinEntrance_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* Box; // 0x250(0x08)
	struct UBoxComponent* ClearDoorway; // 0x258(0x08)
	struct UCapsuleComponent* Capsule8; // 0x260(0x08)
	struct UCapsuleComponent* Capsule7; // 0x268(0x08)
	struct UCapsuleComponent* Capsule6; // 0x270(0x08)
	struct UCapsuleComponent* Capsule5; // 0x278(0x08)
	struct UCapsuleComponent* Capsule4; // 0x280(0x08)
	struct UCapsuleComponent* Capsule3; // 0x288(0x08)
	struct UCapsuleComponent* Capsule2; // 0x290(0x08)
	struct UCapsuleComponent* Capsule; // 0x298(0x08)
	struct UBoxComponent* DoorCollision; // 0x2a0(0x08)
	struct UAkComponent* Ak_BP_SlytherinEntrance; // 0x2a8(0x08)
	struct USkeletalMeshComponent* SK_SlytherinDoorArch; // 0x2b0(0x08)
	struct UStaticMeshComponent* Wall; // 0x2b8(0x08)
	struct UBoxComponent* Trigger Volume; // 0x2c0(0x08)
	struct USkeletalMeshComponent* SK_SlytherinEntrance_SnakeCoil; // 0x2c8(0x08)
	struct USceneComponent* Scene; // 0x2d0(0x08)
	float WallHole_CLose_CoilPan_C33F641A4CEC163B4B09A99A15F9D4F6; // 0x2d8(0x04)
	float WallHole_CLose_Time_C33F641A4CEC163B4B09A99A15F9D4F6; // 0x2dc(0x04)
	float WallHole_CLose_AlphaErosionCLOSE_C33F641A4CEC163B4B09A99A15F9D4F6; // 0x2e0(0x04)
	enum class ETimelineDirection WallHole_CLose__Direction_C33F641A4CEC163B4B09A99A15F9D4F6; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct UTimelineComponent* WallHole_CLose; // 0x2e8(0x08)
	float WallHole_OPEN_CoilPan_E840BAAB4F0E0B39D065E18DEEFC15DE; // 0x2f0(0x04)
	float WallHole_OPEN_Time_E840BAAB4F0E0B39D065E18DEEFC15DE; // 0x2f4(0x04)
	float WallHole_OPEN_AlphaErosionOPEN_E840BAAB4F0E0B39D065E18DEEFC15DE; // 0x2f8(0x04)
	enum class ETimelineDirection WallHole_OPEN__Direction_E840BAAB4F0E0B39D065E18DEEFC15DE; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct UTimelineComponent* WallHole_OPEN; // 0x300(0x08)
	struct FRotator StartingRotation; // 0x308(0x0c)
	float OpenSpeed; // 0x314(0x04)
	float OpenAngle; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct TArray<struct AActor*> ActorsInside; // 0x320(0x10)
	bool IsOpen; // 0x330(0x01)
	bool IsOpening; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct UABP_SlytherinEntrance_C* AnimBlueprint_SlytherinEntrance; // 0x338(0x08)
	struct UABP_SlytherinEntrance_Doorway_C* AnimBlueprint_SlytherinDoorway; // 0x340(0x08)
	struct UMaterialInstanceDynamic* SnakeCoilMID; // 0x348(0x08)
	bool SceneRigControlled; // 0x350(0x01)
	bool KeepDoorwayClear; // 0x351(0x01)
	char pad_352[0x6]; // 0x352(0x06)
	struct AAkAcousticPortal* Acoustic Portal; // 0x358(0x08)

	void Can Close(bool& CanClose); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.Can Close // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShouldOpen(bool& NewParam); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.ShouldOpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AllowedCharacter(struct AActor* Actor, bool& Allowed); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.AllowedCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WallHole_OPEN__FinishedFunc(); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.WallHole_OPEN__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void WallHole_OPEN__UpdateFunc(); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.WallHole_OPEN__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void WallHole_CLose__FinishedFunc(); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.WallHole_CLose__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void WallHole_CLose__UpdateFunc(); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.WallHole_CLose__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Outside Box_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.BndEvt__Outside Box_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OpenDoor(); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.OpenDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseDoor(); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.CloseDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetSceneRigControlled(bool Param); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.SetSceneRigControlled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSnakeCollision(enum class ECollisionEnabled NewParam); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.SetSnakeCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearTheDoorway(); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.ClearTheDoorway // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenCompleteEvent(); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.OpenCompleteEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseCompleteEvent(); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.CloseCompleteEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SlytherinEntrance(int32_t EntryPoint); // Function BP_SlytherinEntrance.BP_SlytherinEntrance_C.ExecuteUbergraph_BP_SlytherinEntrance // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

