// BlueprintGeneratedClass BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C
// Size: 0x2b0 (Inherited: 0x248)
struct ABP_Sanc_CauldronPile_02A_Static_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse5; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMesh3; // 0x258(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse4; // 0x260(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x268(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x270(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse3; // 0x278(0x08)
	struct UStaticMeshComponent* StaticMesh6; // 0x280(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse2; // 0x288(0x08)
	struct UStaticMeshComponent* StaticMesh5; // 0x290(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse1; // 0x298(0x08)
	struct USceneComponent* SharedRoot; // 0x2a0(0x08)
	struct UAkAudioEvent* AkEvent; // 0x2a8(0x08)

	struct TArray<struct FTransfigurationResource> GetAdditionalItemsReturned(); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.GetAdditionalItemsReturned // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsObjectContextValidForTransformation(); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.IsObjectContextValidForTransformation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsObjectContextValidForVanishment(); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.IsObjectContextValidForVanishment // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeactivateObject(); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.DeactivateObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinalizeInitialAnimationState(); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.FinalizeInitialAnimationState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectConjured(); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.ObjectConjured // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectStreamedSpawnInConfirmed(); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.ObjectStreamedSpawnInConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationCancelled(); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.ObjectTransformationCancelled // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationConfirmed(); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.ObjectTransformationConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationStarted(); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.ObjectTransformationStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectVanished(); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.ObjectVanished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReactivateObject(); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.ReactivateObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanc_CauldronPile_02A_Static(int32_t EntryPoint); // Function BP_Sanc_CauldronPile_02A_Static.BP_Sanc_CauldronPile_02A_Static_C.ExecuteUbergraph_BP_Sanc_CauldronPile_02A_Static // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

