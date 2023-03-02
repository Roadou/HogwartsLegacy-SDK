// BlueprintGeneratedClass BP_StatueHiddenDoor.BP_StatueHiddenDoor_C
// Size: 0x428 (Inherited: 0x248)
struct ABP_StatueHiddenDoor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x250(0x08)
	struct UStaticMeshComponent* SM_StatueHiddenDoorCOL; // 0x258(0x08)
	struct UAkComponent* Ak_BP_StatueHiddenDoor; // 0x260(0x08)
	struct UChildActorComponent* TorchChild; // 0x268(0x08)
	struct UStaticMeshComponent* Alcove; // 0x270(0x08)
	struct UStaticMeshComponent* Cube; // 0x278(0x08)
	struct UObjectStateComponent* ObjectState; // 0x280(0x08)
	struct UBoxComponent* Box; // 0x288(0x08)
	struct USceneComponent* CamLOC2; // 0x290(0x08)
	struct USceneComponent* CamLOC1; // 0x298(0x08)
	struct UCameraComponent* Camera; // 0x2a0(0x08)
	struct UCapsuleComponent* Capsule; // 0x2a8(0x08)
	struct UStaticMeshComponent* Plate; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_C_Dun_Wall_Broken_SM_C_Dun_Wall_BrokenExt______; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_C_Dun_Wall_Broken_SM_C_Dun_Wall_Broken; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x2c8(0x08)
	struct UStaticMeshComponent* StaticMesh6; // 0x2d0(0x08)
	struct UStaticMeshComponent* Wall2; // 0x2d8(0x08)
	struct UStaticMeshComponent* Wall; // 0x2e0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2e8(0x08)
	struct USceneComponent* Scene; // 0x2f0(0x08)
	struct UStaticMeshComponent* Rotator; // 0x2f8(0x08)
	float Timeline_0_NewTrack_0_426C346849DE31727D9561B6049B26BE; // 0x300(0x04)
	enum class ETimelineDirection Timeline_0__Direction_426C346849DE31727D9561B6049B26BE; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct UTimelineComponent* Timeline_1; // 0x308(0x08)
	float Rotation_TRimScale_48F6CAFA4755F8401D1A7FBE65A01BD4; // 0x310(0x04)
	float Rotation_AlcoveScale_48F6CAFA4755F8401D1A7FBE65A01BD4; // 0x314(0x04)
	float Rotation_NewTrack_0_48F6CAFA4755F8401D1A7FBE65A01BD4; // 0x318(0x04)
	enum class ETimelineDirection Rotation__Direction_48F6CAFA4755F8401D1A7FBE65A01BD4; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct UTimelineComponent* Rotation; // 0x320(0x08)
	float BaseROT; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct AActor* HiddenItem; // 0x330(0x08)
	struct TArray<struct UStaticMeshComponent*> UnbrokenWall; // 0x338(0x10)
	struct FVector PlateLOC; // 0x348(0x0c)
	char pad_354[0x4]; // 0x354(0x04)
	struct TArray<struct USceneComponent*> CamLOCS; // 0x358(0x10)
	float Dilation; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct ABP_StatueHiddenDoor_C* Link; // 0x370(0x08)
	bool Rotating; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FMulticastInlineDelegate ResetTrigger; // 0x380(0x10)
	bool LoadLevelOnRotation; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct TSoftObjectPtr<UWorld> LevelToLoad; // 0x398(0x28)
	struct FString LevelLoadOptions; // 0x3c0(0x10)
	bool bTorchAttached; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct ABP_Torch_C* ExternalTorch; // 0x3d8(0x08)
	struct ABP_Torch_C* TorchRef; // 0x3e0(0x08)
	enum class EEnvironment Environment; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	int32_t PropIndex; // 0x3ec(0x04)
	bool bStartLit; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float LightIntensity; // 0x3f4(0x04)
	float Torch_ZPos; // 0x3f8(0x04)
	float Torch_ZRot; // 0x3fc(0x04)
	struct FVector Torch_Scale; // 0x400(0x0c)
	bool Player; // 0x40c(0x01)
	bool Busy; // 0x40d(0x01)
	bool RotatingFromLink; // 0x40e(0x01)
	char pad_40F[0x1]; // 0x40f(0x01)
	struct UStaticMeshComponent* HiddenPhys; // 0x410(0x08)
	bool LinkLock; // 0x418(0x01)
	bool DoRespawnCheck; // 0x419(0x01)
	char pad_41A[0x6]; // 0x41a(0x06)
	struct AActor* Respawnlocation; // 0x420(0x08)

	bool DisallowArrestoMomentum(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.DisallowArrestoMomentum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClosestCameraPoint(struct FTransform& Closest, struct FTransform& Furthest); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.ClosestCameraPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Rotation__FinishedFunc(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.Rotation__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Rotation__UpdateFunc(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.Rotation__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Rotation__NewTrack_1__EventFunc(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.Rotation__NewTrack_1__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumBegin(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.OnArrestoMomentumBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumEnd(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.OnArrestoMomentumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Rotate(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.Rotate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCamera(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.SetCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reset(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TorchRef_K2Node_ComponentBoundEvent_0_ArrestoStart__DelegateSignature(bool bStart, struct UArrestoMomentumComponent* ArrestoComp, float TimeDilation); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.BndEvt__TorchRef_K2Node_ComponentBoundEvent_0_ArrestoStart__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TorchRef_K2Node_ComponentBoundEvent_1_OnLit__DelegateSignature(struct ABP_Torch_C* Torch); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.BndEvt__TorchRef_K2Node_ComponentBoundEvent_1_OnLit__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TorchRef_K2Node_ComponentBoundEvent_6_OnExtinguished__DelegateSignature(struct ABP_Torch_C* Torch); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.BndEvt__TorchRef_K2Node_ComponentBoundEvent_6_OnExtinguished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ForceRotate(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.ForceRotate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StatueHiddenDoor(int32_t EntryPoint); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.ExecuteUbergraph_BP_StatueHiddenDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void ResetTrigger__DelegateSignature(); // Function BP_StatueHiddenDoor.BP_StatueHiddenDoor_C.ResetTrigger__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

