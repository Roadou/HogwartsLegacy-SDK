// BlueprintGeneratedClass BP_Sanc_WallDecorationQuidditch.BP_Sanc_WallDecorationQuidditch_C
// Size: 0x378 (Inherited: 0x2a8)
struct ABP_Sanc_WallDecorationQuidditch_C : ATransfigurationObjectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UDeferredChildActorComponent* Deferred_Dressing01; // 0x2b0(0x08)
	struct UConjurationSurfaceShapeComponent* ConjurationSurfaceShape; // 0x2b8(0x08)
	struct UBoxComponent* BoxCollision; // 0x2c0(0x08)
	struct UConjurationSnappingWallComponent* ConjurationSnappingWall; // 0x2c8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse25; // 0x2d0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse22; // 0x2d8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse23; // 0x2e0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse24; // 0x2e8(0x08)
	struct UStaticMeshComponent* SM_HM_Quid_Snitch2; // 0x2f0(0x08)
	struct UStaticMeshComponent* SM_HM_Quid_BallBox_Quaffle_Bludger4; // 0x2f8(0x08)
	struct UStaticMeshComponent* SM_HM_Quid_BallBox_Quaffle_Bludger3; // 0x300(0x08)
	struct UStaticMeshComponent* SM_HM_Quid_BallBox_Quaffle_A2; // 0x308(0x08)
	struct UStaticMeshComponent* SM_HM_BeaterStands_A3_93; // 0x310(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse21; // 0x318(0x08)
	struct UStaticMeshComponent* SM_HM_Quidditch_TrophyLow_G4; // 0x320(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse3; // 0x328(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse2; // 0x330(0x08)
	struct UStaticMeshComponent* SM_HM_Quidditch_TrophyLow_G6; // 0x338(0x08)
	struct UStaticMeshComponent* SM_Sanc_WallPieceShelves_01_74; // 0x340(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse1; // 0x348(0x08)
	struct UStaticMeshComponent* SM_HM_3Broom_BroomstickRack_B6; // 0x350(0x08)
	struct UStaticMeshComponent* SM_HM_3Broom_BroomstickRack_B5; // 0x358(0x08)
	struct UStaticMeshComponent* SM_HM_Honeydukes_broom3; // 0x360(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse; // 0x368(0x08)
	struct USceneComponent* Scene; // 0x370(0x08)

	void ObjectConjured(); // Function BP_Sanc_WallDecorationQuidditch.BP_Sanc_WallDecorationQuidditch_C.ObjectConjured // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationCancelled(); // Function BP_Sanc_WallDecorationQuidditch.BP_Sanc_WallDecorationQuidditch_C.ObjectTransformationCancelled // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationConfirmed(); // Function BP_Sanc_WallDecorationQuidditch.BP_Sanc_WallDecorationQuidditch_C.ObjectTransformationConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectVanished(); // Function BP_Sanc_WallDecorationQuidditch.BP_Sanc_WallDecorationQuidditch_C.ObjectVanished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_Sanc_WallDecorationQuidditch.BP_Sanc_WallDecorationQuidditch_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanc_WallDecorationQuidditch(int32_t EntryPoint); // Function BP_Sanc_WallDecorationQuidditch.BP_Sanc_WallDecorationQuidditch_C.ExecuteUbergraph_BP_Sanc_WallDecorationQuidditch // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

