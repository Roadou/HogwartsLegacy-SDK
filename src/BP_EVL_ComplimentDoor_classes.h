// BlueprintGeneratedClass BP_EVL_ComplimentDoor.BP_EVL_ComplimentDoor_C
// Size: 0x2d0 (Inherited: 0x248)
struct ABP_EVL_ComplimentDoor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* SlytherinDecal3; // 0x250(0x08)
	struct UNiagaraComponent* SlytherinDecal2; // 0x258(0x08)
	struct UNiagaraComponent* SlytherinDecal; // 0x260(0x08)
	struct UAkComponent* Ak_BP_EVL_ComplimentDoor; // 0x268(0x08)
	struct UBoxComponent* PlayerBlocker; // 0x270(0x08)
	struct UOdcObstacleComponent* OdcObstacle; // 0x278(0x08)
	struct UStaticMeshComponent* SM_HW_Doorway_MissionSealedDoor; // 0x280(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x288(0x08)
	struct UStaticMeshComponent* Door; // 0x290(0x08)
	struct FVector Timeline_0_NewTrack_3_FA34260D423B4E1D47FEE888197B5CC5; // 0x298(0x0c)
	enum class ETimelineDirection Timeline_0__Direction_FA34260D423B4E1D47FEE888197B5CC5; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2a8(0x08)
	struct FName EVL_01_CP1; // 0x2b0(0x08)
	struct FName EVL_01_CP2; // 0x2b8(0x08)
	bool IsDoorOpen; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float DistanceToMove; // 0x2c4(0x04)
	struct AAkAcousticPortal* Acoustic Portal; // 0x2c8(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_EVL_ComplimentDoor.BP_EVL_ComplimentDoor_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_EVL_ComplimentDoor.BP_EVL_ComplimentDoor_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__NewTrack_2__EventFunc(); // Function BP_EVL_ComplimentDoor.BP_EVL_ComplimentDoor_C.Timeline_0__NewTrack_2__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__NewTrack_0__EventFunc(); // Function BP_EVL_ComplimentDoor.BP_EVL_ComplimentDoor_C.Timeline_0__NewTrack_0__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void EVL_01_CP2_Updated(struct UObject* Caller, struct FName& String); // Function BP_EVL_ComplimentDoor.BP_EVL_ComplimentDoor_C.EVL_01_CP2_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_EVL_ComplimentDoor.BP_EVL_ComplimentDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OpenDoor(); // Function BP_EVL_ComplimentDoor.BP_EVL_ComplimentDoor_C.OpenDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseDoor(); // Function BP_EVL_ComplimentDoor.BP_EVL_ComplimentDoor_C.CloseDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EVL_ComplimentDoor.BP_EVL_ComplimentDoor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_EVL_ComplimentDoor(int32_t EntryPoint); // Function BP_EVL_ComplimentDoor.BP_EVL_ComplimentDoor_C.ExecuteUbergraph_BP_EVL_ComplimentDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

