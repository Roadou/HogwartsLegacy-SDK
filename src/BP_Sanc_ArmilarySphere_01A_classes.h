// BlueprintGeneratedClass BP_Sanc_ArmilarySphere_01A.BP_Sanc_ArmilarySphere_01A_C
// Size: 0x2c8 (Inherited: 0x2a8)
struct ABP_Sanc_ArmilarySphere_01A_C : ATransfigurationObjectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x2b0(0x08)
	struct UConjurationSnappingFootprintComponent* ConjurationSnappingFootprint; // 0x2b8(0x08)
	struct UStaticMeshComponent* StaticMeshComponent0; // 0x2c0(0x08)

	void ObjectConjured(); // Function BP_Sanc_ArmilarySphere_01A.BP_Sanc_ArmilarySphere_01A_C.ObjectConjured // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationCancelled(); // Function BP_Sanc_ArmilarySphere_01A.BP_Sanc_ArmilarySphere_01A_C.ObjectTransformationCancelled // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationConfirmed(); // Function BP_Sanc_ArmilarySphere_01A.BP_Sanc_ArmilarySphere_01A_C.ObjectTransformationConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectVanished(); // Function BP_Sanc_ArmilarySphere_01A.BP_Sanc_ArmilarySphere_01A_C.ObjectVanished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanc_ArmilarySphere_01A(int32_t EntryPoint); // Function BP_Sanc_ArmilarySphere_01A.BP_Sanc_ArmilarySphere_01A_C.ExecuteUbergraph_BP_Sanc_ArmilarySphere_01A // (Final|UbergraphFunction) // @ game+0x38a7480
};

