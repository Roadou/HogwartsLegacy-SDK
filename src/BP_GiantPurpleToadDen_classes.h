// BlueprintGeneratedClass BP_GiantPurpleToadDen.BP_GiantPurpleToadDen_C
// Size: 0x271 (Inherited: 0x248)
struct ABP_GiantPurpleToadDen_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* Top of den COL; // 0x250(0x08)
	struct UChildActorComponent* Marker; // 0x258(0x08)
	struct USceneComponent* Scene; // 0x260(0x08)
	struct UStaticMeshComponent* SM_OL_BeastDen_PurpleToad; // 0x268(0x08)
	bool Marker OFF; // 0x270(0x01)

	void GetDenMarkerOFF(bool& Out); // Function BP_GiantPurpleToadDen.BP_GiantPurpleToadDen_C.GetDenMarkerOFF // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_GiantPurpleToadDen.BP_GiantPurpleToadDen_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GiantPurpleToadDen.BP_GiantPurpleToadDen_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GiantPurpleToadDen(int32_t EntryPoint); // Function BP_GiantPurpleToadDen.BP_GiantPurpleToadDen_C.ExecuteUbergraph_BP_GiantPurpleToadDen // (Final|UbergraphFunction) // @ game+0x38a7480
};

