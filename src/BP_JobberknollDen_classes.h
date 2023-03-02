// BlueprintGeneratedClass BP_JobberknollDen.BP_JobberknollDen_C
// Size: 0x2b8 (Inherited: 0x248)
struct ABP_JobberknollDen_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* Nest 04; // 0x250(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse3; // 0x258(0x08)
	struct UStaticMeshComponent* Nest 03; // 0x260(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse2; // 0x268(0x08)
	struct UStaticMeshComponent* Nest 02; // 0x270(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse1; // 0x278(0x08)
	struct UStaticMeshComponent* Nest 01; // 0x280(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse; // 0x288(0x08)
	struct UChildActorComponent* Marker; // 0x290(0x08)
	struct USceneComponent* Scene; // 0x298(0x08)
	bool Marker OFF; // 0x2a0(0x01)
	bool Nest 01 OFF; // 0x2a1(0x01)
	bool Nest 02 OFF; // 0x2a2(0x01)
	bool Nest 03 OFF; // 0x2a3(0x01)
	bool Nest 04 OFF; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UAkAudioEvent* AkEvent; // 0x2a8(0x08)
	struct UStaticMeshComponent* Hit Component; // 0x2b0(0x08)

	void GetDenMarkerOFF(bool& Out); // Function BP_JobberknollDen.BP_JobberknollDen_C.GetDenMarkerOFF // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FTransfigurationResource> GetAdditionalItemsReturned(); // Function BP_JobberknollDen.BP_JobberknollDen_C.GetAdditionalItemsReturned // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsObjectContextValidForTransformation(); // Function BP_JobberknollDen.BP_JobberknollDen_C.IsObjectContextValidForTransformation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsObjectContextValidForVanishment(); // Function BP_JobberknollDen.BP_JobberknollDen_C.IsObjectContextValidForVanishment // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_JobberknollDen.BP_JobberknollDen_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeactivateObject(); // Function BP_JobberknollDen.BP_JobberknollDen_C.DeactivateObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinalizeInitialAnimationState(); // Function BP_JobberknollDen.BP_JobberknollDen_C.FinalizeInitialAnimationState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectConjured(); // Function BP_JobberknollDen.BP_JobberknollDen_C.ObjectConjured // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectStreamedSpawnInConfirmed(); // Function BP_JobberknollDen.BP_JobberknollDen_C.ObjectStreamedSpawnInConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationCancelled(); // Function BP_JobberknollDen.BP_JobberknollDen_C.ObjectTransformationCancelled // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationConfirmed(); // Function BP_JobberknollDen.BP_JobberknollDen_C.ObjectTransformationConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationStarted(); // Function BP_JobberknollDen.BP_JobberknollDen_C.ObjectTransformationStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectVanished(); // Function BP_JobberknollDen.BP_JobberknollDen_C.ObjectVanished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReactivateObject(); // Function BP_JobberknollDen.BP_JobberknollDen_C.ReactivateObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_JobberknollDen.BP_JobberknollDen_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_JobberknollDen(int32_t EntryPoint); // Function BP_JobberknollDen.BP_JobberknollDen_C.ExecuteUbergraph_BP_JobberknollDen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

