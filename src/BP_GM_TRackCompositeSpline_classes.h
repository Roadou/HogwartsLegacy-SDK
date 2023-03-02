// BlueprintGeneratedClass BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C
// Size: 0x2d8 (Inherited: 0x248)
struct ABP_GM_TrackCompositeSpline_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct TArray<struct AActor*> TrackPieces1; // 0x258(0x10)
	struct USplineComponent* CompositeSpline1; // 0x268(0x08)
	struct ABP_GM_CartTrack_C* FirstTrackPiece; // 0x270(0x08)
	struct AActor* AddingTrackPiece; // 0x278(0x08)
	float DistanceBetweenCarts; // 0x280(0x04)
	int32_t NumberOfCarts; // 0x284(0x04)
	struct TArray<struct ABP_GM_CartCauldronSmall_C*> CartList; // 0x288(0x10)
	struct TArray<float> InitDistance; // 0x298(0x10)
	enum class E_GM_CartTypes CartType; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	float DS_Thickness; // 0x2ac(0x04)
	float JunctionDistance; // 0x2b0(0x04)
	bool bHackSpawnBug; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct ABP_GM_CartCauldronSmall_C* PreviousSpawner; // 0x2b8(0x08)
	bool bIsStopNDropping; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float Spawnrate; // 0x2c4(0x04)
	float Speed; // 0x2c8(0x04)
	int32_t MaxNumberOfCarts; // 0x2cc(0x04)
	bool bCanSpawnNewCart; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float NoTickRadius; // 0x2d4(0x04)

	void SpawnCart(struct AActor* Class, struct FTransform SpawnTransform, struct ABP_GM_CartCauldronSmall_C*& Cart); // Function BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C.SpawnCart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TestTrackDistance(); // Function BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C.TestTrackDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuildTrackSpline(); // Function BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C.BuildTrackSpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetNextTrackPiece(struct ABP_GM_BaseTrackSpline_C* CurrentTrackPiece, struct ABP_GM_BaseTrackSpline_C*& NextTrackPiece, struct ABP_GM_BaseTrackSpline_C*& Next JunctionPiece, bool& ConvergePoint); // Function BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C.GetNextTrackPiece // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetUpSplinewithCarts(); // Function BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C.SetUpSplinewithCarts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnNewCart(); // Function BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C.SpawnNewCart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCartList(struct ABP_GM_CartCauldronSmall_C*& Item); // Function BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C.UpdateCartList // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_TrackCompositeSpline(int32_t EntryPoint); // Function BP_GM_TRackCompositeSpline.BP_GM_TrackCompositeSpline_C.ExecuteUbergraph_BP_GM_TrackCompositeSpline // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

