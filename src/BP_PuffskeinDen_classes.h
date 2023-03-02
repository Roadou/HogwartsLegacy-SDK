// BlueprintGeneratedClass BP_PuffskeinDen.BP_PuffskeinDen_C
// Size: 0x269 (Inherited: 0x248)
struct ABP_PuffskeinDen_C : AActor {
	struct UStaticMeshComponent* SM_OL_BeastDen_PuffskeinStack; // 0x248(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse; // 0x250(0x08)
	struct UChildActorComponent* Marker; // 0x258(0x08)
	struct USceneComponent* Scene; // 0x260(0x08)
	bool Marker OFF; // 0x268(0x01)

	void GetDenMarkerOFF(bool& Out); // Function BP_PuffskeinDen.BP_PuffskeinDen_C.GetDenMarkerOFF // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_PuffskeinDen.BP_PuffskeinDen_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

