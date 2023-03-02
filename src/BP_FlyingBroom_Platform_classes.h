// BlueprintGeneratedClass BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C
// Size: 0x310 (Inherited: 0x248)
struct ABP_FlyingBroom_Platform_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_FlyingBroom_Platform; // 0x250(0x08)
	struct UAkComponent* Ak_BP_FlyingBroom_Platform_Brazier_5; // 0x258(0x08)
	struct UAkComponent* Ak_BP_FlyingBroom_Platform_Brazier_4; // 0x260(0x08)
	struct UAkComponent* Ak_BP_FlyingBroom_Platform_Brazier_3; // 0x268(0x08)
	struct UAkComponent* Ak_BP_FlyingBroom_Platform_Brazier_2; // 0x270(0x08)
	struct UChildActorComponent* BP_OL_BroomActivity_Marker_M; // 0x278(0x08)
	struct UStaticMeshComponent* FlyPlatformLegGrab; // 0x280(0x08)
	struct UStaticMeshComponent* Bottom; // 0x288(0x08)
	struct UStaticMeshComponent* Brazier4; // 0x290(0x08)
	struct UStaticMeshComponent* Brazier3; // 0x298(0x08)
	struct UStaticMeshComponent* Brazier2; // 0x2a0(0x08)
	struct UStaticMeshComponent* Brazier1; // 0x2a8(0x08)
	struct UStaticMeshComponent* OuterRing; // 0x2b0(0x08)
	struct UStaticMeshComponent* InnerRing; // 0x2b8(0x08)
	struct USceneComponent* SharedRoot; // 0x2c0(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x2c8(0x08)
	float StartingRotation; // 0x2d0(0x04)
	bool IsRotating; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	float RotationSpeed; // 0x2d8(0x04)
	float CurrentRotation; // 0x2dc(0x04)
	float TargetRotation; // 0x2e0(0x04)
	float DeltaRotation; // 0x2e4(0x04)
	struct FString BroomPlatformComplete; // 0x2e8(0x10)
	bool PlatformActive; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FString UniqueObjectName; // 0x300(0x10)

	void NewFunction_1(); // Function BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FlyingBroom_Platform(int32_t EntryPoint); // Function BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C.ExecuteUbergraph_BP_FlyingBroom_Platform // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

