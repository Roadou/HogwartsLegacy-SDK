// BlueprintGeneratedClass BP_Sanc_WallPiece_M_Potnr.BP_Sanc_WallPiece_M_Potnr_C
// Size: 0x3b8 (Inherited: 0x2a8)
struct ABP_Sanc_WallPiece_M_Potnr_C : ATransfigurationObjectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UCapsuleComponent* CapsuleCollision; // 0x2b0(0x08)
	struct UBoxComponent* BoxCollision1; // 0x2b8(0x08)
	struct UBoxComponent* BoxCollision; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticMeshComponent02; // 0x2c8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse10; // 0x2d0(0x08)
	struct UStaticMeshComponent* StaticMeshComponent08; // 0x2d8(0x08)
	struct UStaticMeshComponent* StaticMeshComponent01; // 0x2e0(0x08)
	struct UStaticMeshComponent* StaticMeshComponent03; // 0x2e8(0x08)
	struct UStaticMeshComponent* StaticMeshComponent04; // 0x2f0(0x08)
	struct UStaticMeshComponent* StaticMeshComponent05; // 0x2f8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse9; // 0x300(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse8; // 0x308(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse7; // 0x310(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse6; // 0x318(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse5; // 0x320(0x08)
	struct UStaticMeshComponent* StaticMeshComponent012; // 0x328(0x08)
	struct UStaticMeshComponent* StaticMeshComponent010; // 0x330(0x08)
	struct UStaticMeshComponent* StaticMeshComponent09; // 0x338(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse4; // 0x340(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse3; // 0x348(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse2; // 0x350(0x08)
	struct UStaticMeshComponent* StaticMeshComponent011; // 0x358(0x08)
	struct UStaticMeshComponent* StaticMeshComponent0; // 0x360(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse1; // 0x368(0x08)
	struct UStaticMeshComponent* StaticMeshComponent015; // 0x370(0x08)
	struct UStaticMeshComponent* StaticMeshComponent014; // 0x378(0x08)
	struct UStaticMeshComponent* StaticMeshComponent013; // 0x380(0x08)
	struct UStaticMeshComponent* StaticMeshComponent07; // 0x388(0x08)
	struct UStaticMeshComponent* StaticMeshComponent06; // 0x390(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse; // 0x398(0x08)
	struct UConjurationSnappingWallComponent* ConjurationSnappingWall; // 0x3a0(0x08)
	struct UConjurationSurfaceShapeComponent* ConjurationSurfaceShape; // 0x3a8(0x08)
	struct USceneComponent* SharedRoot; // 0x3b0(0x08)

	void ObjectConjured(); // Function BP_Sanc_WallPiece_M_Potnr.BP_Sanc_WallPiece_M_Potnr_C.ObjectConjured // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationCancelled(); // Function BP_Sanc_WallPiece_M_Potnr.BP_Sanc_WallPiece_M_Potnr_C.ObjectTransformationCancelled // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationConfirmed(); // Function BP_Sanc_WallPiece_M_Potnr.BP_Sanc_WallPiece_M_Potnr_C.ObjectTransformationConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectVanished(); // Function BP_Sanc_WallPiece_M_Potnr.BP_Sanc_WallPiece_M_Potnr_C.ObjectVanished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_Sanc_WallPiece_M_Potnr.BP_Sanc_WallPiece_M_Potnr_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanc_WallPiece_M_Potnr(int32_t EntryPoint); // Function BP_Sanc_WallPiece_M_Potnr.BP_Sanc_WallPiece_M_Potnr_C.ExecuteUbergraph_BP_Sanc_WallPiece_M_Potnr // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

