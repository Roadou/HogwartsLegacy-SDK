// BlueprintGeneratedClass BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C
// Size: 0x358 (Inherited: 0x248)
struct ABP_Sanc_TrashPileTiny_02A_Static_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCapsuleComponent* Capsule; // 0x250(0x08)
	struct UStaticMeshComponent* Chair7; // 0x258(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse25; // 0x260(0x08)
	struct UStaticMeshComponent* Chair6; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse24; // 0x270(0x08)
	struct UStaticMeshComponent* Chair5; // 0x278(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse23; // 0x280(0x08)
	struct UStaticMeshComponent* Chair4; // 0x288(0x08)
	struct UStaticMeshComponent* Chair1; // 0x290(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse22; // 0x298(0x08)
	struct UStaticMeshComponent* Chair3; // 0x2a0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse21; // 0x2a8(0x08)
	struct UStaticMeshComponent* Chair2; // 0x2b0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse17; // 0x2b8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse16; // 0x2c0(0x08)
	struct UStaticMeshComponent* Chest; // 0x2c8(0x08)
	struct UStaticMeshComponent* books3; // 0x2d0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse19; // 0x2d8(0x08)
	struct UStaticMeshComponent* Books2; // 0x2e0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse18; // 0x2e8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse15; // 0x2f0(0x08)
	struct UStaticMeshComponent* Books; // 0x2f8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse20; // 0x300(0x08)
	struct UStaticMeshComponent* Vase2; // 0x308(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse55; // 0x310(0x08)
	struct UStaticMeshComponent* vase3; // 0x318(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse54; // 0x320(0x08)
	struct UStaticMeshComponent* vase1; // 0x328(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse53; // 0x330(0x08)
	struct UBoxComponent* BoxCollision1; // 0x338(0x08)
	struct UBoxComponent* BoxCollision; // 0x340(0x08)
	struct USceneComponent* SharedRoot; // 0x348(0x08)
	struct UAkAudioEvent* AkEvent; // 0x350(0x08)

	struct TArray<struct FTransfigurationResource> GetAdditionalItemsReturned(); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.GetAdditionalItemsReturned // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsObjectContextValidForTransformation(); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.IsObjectContextValidForTransformation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsObjectContextValidForVanishment(); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.IsObjectContextValidForVanishment // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeactivateObject(); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.DeactivateObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinalizeInitialAnimationState(); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.FinalizeInitialAnimationState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectConjured(); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.ObjectConjured // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectStreamedSpawnInConfirmed(); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.ObjectStreamedSpawnInConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationCancelled(); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.ObjectTransformationCancelled // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationConfirmed(); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.ObjectTransformationConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationStarted(); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.ObjectTransformationStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectVanished(); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.ObjectVanished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReactivateObject(); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.ReactivateObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanc_TrashPileTiny_02A_Static(int32_t EntryPoint); // Function BP_Sanc_TrashPileTiny_02A_Static.BP_Sanc_TrashPileTiny_02A_Static_C.ExecuteUbergraph_BP_Sanc_TrashPileTiny_02A_Static // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

