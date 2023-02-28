// BlueprintGeneratedClass BP_DADA_BlockDoor.BP_DADA_BlockDoor_C
// Size: 0x300 (Inherited: 0x248)
struct ABP_DADA_BlockDoor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* Plane; // 0x250(0x08)
	struct USceneComponent* planeMover; // 0x258(0x08)
	struct UStaticMeshComponent* PreMissionBlocker; // 0x260(0x08)
	struct UChildActorComponent* BP_DoorDepulsoButton; // 0x268(0x08)
	struct UBoxComponent* Col04; // 0x270(0x08)
	struct UBoxComponent* Col03; // 0x278(0x08)
	struct UBoxComponent* Col02; // 0x280(0x08)
	struct UBoxComponent* Col01; // 0x288(0x08)
	struct UBoxComponent* PlayerBlocker; // 0x290(0x08)
	struct USkeletalMeshComponent* SK_HW_DADA_DepulsoDoor; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	float Timeline_materialLERP_AFF1E2E24C943E81237975B829B837C7; // 0x2a8(0x04)
	float Timeline_LERP_AFF1E2E24C943E81237975B829B837C7; // 0x2ac(0x04)
	enum class ETimelineDirection Timeline__Direction_AFF1E2E24C943E81237975B829B837C7; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct UTimelineComponent* Timeline; // 0x2b8(0x08)
	bool MissionBypass; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct AAkAcousticPortal* Acoustic Portal; // 0x2c8(0x08)
	bool IsOpen; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct TSoftObjectPtr<ABP_DungeonLOCs_C> DungeonEntranceRef; // 0x2d8(0x28)

	void Timeline__FinishedFunc(); // Function BP_DADA_BlockDoor.BP_DADA_BlockDoor_C.Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline__UpdateFunc(); // Function BP_DADA_BlockDoor.BP_DADA_BlockDoor_C.Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline__trigger2__EventFunc(); // Function BP_DADA_BlockDoor.BP_DADA_BlockDoor_C.Timeline__trigger2__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline__triggerAnimation__EventFunc(); // Function BP_DADA_BlockDoor.BP_DADA_BlockDoor_C.Timeline__triggerAnimation__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Close(); // Function BP_DADA_BlockDoor.BP_DADA_BlockDoor_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hit(); // Function BP_DADA_BlockDoor.BP_DADA_BlockDoor_C.Hit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DADA_BlockDoor.BP_DADA_BlockDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Debug(); // Function BP_DADA_BlockDoor.BP_DADA_BlockDoor_C.Debug // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Updated COM_25(struct UObject* Caller, struct FMissionID& MissionID); // Function BP_DADA_BlockDoor.BP_DADA_BlockDoor_C.Updated COM_25 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DADA_BlockDoor(int32_t EntryPoint); // Function BP_DADA_BlockDoor.BP_DADA_BlockDoor_C.ExecuteUbergraph_BP_DADA_BlockDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

