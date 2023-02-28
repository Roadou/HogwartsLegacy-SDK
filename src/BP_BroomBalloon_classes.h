// BlueprintGeneratedClass BP_BroomBalloon.BP_BroomBalloon_C
// Size: 0x2bc (Inherited: 0x248)
struct ABP_BroomBalloon_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UCapsuleComponent* Capsule; // 0x258(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x260(0x08)
	float Timeline_0_NewTrack_0_DC23866A4662A1C65290A794C17319FE; // 0x268(0x04)
	enum class ETimelineDirection Timeline_0__Direction_DC23866A4662A1C65290A794C17319FE; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x270(0x08)
	struct FVector StartingLocation; // 0x278(0x0c)
	float Speed; // 0x284(0x04)
	float MaxSpeed; // 0x288(0x04)
	float MinSpeed; // 0x28c(0x04)
	bool IsZSG; // 0x290(0x01)
	bool IsZSG2; // 0x291(0x01)
	bool IsZZM1; // 0x292(0x01)
	bool IsZZM2; // 0x293(0x01)
	float BobAmount; // 0x294(0x04)
	float MaxBobAmount; // 0x298(0x04)
	float MinBob; // 0x29c(0x04)
	float MaxBob; // 0x2a0(0x04)
	bool Respawner; // 0x2a4(0x01)
	bool IsHidden; // 0x2a5(0x01)
	char pad_2A6[0x2]; // 0x2a6(0x02)
	float MinScale; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UNiagaraComponent* BurstVFX; // 0x2b0(0x08)
	int32_t Material; // 0x2b8(0x04)

	void SetMaterial(int32_t MaterialIndex); // Function BP_BroomBalloon.BP_BroomBalloon_C.SetMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_BroomBalloon.BP_BroomBalloon_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_BroomBalloon.BP_BroomBalloon_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_BroomBalloon.BP_BroomBalloon_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_BroomBalloon.BP_BroomBalloon_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BroomBalloon.BP_BroomBalloon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_BroomBalloon.BP_BroomBalloon_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_BroomBalloon.BP_BroomBalloon_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_BroomBalloon.BP_BroomBalloon_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_BroomBalloon.BP_BroomBalloon_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetHidden(bool Hidden); // Function BP_BroomBalloon.BP_BroomBalloon_C.SetHidden // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BroomBalloon.BP_BroomBalloon_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BroomBalloon(int32_t EntryPoint); // Function BP_BroomBalloon.BP_BroomBalloon_C.ExecuteUbergraph_BP_BroomBalloon // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

