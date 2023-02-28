// BlueprintGeneratedClass BP_NavCrawl.BP_NavCrawl_C
// Size: 0x27e (Inherited: 0x248)
struct ABP_NavCrawl_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct FNone* OdcNavMeshVolume; // 0x250(0x08)
	struct UBoxComponent* Crouch_Geo_Enforcer; // 0x258(0x08)
	struct UBoxComponent* Ceiling_NavMesh_UnblockingBox; // 0x260(0x08)
	struct UBoxComponent* Box; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	enum class ETargetSpeedMode SpeedMode; // 0x278(0x01)
	bool GenerateAINavMesh; // 0x279(0x01)
	bool RemoveCeiling; // 0x27a(0x01)
	bool AddCrouchTriangles; // 0x27b(0x01)
	bool DebugRemoveCeiling; // 0x27c(0x01)
	enum class ETargetSpeedMode SpeedModifier; // 0x27d(0x01)

	bool GetDebugDiscardedTriangles(); // Function BP_NavCrawl.BP_NavCrawl_C.GetDebugDiscardedTriangles // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool GetCrouchGeometryBoxComponents(struct TArray<struct UBoxComponent*>& OutBoxComponents); // Function BP_NavCrawl.BP_NavCrawl_C.GetCrouchGeometryBoxComponents // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool GetGeometryExclusionBoxComponents(struct TArray<struct UBoxComponent*>& OutBoxComponents); // Function BP_NavCrawl.BP_NavCrawl_C.GetGeometryExclusionBoxComponents // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool GetGeometryExclusionOOBBs(struct TArray<struct FFallbackStruct>& OutOOBBs); // Function BP_NavCrawl.BP_NavCrawl_C.GetGeometryExclusionOOBBs // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_NavCrawl.BP_NavCrawl_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_NavCrawl.BP_NavCrawl_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_NavCrawl.BP_NavCrawl_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_NavCrawl(int32_t EntryPoint); // Function BP_NavCrawl.BP_NavCrawl_C.ExecuteUbergraph_BP_NavCrawl // (Final|UbergraphFunction) // @ game+0x38a7480
};

