// BlueprintGeneratedClass BP_PuffskeinDen_04.BP_PuffskeinDen_04_C
// Size: 0x2f0 (Inherited: 0x248)
struct ABP_PuffskeinDen_04_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse7; // 0x250(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse6; // 0x258(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse5; // 0x260(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse4; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse3; // 0x270(0x08)
	struct UStaticMeshComponent* SM_OL_Rock_SM_Light_G; // 0x278(0x08)
	struct UStaticMeshComponent* SM_OL_Rock_SM_Light_C1; // 0x280(0x08)
	struct UStaticMeshComponent* SM_OL_Rock_SM_Light_I; // 0x288(0x08)
	struct UStaticMeshComponent* SM_OL_Rock_SM_Light_J; // 0x290(0x08)
	struct UStaticMeshComponent* SM_OL_Rock_SM_Light_A1; // 0x298(0x08)
	struct UStaticMeshComponent* SM_OL_Rock_SM_Light_C; // 0x2a0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse2; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_OL_Rock_SM_Light_B; // 0x2b0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse1; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_OL_Rock_SM_Light_A; // 0x2c0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse; // 0x2c8(0x08)
	struct UChildActorComponent* Marker; // 0x2d0(0x08)
	struct USceneComponent* Scene; // 0x2d8(0x08)
	bool Marker OFF; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct UAkAudioEvent* AkEvent; // 0x2e8(0x08)

	void GetDenMarkerOFF(bool& Out); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.GetDenMarkerOFF // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FTransfigurationResource> GetAdditionalItemsReturned(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.GetAdditionalItemsReturned // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsObjectContextValidForTransformation(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.IsObjectContextValidForTransformation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsObjectContextValidForVanishment(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.IsObjectContextValidForVanishment // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeactivateObject(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.DeactivateObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinalizeInitialAnimationState(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.FinalizeInitialAnimationState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectConjured(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.ObjectConjured // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectStreamedSpawnInConfirmed(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.ObjectStreamedSpawnInConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationCancelled(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.ObjectTransformationCancelled // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationConfirmed(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.ObjectTransformationConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationStarted(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.ObjectTransformationStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectVanished(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.ObjectVanished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReactivateObject(); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.ReactivateObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PuffskeinDen_04(int32_t EntryPoint); // Function BP_PuffskeinDen_04.BP_PuffskeinDen_04_C.ExecuteUbergraph_BP_PuffskeinDen_04 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

