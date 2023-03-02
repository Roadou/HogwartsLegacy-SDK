// BlueprintGeneratedClass BP_WE_SwirlingBooks_book.BP_WE_SwirlingBooks_book_C
// Size: 0x2e0 (Inherited: 0x280)
struct ABP_WE_SwirlingBooks_book_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USlaveToSplineComponent* SlaveToSpline; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct TArray<struct UStaticMesh*> Book meshes; // 0x298(0x10)
	struct ABP_WE_SwirlingBooks_splinepath_C* Spline path ref; // 0x2a8(0x08)
	struct USplineComponent* Spline component ref; // 0x2b0(0x08)
	struct TArray<int32_t> Key Spline point indexes; // 0x2b8(0x10)
	float Book move speed; // 0x2c8(0x04)
	float Minimum flight time; // 0x2cc(0x04)
	float Offscreen time; // 0x2d0(0x04)
	int32_t Starting Spline point; // 0x2d4(0x04)
	int32_t NumBooksToSpawn; // 0x2d8(0x04)
	int32_t NumBooksSpawned; // 0x2dc(0x04)

	void Add Books(float Lag amount, float Book Spacing); // Function BP_WE_SwirlingBooks_book.BP_WE_SwirlingBooks_book_C.Add Books // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Start from specified spline point(int32_t Spline point num); // Function BP_WE_SwirlingBooks_book.BP_WE_SwirlingBooks_book_C.Start from specified spline point // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Start from random Key spline point(); // Function BP_WE_SwirlingBooks_book.BP_WE_SwirlingBooks_book_C.Start from random Key spline point // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Book speed(); // Function BP_WE_SwirlingBooks_book.BP_WE_SwirlingBooks_book_C.Set Book speed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_SwirlingBooks_book.BP_WE_SwirlingBooks_book_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_SwirlingBooks_book.BP_WE_SwirlingBooks_book_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_SwirlingBooks_book.BP_WE_SwirlingBooks_book_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_SwirlingBooks_book(int32_t EntryPoint); // Function BP_WE_SwirlingBooks_book.BP_WE_SwirlingBooks_book_C.ExecuteUbergraph_BP_WE_SwirlingBooks_book // (Final|UbergraphFunction) // @ game+0x38a7480
};

