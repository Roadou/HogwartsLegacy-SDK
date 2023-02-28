// Class CinematicCamera.CineCameraComponent
// Size: 0x980 (Inherited: 0x880)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x880(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x88c(0x0c)
	struct FCameraLensSettings LensSettings; // 0x898(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x8b0(0x58)
	float CurrentFocalLength; // 0x908(0x04)
	float CurrentAperture; // 0x90c(0x04)
	float CurrentFocusDistance; // 0x910(0x04)
	char pad_914[0xc]; // 0x914(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x920(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x930(0x10)
	struct FString DefaultFilmbackPresetName; // 0x940(0x10)
	struct FString DefaultFilmbackPreset; // 0x950(0x10)
	struct FString DefaultLensPresetName; // 0x960(0x10)
	float DefaultLensFocalLength; // 0x970(0x04)
	float DefaultLensFStop; // 0x974(0x04)
	char pad_978[0x8]; // 0x978(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x4f77b60
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x4f77ac0
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|BlueprintCallable) // @ game+0x4f77a40
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f77a10
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f77930
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f778b0
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f77880
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f777a0
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f77720
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f77660
};

// Class CinematicCamera.CameraRig_Crane
// Size: 0x278 (Inherited: 0x248)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x248(0x04)
	float CraneYaw; // 0x24c(0x04)
	float CraneArmLength; // 0x250(0x04)
	bool bLockMountPitch; // 0x254(0x01)
	bool bLockMountYaw; // 0x255(0x01)
	char pad_256[0x2]; // 0x256(0x02)
	struct USceneComponent* TransformComponent; // 0x258(0x08)
	struct USceneComponent* CraneYawControl; // 0x260(0x08)
	struct USceneComponent* CranePitchControl; // 0x268(0x08)
	struct USceneComponent* CraneCameraMount; // 0x270(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x268 (Inherited: 0x248)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x248(0x04)
	bool bLockOrientationToRail; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct USceneComponent* TransformComponent; // 0x250(0x08)
	struct USplineComponent* RailSplineComponent; // 0x258(0x08)
	struct USceneComponent* RailCameraMount; // 0x260(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x171d2d0
};

// Class CinematicCamera.CineCameraActor
// Size: 0x8d0 (Inherited: 0x870)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x870(0x50)
	char pad_8C0[0x10]; // 0x8c0(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f77640
};

