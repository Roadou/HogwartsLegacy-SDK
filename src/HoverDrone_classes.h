// Class HoverDrone.HoverDroneConfigObject
// Size: 0x38 (Inherited: 0x28)
struct UHoverDroneConfigObject : UObject {
	struct AActor* m_HoverDroneControllerClass; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// Class HoverDrone.HoverDroneController
// Size: 0x340 (Inherited: 0x248)
struct AHoverDroneController : AActor {
	char pad_248[0x10]; // 0x248(0x10)
	struct FMulticastInlineDelegate OnControlModeChanged; // 0x258(0x10)
	struct FMulticastInlineDelegate OnToggleMiniMap; // 0x268(0x10)
	char pad_278[0x8]; // 0x278(0x08)
	struct APawn* ControlModePawnClass[0x3]; // 0x280(0x18)
	char pad_298[0x40]; // 0x298(0x40)
	struct UObject* m_MinimapWidgetClass; // 0x2d8(0x08)
	struct AActor* m_pFollowActor; // 0x2e0(0x08)
	struct FHoverDroneConfigStruct MyStruct; // 0x2e8(0x10)
	struct UInputComponent* m_pInputComponent; // 0x2f8(0x08)
	struct APlayerController* m_pPlayerController; // 0x300(0x08)
	float JumpToBookmarkCameraFadeTime; // 0x308(0x04)
	float JumpToBookmarkCameraHoldBlackTime; // 0x30c(0x04)
	char pad_310[0x30]; // 0x310(0x30)

	void ToggleHUD(); // Function HoverDrone.HoverDroneController.ToggleHUD // (Final|Native|Public|BlueprintCallable) // @ game+0x1848980
	void StartHoverDroneFromSystemMenu(); // Function HoverDrone.HoverDroneController.StartHoverDroneFromSystemMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x1848960
	void SetPlayerBounds(struct FVector BoundsMin, struct FVector BoundsMax); // Function HoverDrone.HoverDroneController.SetPlayerBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1848880
	void GetPlayerBounds(struct FVector& Max, struct FVector& Min); // Function HoverDrone.HoverDroneController.GetPlayerBounds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1848770
	float GetPawnAltitude(); // Function HoverDrone.HoverDroneController.GetPawnAltitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1848740
	struct APhoenixHoverDronePawn* GetDronePawn(); // Function HoverDrone.HoverDroneController.GetDronePawn // (Final|Native|Public|BlueprintCallable) // @ game+0x1848710
	struct FString GetControlModeString(); // Function HoverDrone.HoverDroneController.GetControlModeString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1848690
	enum class EHoverDroneControlMode GetControlMode(); // Function HoverDrone.HoverDroneController.GetControlMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1848660
};

// Class HoverDrone.HoverDroneHUD
// Size: 0x358 (Inherited: 0x338)
struct AHoverDroneHUD : AHUD {
	char pad_338[0x20]; // 0x338(0x20)
};

// Class HoverDrone.PhoenixHoverDroneMovementComponent
// Size: 0x3b8 (Inherited: 0x168)
struct UPhoenixHoverDroneMovementComponent : UFloatingPawnMovement {
	char pad_168[0x48]; // 0x168(0x48)
	float RotAcceleration; // 0x1b0(0x04)
	float RotDeceleration; // 0x1b4(0x04)
	float MaxPitchRotSpeed; // 0x1b8(0x04)
	float MaxYawRotSpeed; // 0x1bc(0x04)
	float TurboRotAcceleration; // 0x1c0(0x04)
	float TurboRotDeceleration; // 0x1c4(0x04)
	float TurboMaxPitchRotSpeed; // 0x1c8(0x04)
	float TurboMaxYawRotSpeed; // 0x1cc(0x04)
	struct FVector2D TurboAccelerationRange; // 0x1d0(0x08)
	struct FVector2D TurboAccelerationAltitudeRange; // 0x1d8(0x08)
	float TurboDeceleration; // 0x1e0(0x04)
	char pad_1E4[0x1d4]; // 0x1e4(0x1d4)
};

// Class HoverDrone.PhoenixHoverDronePawn
// Size: 0x3d0 (Inherited: 0x2d0)
struct APhoenixHoverDronePawn : ADefaultPawn {
	float MaxAccelToGravRatio; // 0x2d0(0x04)
	float DroneTiltInterpSpeed_Accel; // 0x2d4(0x04)
	float DroneTiltInterpSpeed_Decel; // 0x2d8(0x04)
	float ZoomRate; // 0x2dc(0x04)
	float FOVInterpSpeed; // 0x2e0(0x04)
	float maxFOV; // 0x2e4(0x04)
	float minFOV; // 0x2e8(0x04)
	float SpeedAdjustment; // 0x2ec(0x04)
	float SpeedAdjustRate; // 0x2f0(0x04)
	float SpeedAdjustMin; // 0x2f4(0x04)
	float SpeedAdjustMax; // 0x2f8(0x04)
	float MinIconScale; // 0x2fc(0x04)
	float MinIconDist; // 0x300(0x04)
	float MaxIconDist; // 0x304(0x04)
	bool bAutoFocus; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	float AutoFocusInterpSpeed; // 0x30c(0x04)
	float CameraApertureFStop; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct UCurveVector* ScreenFringeFOVCurve; // 0x318(0x08)
	struct FVector TouchingActorEntryPosition; // 0x320(0x0c)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct UUserWidget* m_progressWidgetClass; // 0x330(0x08)
	struct UUserWidget* m_followWidgetClass; // 0x338(0x08)
	struct UActorComponent* m_filterComponentClass; // 0x340(0x08)
	struct UObject* m_MinimapWidgetClass; // 0x348(0x08)
	char pad_350[0x18]; // 0x350(0x18)
	struct UCapsuleComponent* FoliageOverlapComponent; // 0x368(0x08)
	struct UCapsuleComponent* ActorOverlapComponent; // 0x370(0x08)
	char pad_378[0x40]; // 0x378(0x40)
	struct UUserWidget* m_pMinimapWidget; // 0x3b8(0x08)
	struct UUserWidget* m_pProgressWidget; // 0x3c0(0x08)
	struct UUserWidget* m_pFollowWidget; // 0x3c8(0x08)

	bool IsMaintainingConstantAltitude(); // Function HoverDrone.PhoenixHoverDronePawn.IsMaintainingConstantAltitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1848850
	float GetAltitude(); // Function HoverDrone.PhoenixHoverDronePawn.GetAltitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1848630
	void AllowIcons(bool InVal); // Function HoverDrone.PhoenixHoverDronePawn.AllowIcons // (Final|Native|Public|BlueprintCallable) // @ game+0x18485a0
	void ActorOverlapEndOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function HoverDrone.PhoenixHoverDronePawn.ActorOverlapEndOverlap // (Final|Native|Protected) // @ game+0x1848440
	void ActorOverlapBeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo); // Function HoverDrone.PhoenixHoverDronePawn.ActorOverlapBeginOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x1848220
};

