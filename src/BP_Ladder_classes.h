// BlueprintGeneratedClass BP_Ladder.BP_Ladder_C
// Size: 0x29c (Inherited: 0x250)
struct ABP_Ladder_C : ALadder {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UStaticMeshComponent* Ladder_Top; // 0x258(0x08)
	struct UStaticMeshComponent* Ladder_Bottom; // 0x260(0x08)
	struct UBoxComponent* Box; // 0x268(0x08)
	struct ULadderNavLinkComponent* LadderNavLink; // 0x270(0x08)
	struct UInstancedStaticMeshComponent* Ladder_Mid; // 0x278(0x08)
	struct USceneComponent* Root; // 0x280(0x08)
	int32_t Ladder Height; // 0x288(0x04)
	float Mesh_Height; // 0x28c(0x04)
	float CollisionRadius; // 0x290(0x04)
	float CollisionTopBuffer; // 0x294(0x04)
	float CollisionBottomBuffer; // 0x298(0x04)

	bool CanPlayerClimbLadder(); // Function BP_Ladder.BP_Ladder_C.CanPlayerClimbLadder // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdateCollision(); // Function BP_Ladder.BP_Ladder_C.UpdateCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float GetMeshHeight(); // Function BP_Ladder.BP_Ladder_C.GetMeshHeight // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	int32_t GetLadderHeight(); // Function BP_Ladder.BP_Ladder_C.GetLadderHeight // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Build(); // Function BP_Ladder.BP_Ladder_C.Build // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateNavigationLink(); // Function BP_Ladder.BP_Ladder_C.UpdateNavigationLink // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Ladder.BP_Ladder_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Ladder.BP_Ladder_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnComponentBeginOverlap_Event_1(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Ladder.BP_Ladder_C.OnComponentBeginOverlap_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Ladder.BP_Ladder_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnComponentEndOverlap_Event_1(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Ladder.BP_Ladder_C.OnComponentEndOverlap_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Ladder(int32_t EntryPoint); // Function BP_Ladder.BP_Ladder_C.ExecuteUbergraph_BP_Ladder // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

