// BlueprintGeneratedClass BP_MusicManager.BP_MusicManager_C
// Size: 0x2c4 (Inherited: 0x248)
struct ABP_MusicManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* AkBellNote; // 0x250(0x08)
	struct UStaticMeshComponent* SM_SisterBell_B; // 0x258(0x08)
	struct UObjectStateComponent* ObjectState; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	float Timeline_0_NewTrack_0_022546464C80DBB813FD95A4C648080A; // 0x270(0x04)
	enum class ETimelineDirection Timeline_0__Direction_022546464C80DBB813FD95A4C648080A; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct UTimelineComponent* Timeline_1; // 0x278(0x08)
	struct UStaticMeshComponent* Mesh; // 0x280(0x08)
	struct FString Note; // 0x288(0x10)
	struct UAkComponent* BP COM 38 Barrel Piano Play Note; // 0x298(0x08)
	float Roll; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct ABP_MusicPuzzle_C* MusicPuzzle; // 0x2a8(0x08)
	struct UDecalComponent* NoteMesh; // 0x2b0(0x08)
	struct FVector Scale; // 0x2b8(0x0c)

	void Timeline_0__FinishedFunc(); // Function BP_MusicManager.BP_MusicManager_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_MusicManager.BP_MusicManager_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_MusicManager.BP_MusicManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_MusicManager.BP_MusicManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnComponentHit_Event_1(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_MusicManager.BP_MusicManager_C.OnComponentHit_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayNote(struct UDecalComponent* Mesh); // Function BP_MusicManager.BP_MusicManager_C.PlayNote // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MusicManager(int32_t EntryPoint); // Function BP_MusicManager.BP_MusicManager_C.ExecuteUbergraph_BP_MusicManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

