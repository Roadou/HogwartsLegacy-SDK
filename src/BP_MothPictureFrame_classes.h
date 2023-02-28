// BlueprintGeneratedClass BP_MothPictureFrame.BP_MothPictureFrame_C
// Size: 0x429 (Inherited: 0x2b0)
struct ABP_MothPictureFrame_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USphereComponent* Sphere1; // 0x2b8(0x08)
	struct UChildActorComponent* BP_HM_HW_MappedItems_Marker; // 0x2c0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c8(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_DissolveScreen; // 0x2d8(0x08)
	struct UChildActorComponent* MothTarget1; // 0x2e0(0x08)
	struct UStaticMeshComponent* SM_HW_Lumos_Picture_Screen; // 0x2e8(0x08)
	struct USphereComponent* Sphere; // 0x2f0(0x08)
	struct USkeletalMeshComponent* SK_HW_Lumos_Picture_Frame; // 0x2f8(0x08)
	struct USceneComponent* SharedRoot; // 0x300(0x08)
	float Timeline_0_NewTrack_0_A74E2E03428E92CD5D89D1B90D413B1B; // 0x308(0x04)
	enum class ETimelineDirection Timeline_0__Direction_A74E2E03428E92CD5D89D1B90D413B1B; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x310(0x08)
	bool Ready; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	int32_t Counter; // 0x31c(0x04)
	struct TArray<struct UChildActorComponent*> MothTargets; // 0x320(0x10)
	bool PlayerLumosOn; // 0x330(0x01)
	bool PlayerNear; // 0x331(0x01)
	bool Complete; // 0x332(0x01)
	bool Activate; // 0x333(0x01)
	char pad_334[0x4]; // 0x334(0x04)
	struct UPrimitiveComponent* DynamicMaterial; // 0x338(0x08)
	struct UTexture* Texture; // 0x340(0x08)
	enum class E_LumosPictureScreen_Textures SelectScreenLocation; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x350(0x08)
	struct FMulticastInlineDelegate FrameSolved; // 0x358(0x10)
	struct FMulticastInlineDelegate FrameEnabled; // 0x368(0x10)
	struct UMaterialInstanceDynamic* DissolveMaterialInstance; // 0x378(0x08)
	struct FName SparkleBurstPoint; // 0x380(0x08)
	struct TArray<struct UNiagaraComponent*> MothTrails; // 0x388(0x10)
	struct FName StatName; // 0x398(0x08)
	int32_t TargetValue; // 0x3a0(0x04)
	struct FName Knowledge Subject; // 0x3a4(0x08)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct ABP_Moth_C* Moth; // 0x3b0(0x08)
	bool UseMissionLock; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	struct FName MissionName; // 0x3bc(0x08)
	float DistanceToMoveDownPaper; // 0x3c4(0x04)
	struct ABP_FieldGuidePage_Reward_C* Page; // 0x3c8(0x08)
	float StartMovingPageTime; // 0x3d0(0x04)
	float PageMovingDuration; // 0x3d4(0x04)
	struct FVector FinalPageLocation; // 0x3d8(0x0c)
	struct FVector StartingPageLocation; // 0x3e4(0x0c)
	struct FString PageSpawnedString; // 0x3f0(0x10)
	struct FString PageCollectedString; // 0x400(0x10)
	struct FString PaintingActivatedString; // 0x410(0x10)
	struct UNiagaraSystem* DeathDissolveVFX; // 0x420(0x08)
	bool PageSpawned; // 0x428(0x01)

	void TurnOffMinimap(); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.TurnOffMinimap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Is Occupied(); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.Is Occupied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Is Vacant(); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.Is Vacant // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LumosStarted(struct UObject* Caller); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.LumosStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LumosStopped(struct UObject* Caller); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.LumosStopped // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_MothPictureFrame_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.BndEvt__BP_MothPictureFrame_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_MothPictureFrame_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.BndEvt__BP_MothPictureFrame_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void MothIdleBreak(struct UObject* Caller, int32_t int); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.MothIdleBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spawn Exp Page(); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.Spawn Exp Page // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPaintingActive(); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.SetPaintingActive // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PuzzleComplete(struct UObject* Caller); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.PuzzleComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PageCollected(struct UObject* Caller); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.PageCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MothPictureFrame(int32_t EntryPoint); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.ExecuteUbergraph_BP_MothPictureFrame // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void FrameEnabled__DelegateSignature(bool IsActive); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.FrameEnabled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FrameSolved__DelegateSignature(); // Function BP_MothPictureFrame.BP_MothPictureFrame_C.FrameSolved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

