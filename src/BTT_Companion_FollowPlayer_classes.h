// BlueprintGeneratedClass BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C
// Size: 0x10c (Inherited: 0xa8)
struct UBTT_Companion_FollowPlayer_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct APawn* PlayerPawn; // 0xb0(0x08)
	struct UEnemyAIComponent* EnemyAIComp; // 0xb8(0x08)
	struct AAIController* AIController; // 0xc0(0x08)
	struct FVector Destination; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UCharacterMovementComponent* CharMoveComp; // 0xd8(0x08)
	struct UNPC_PathFollowingComponent* NPCPathFollowComp; // 0xe0(0x08)
	struct APawn* MyPawn; // 0xe8(0x08)
	float CrouchSwimSpeed; // 0xf0(0x04)
	float SlowSpeed; // 0xf4(0x04)
	float SprintSpeed; // 0xf8(0x04)
	float CloseDistanceSquared; // 0xfc(0x04)
	float MinDistanceToMoveSquared; // 0x100(0x04)
	bool bShouldMove; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float DestinationAcceptanceRadius; // 0x108(0x04)

	bool ShouldRepath(); // Function BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.ShouldRepath // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChoseSpeed(); // Function BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.ChoseSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TimeOutEvent(); // Function BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.TimeOutEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Repath(); // Function BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.Repath // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Companion_FollowPlayer(int32_t EntryPoint); // Function BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.ExecuteUbergraph_BTT_Companion_FollowPlayer // (Final|UbergraphFunction) // @ game+0x38a7480
};

