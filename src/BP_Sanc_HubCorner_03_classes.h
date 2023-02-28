// BlueprintGeneratedClass BP_Sanc_HubCorner_03.BP_Sanc_HubCorner_03_C
// Size: 0x330 (Inherited: 0x2a8)
struct ABP_Sanc_HubCorner_03_C : ATransfigurationStructureBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UCameraStackFramingLocationComponent* CameraStackFramingLocation; // 0x2b0(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup01; // 0x2b8(0x08)
	struct UOdcObstacleComponent* OdcObstacle; // 0x2c0(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup03; // 0x2c8(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup02; // 0x2d0(0x08)
	struct USceneComponent* NavObstacleSetup; // 0x2d8(0x08)
	struct USceneComponent* CornerWall_WallPiece_05; // 0x2e0(0x08)
	struct USceneComponent* CornerWall_Column_04; // 0x2e8(0x08)
	struct USceneComponent* CornerWall_WallPiece_04; // 0x2f0(0x08)
	struct USceneComponent* CornerWall_Column_03; // 0x2f8(0x08)
	struct USceneComponent* CornerWall_WallPiece_03; // 0x300(0x08)
	struct USceneComponent* CornerWall_WallPiece_02; // 0x308(0x08)
	struct USceneComponent* CornerWall_Column_02; // 0x310(0x08)
	struct USceneComponent* CornerWall_Column_01; // 0x318(0x08)
	struct USceneComponent* CornerWall_WallPiece_01; // 0x320(0x08)
	struct USceneComponent* Scene; // 0x328(0x08)

	void SetUpBookChildActor(struct UObject* ChildActor, struct TArray<struct USplineComponent*>& SplineArray); // Function BP_Sanc_HubCorner_03.BP_Sanc_HubCorner_03_C.SetUpBookChildActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sanc_HubCorner_03.BP_Sanc_HubCorner_03_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanc_HubCorner_03(int32_t EntryPoint); // Function BP_Sanc_HubCorner_03.BP_Sanc_HubCorner_03_C.ExecuteUbergraph_BP_Sanc_HubCorner_03 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

