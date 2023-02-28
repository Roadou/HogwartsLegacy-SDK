// BlueprintGeneratedClass BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C
// Size: 0x800 (Inherited: 0x5e8)
struct ABP_TransfigurationMovementStyle_DefaultGround_C : ABP_TransfigurationMovementStyle_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e8(0x08)
	struct UDecalComponent* RegionDecal9; // 0x5f0(0x08)
	struct UDecalComponent* RegionDecal8; // 0x5f8(0x08)
	struct UDecalComponent* RegionDecal7; // 0x600(0x08)
	struct UDecalComponent* RegionDecal6; // 0x608(0x08)
	struct UDecalComponent* RegionDecal5; // 0x610(0x08)
	struct UDecalComponent* RegionDecal4; // 0x618(0x08)
	struct UDecalComponent* RegionDecal3; // 0x620(0x08)
	struct UDecalComponent* RegionDecal2; // 0x628(0x08)
	struct UDecalComponent* RegionDecal1; // 0x630(0x08)
	struct USceneComponent* Region9; // 0x638(0x08)
	struct USceneComponent* Region8; // 0x640(0x08)
	struct USceneComponent* Region7; // 0x648(0x08)
	struct USceneComponent* Region6; // 0x650(0x08)
	struct USceneComponent* Region5; // 0x658(0x08)
	struct USceneComponent* Region4; // 0x660(0x08)
	struct USceneComponent* Region3; // 0x668(0x08)
	struct USceneComponent* Region2; // 0x670(0x08)
	struct USceneComponent* Region1; // 0x678(0x08)
	struct USceneComponent* RegionDecals; // 0x680(0x08)
	struct UStaticMeshComponent* BeamBMesh; // 0x688(0x08)
	struct UStaticMeshComponent* BeamCMesh; // 0x690(0x08)
	struct UStaticMeshComponent* BeamDMesh; // 0x698(0x08)
	struct UStaticMeshComponent* BeamAMesh; // 0x6a0(0x08)
	struct USceneComponent* BeamD; // 0x6a8(0x08)
	struct USceneComponent* BeamC; // 0x6b0(0x08)
	struct USceneComponent* BeamB; // 0x6b8(0x08)
	struct USceneComponent* BeamA; // 0x6c0(0x08)
	struct UDecalComponent* Decal; // 0x6c8(0x08)
	struct UStaticMeshComponent* Beam4Mesh; // 0x6d0(0x08)
	struct USceneComponent* Beam4; // 0x6d8(0x08)
	struct UStaticMeshComponent* Beam3Mesh; // 0x6e0(0x08)
	struct USceneComponent* Beam3; // 0x6e8(0x08)
	struct UStaticMeshComponent* Beam2Mesh; // 0x6f0(0x08)
	struct USceneComponent* Beam2; // 0x6f8(0x08)
	struct UStaticMeshComponent* Beam1Mesh; // 0x700(0x08)
	struct USceneComponent* Beam1; // 0x708(0x08)
	struct USceneComponent* Beams; // 0x710(0x08)
	float PlaceTimeline_DistanceFromSurface_E1E02CDF45363D0D74CF43B8D0F7B6EB; // 0x718(0x04)
	enum class ETimelineDirection PlaceTimeline__Direction_E1E02CDF45363D0D74CF43B8D0F7B6EB; // 0x71c(0x01)
	char pad_71D[0x3]; // 0x71d(0x03)
	struct UTimelineComponent* PlaceTimeline; // 0x720(0x08)
	float MovementTimeline_HeightOffset_51B15FD044B4AD220542F59FD1F5B2A3; // 0x728(0x04)
	enum class ETimelineDirection MovementTimeline__Direction_51B15FD044B4AD220542F59FD1F5B2A3; // 0x72c(0x01)
	char pad_72D[0x3]; // 0x72d(0x03)
	struct UTimelineComponent* MovementTimeline; // 0x730(0x08)
	float LiftTimeline_DistanceFromSurface_DD302BA54D96212CC51A4C821CF49AD2; // 0x738(0x04)
	enum class ETimelineDirection LiftTimeline__Direction_DD302BA54D96212CC51A4C821CF49AD2; // 0x73c(0x01)
	char pad_73D[0x3]; // 0x73d(0x03)
	struct UTimelineComponent* LiftTimeline; // 0x740(0x08)
	char pad_748[0x8]; // 0x748(0x08)
	struct FTransform TransformOffset; // 0x750(0x30)
	float LevitationDistance; // 0x780(0x04)
	char pad_784[0x4]; // 0x784(0x04)
	struct UMaterialInterface* ValidBeamMaterial; // 0x788(0x08)
	struct UMaterialInterface* ErrorBeamMaterial; // 0x790(0x08)
	struct UMaterialInterface* ValidPlacementMaterial; // 0x798(0x08)
	struct UMaterialInterface* ErrorPlacementMaterial; // 0x7a0(0x08)
	struct UMaterialInterface* ErrorEdgeMaterial; // 0x7a8(0x08)
	struct TArray<bool> BeamLit; // 0x7b0(0x10)
	float BeamOffsetFromEdge; // 0x7c0(0x04)
	char pad_7C4[0x4]; // 0x7c4(0x04)
	struct TArray<struct UDecalComponent*> AllRegionDecals; // 0x7c8(0x10)
	struct TArray<struct UStaticMeshComponent*> AllBeams; // 0x7d8(0x10)
	struct TArray<struct USceneComponent*> AllRegions; // 0x7e8(0x10)
	struct ABP_TransfigurationPreviewPlacementAnimator_C* PlacementAnimator; // 0x7f8(0x08)

	void SetWallTransformFromBounds(struct FVector& LocalExtent, struct FVector& LocalLocation); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.SetWallTransformFromBounds // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTransformFromBounds(struct FVector& LocalExtent, struct FVector& LocalLocation); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.SetTransformFromBounds // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update Decals Visibility(bool CanPlace); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.Update Decals Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBeamBlockedState(struct UPrimitiveComponent* BeamComponent, bool IsBlocked); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.SetBeamBlockedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateBeamStates(); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.UpdateBeamStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LiftTimeline__FinishedFunc(); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.LiftTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void LiftTimeline__UpdateFunc(); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.LiftTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void MovementTimeline__FinishedFunc(); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.MovementTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void MovementTimeline__UpdateFunc(); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.MovementTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void PlaceTimeline__FinishedFunc(); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.PlaceTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void PlaceTimeline__UpdateFunc(); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.PlaceTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void PlaceTimeline__Impact__EventFunc(); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.PlaceTimeline__Impact__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Lift(); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.Lift // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Place(); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.Place // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CanPlace(bool bCanPlace); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.CanPlace // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowDecal(bool bShow); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.ShowDecal // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearLitBeams(); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.ClearLitBeams // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ShowBeamAtLocalLocation(struct FVector& InLocationLocal); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.ShowBeamAtLocalLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TransfigurationMovementStyle_DefaultGround(int32_t EntryPoint); // Function BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.ExecuteUbergraph_BP_TransfigurationMovementStyle_DefaultGround // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

