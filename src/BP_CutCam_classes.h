// BlueprintGeneratedClass BP_CutCam.BP_CutCam_C
// Size: 0x3b0 (Inherited: 0x248)
struct ABP_CutCam_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCameraComponent* Camera1; // 0x250(0x08)
	struct USceneComponent* CameraRoot; // 0x258(0x08)
	struct USplineComponent* Spline; // 0x260(0x08)
	struct USceneComponent* Scene; // 0x268(0x08)
	float Timeline_2_NewTrack_0_181A717648D02FC47BC08CAD794F3738; // 0x270(0x04)
	enum class ETimelineDirection Timeline_2__Direction_181A717648D02FC47BC08CAD794F3738; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct UTimelineComponent* Timeline_3; // 0x278(0x08)
	float Timeline_1_NewTrack_0_279F7CA2473E882EB9DE00B1E8ADB4E8; // 0x280(0x04)
	enum class ETimelineDirection Timeline_1__Direction_279F7CA2473E882EB9DE00B1E8ADB4E8; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* Timeline_2; // 0x288(0x08)
	enum class E_CameraType Type; // 0x290(0x01)
	bool DoOnce; // 0x291(0x01)
	char pad_292[0x2]; // 0x292(0x02)
	float Duration; // 0x294(0x04)
	float LookAtTime; // 0x298(0x04)
	float BlendTime; // 0x29c(0x04)
	float FadeTime; // 0x2a0(0x04)
	float EndFadeDelay; // 0x2a4(0x04)
	struct AActor* LookAtActor; // 0x2a8(0x08)
	bool LockPlayer; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct UCameraComponent* Camera; // 0x2b8(0x08)
	struct FVector TargetStartLOC; // 0x2c0(0x0c)
	struct FVector CameraStartLOC; // 0x2cc(0x0c)
	float SplineROTOffset; // 0x2d8(0x04)
	bool LockOrientation; // 0x2dc(0x01)
	bool UseBlendProperties; // 0x2dd(0x01)
	char pad_2DE[0x2]; // 0x2de(0x02)
	float FOV; // 0x2e0(0x04)
	float FOVEnd; // 0x2e4(0x04)
	float SplineTest; // 0x2e8(0x04)
	struct FVector TargetOffset; // 0x2ec(0x0c)
	struct FVector TargetOffsetEnd; // 0x2f8(0x0c)
	struct FVector CameraOffset; // 0x304(0x0c)
	struct FVector Offset; // 0x310(0x0c)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct TArray<struct AActor*> Target; // 0x320(0x10)
	bool ConstantVelocity; // 0x330(0x01)
	bool SuspendEnemies; // 0x331(0x01)
	char pad_332[0x2]; // 0x332(0x02)
	struct FVector CameraOffsetEnd; // 0x334(0x0c)
	struct ACameraStackActor* CamStackActor; // 0x340(0x08)
	struct FMulticastInlineDelegate CamFinished; // 0x348(0x10)
	struct FMulticastInlineDelegate CamStart; // 0x358(0x10)
	bool UseAltReturn; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	float BlendTimeReturn; // 0x36c(0x04)
	float FadeTimeReturn; // 0x370(0x04)
	bool AimAtTargetOnComplete; // 0x374(0x01)
	char pad_375[0x3]; // 0x375(0x03)
	int32_t NoOfSwitches; // 0x378(0x04)
	int32_t Count; // 0x37c(0x04)
	struct UPhoenixHUDWidget* HUDWidgetRef; // 0x380(0x08)
	bool HideHUD; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	float LookAtTimeReturn; // 0x38c(0x04)
	enum class ETargetSpeedMode SpeedMode; // 0x390(0x01)
	bool UseCineCam; // 0x391(0x01)
	char pad_392[0x6]; // 0x392(0x06)
	struct UCameraComponent* CAM; // 0x398(0x08)
	enum class ECameraStackLookAtStrength Look at Strength; // 0x3a0(0x01)
	bool SetInt32; // 0x3a1(0x01)
	char pad_3A2[0x6]; // 0x3a2(0x06)
	struct AActor* ViewTarget; // 0x3a8(0x08)

	void Aim On Complete(); // Function BP_CutCam.BP_CutCam_C.Aim On Complete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSplineCam_Test(float Time); // Function BP_CutCam.BP_CutCam_C.SetSplineCam_Test // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBlend(float Alpha); // Function BP_CutCam.BP_CutCam_C.SetBlend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTarget(); // Function BP_CutCam.BP_CutCam_C.SetTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSplineCam(float Time); // Function BP_CutCam.BP_CutCam_C.SetSplineCam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_CutCam.BP_CutCam_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_CutCam.BP_CutCam_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_CutCam.BP_CutCam_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__FinishedFunc(); // Function BP_CutCam.BP_CutCam_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__UpdateFunc(); // Function BP_CutCam.BP_CutCam_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_CutCam.BP_CutCam_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_CutCam.BP_CutCam_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Reset(); // Function BP_CutCam.BP_CutCam_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_CutCam.BP_CutCam_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_CutCam.BP_CutCam_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveDissalow(); // Function BP_CutCam.BP_CutCam_C.MoveDissalow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveDissalow2(); // Function BP_CutCam.BP_CutCam_C.MoveDissalow2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CutCam(int32_t EntryPoint); // Function BP_CutCam.BP_CutCam_C.ExecuteUbergraph_BP_CutCam // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void CamStart__DelegateSignature(); // Function BP_CutCam.BP_CutCam_C.CamStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CamFinished__DelegateSignature(); // Function BP_CutCam.BP_CutCam_C.CamFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

