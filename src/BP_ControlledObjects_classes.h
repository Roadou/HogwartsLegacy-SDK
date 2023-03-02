// BlueprintGeneratedClass BP_ControlledObjects.BP_ControlledObjects_C
// Size: 0x428 (Inherited: 0x248)
struct ABP_ControlledObjects_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBP_AutosaveComponent_C* BP_AutosaveComponent; // 0x250(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x258(0x08)
	struct UAkComponent* Ak_BP_ControlledObjects; // 0x260(0x08)
	struct USplineComponent* Spline; // 0x268(0x08)
	struct USceneComponent* Scene; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float MovementTimeline_MovementCurve_D0BEBF6A44197B635BCDEFBD3AFAA299; // 0x280(0x04)
	enum class ETimelineDirection MovementTimeline__Direction_D0BEBF6A44197B635BCDEFBD3AFAA299; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* MovementTimeline; // 0x288(0x08)
	struct UStaticMesh* StaticMesh; // 0x290(0x08)
	struct AActor* Blueprint; // 0x298(0x08)
	struct TArray<struct AActor*> Attached Actors; // 0x2a0(0x10)
	struct ABP_CutCam_C* CutCam; // 0x2b0(0x08)
	float CutCamDelay; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FTransform TargetLocation; // 0x2c0(0x30)
	struct FTransform StartingTransform; // 0x2f0(0x30)
	bool UseSpline; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	float Delay; // 0x324(0x04)
	float MoveSpeed; // 0x328(0x04)
	float ReverseSpeed; // 0x32c(0x04)
	bool Auto Oscillate; // 0x330(0x01)
	bool Switch Controlled Osscilation; // 0x331(0x01)
	char pad_332[0x2]; // 0x332(0x02)
	float EndMoveDelay (Oscillation Only); // 0x334(0x04)
	float EndReverseDelay(Oscillation Only); // 0x338(0x04)
	bool Loop; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct FLinearColor SplineColor; // 0x340(0x10)
	int32_t #ofSwitches; // 0x350(0x04)
	int32_t Counter; // 0x354(0x04)
	bool Use Looping Audio; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct UAkAudioEvent* Movement Audio; // 0x360(0x08)
	bool Ready; // 0x368(0x01)
	bool UseExternalCurve; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct UCurveFloat* ExternalCurve; // 0x370(0x08)
	float Rotation Rate X ; // 0x378(0x04)
	float Rotation Rate Y; // 0x37c(0x04)
	float Rotation Rate Z; // 0x380(0x04)
	bool Reset on Player Death; // 0x384(0x01)
	bool KillActor; // 0x385(0x01)
	char pad_386[0x2]; // 0x386(0x02)
	float Timestamp; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct UAkAudioEvent* ChildActorSound; // 0x390(0x08)
	bool CanMove; // 0x398(0x01)
	bool RestoreFromSave; // 0x399(0x01)
	bool WriteStat; // 0x39a(0x01)
	char pad_39B[0x1]; // 0x39b(0x01)
	struct FName SaveStat; // 0x39c(0x08)
	int32_t SaveStateValue; // 0x3a4(0x04)
	bool AllowMovementPostAutosave; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UAkAudioEvent* Loop Audio Up Start; // 0x3b0(0x08)
	struct UAkAudioEvent* Loop Audio Up Stop; // 0x3b8(0x08)
	struct UAkAudioEvent* Loop Audio Down Start; // 0x3c0(0x08)
	struct UAkAudioEvent* Loop Audio Down Stop; // 0x3c8(0x08)
	struct FName Loop Audio Up RTPC Name; // 0x3d0(0x08)
	struct FName Loop Audio Down RTPC Name; // 0x3d8(0x08)
	float Move Value; // 0x3e0(0x04)
	float Current Move Value; // 0x3e4(0x04)
	struct FMulticastInlineDelegate ControlledObjectActivated; // 0x3e8(0x10)
	bool Play Screen Shake; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct UCameraShakeBase* ScreenShake; // 0x400(0x08)
	bool PlayAudioOnOneActor; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct AActor* AudioActor; // 0x410(0x08)
	struct FMulticastInlineDelegate MovementFinished; // 0x418(0x10)

	void SetAudioRTPC(struct AActor* AudioActorIn, bool UpCentric); // Function BP_ControlledObjects.BP_ControlledObjects_C.SetAudioRTPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AttachActors(); // Function BP_ControlledObjects.BP_ControlledObjects_C.AttachActors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_ControlledObjects.BP_ControlledObjects_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MovementTimeline__FinishedFunc(); // Function BP_ControlledObjects.BP_ControlledObjects_C.MovementTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void MovementTimeline__UpdateFunc(); // Function BP_ControlledObjects.BP_ControlledObjects_C.MovementTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_ControlledObjects.BP_ControlledObjects_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ControlledObjects.BP_ControlledObjects_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BeginOscillation(); // Function BP_ControlledObjects.BP_ControlledObjects_C.BeginOscillation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reverse(); // Function BP_ControlledObjects.BP_ControlledObjects_C.Reverse // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaySound(); // Function BP_ControlledObjects.BP_ControlledObjects_C.PlaySound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndSound(); // Function BP_ControlledObjects.BP_ControlledObjects_C.EndSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_ControlledObjects.BP_ControlledObjects_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_ControlledObjects.BP_ControlledObjects_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CharacterDead(struct UObject* Caller); // Function BP_ControlledObjects.BP_ControlledObjects_C.CharacterDead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timer(); // Function BP_ControlledObjects.BP_ControlledObjects_C.Timer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_ControlledObjects.BP_ControlledObjects_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reset(); // Function BP_ControlledObjects.BP_ControlledObjects_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Move(float Move Amount); // Function BP_ControlledObjects.BP_ControlledObjects_C.Move // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ControlledObjects(int32_t EntryPoint); // Function BP_ControlledObjects.BP_ControlledObjects_C.ExecuteUbergraph_BP_ControlledObjects // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void MovementFinished__DelegateSignature(); // Function BP_ControlledObjects.BP_ControlledObjects_C.MovementFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ControlledObjectActivated__DelegateSignature(); // Function BP_ControlledObjects.BP_ControlledObjects_C.ControlledObjectActivated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

