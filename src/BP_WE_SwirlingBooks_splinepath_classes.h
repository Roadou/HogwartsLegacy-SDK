// BlueprintGeneratedClass BP_WE_SwirlingBooks_splinepath.BP_WE_SwirlingBooks_splinepath_C
// Size: 0x2e8 (Inherited: 0x280)
struct ABP_WE_SwirlingBooks_splinepath_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USplineComponent* Spline Component; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	int32_t NumSplinePoints; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<bool> PathData array; // 0x2a0(0x10)
	bool DrawPathPoint Numbers?; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float Floating text Z offset; // 0x2b4(0x04)
	bool Looped Spline?; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct TArray<struct UBoxComponent*> KeySplinePointBox array; // 0x2c0(0x10)
	struct TArray<int32_t> KeySplinePointIndexes; // 0x2d0(0x10)
	int32_t NumberOfBooksToSpawn; // 0x2e0(0x04)
	int32_t NumberOfBooksSpawned; // 0x2e4(0x04)

	void Check component tags for book spawn amount(); // Function BP_WE_SwirlingBooks_splinepath.BP_WE_SwirlingBooks_splinepath_C.Check component tags for book spawn amount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spawn Book(); // Function BP_WE_SwirlingBooks_splinepath.BP_WE_SwirlingBooks_splinepath_C.Spawn Book // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Count number of spline points(); // Function BP_WE_SwirlingBooks_splinepath.BP_WE_SwirlingBooks_splinepath_C.Count number of spline points // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get Spline Data from World Event Locator(); // Function BP_WE_SwirlingBooks_splinepath.BP_WE_SwirlingBooks_splinepath_C.Get Spline Data from World Event Locator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_SwirlingBooks_splinepath.BP_WE_SwirlingBooks_splinepath_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_SwirlingBooks_splinepath.BP_WE_SwirlingBooks_splinepath_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_SwirlingBooks_splinepath.BP_WE_SwirlingBooks_splinepath_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_SwirlingBooks_splinepath(int32_t EntryPoint); // Function BP_WE_SwirlingBooks_splinepath.BP_WE_SwirlingBooks_splinepath_C.ExecuteUbergraph_BP_WE_SwirlingBooks_splinepath // (Final|UbergraphFunction) // @ game+0x38a7480
};

