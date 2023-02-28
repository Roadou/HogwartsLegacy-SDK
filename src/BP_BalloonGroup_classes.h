// BlueprintGeneratedClass BP_BalloonGroup.BP_BalloonGroup_C
// Size: 0x2e8 (Inherited: 0x248)
struct ABP_BalloonGroup_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* BP_BroomActivityBalloonGroup_Marker; // 0x250(0x08)
	struct UChildActorComponent* Balloon 4; // 0x258(0x08)
	struct UChildActorComponent* Balloon 3; // 0x260(0x08)
	struct UChildActorComponent* Balloon 2; // 0x268(0x08)
	struct UChildActorComponent* Balloon 1; // 0x270(0x08)
	struct UChildActorComponent* Balloon 0; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct TArray<bool> BalloonPoppedArray; // 0x288(0x10)
	float Time to respawn; // 0x298(0x04)
	bool Is ZSG Area1; // 0x29c(0x01)
	bool Is ZSG Area2; // 0x29d(0x01)
	char pad_29E[0x2]; // 0x29e(0x02)
	struct UChildActorComponent* ChildActorArray; // 0x2a0(0x08)
	bool Is ZZM Area1; // 0x2a8(0x01)
	bool Is ZZM Area2; // 0x2a9(0x01)
	char pad_2AA[0x6]; // 0x2aa(0x06)
	struct FString SaveStateName; // 0x2b0(0x10)
	int32_t BeaconHandle; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TArray<int32_t> BalloonMaterialArray; // 0x2c8(0x10)
	struct TArray<struct ABP_BroomBalloon_C*> BalloonArray; // 0x2d8(0x10)

	void UserConstructionScript(); // Function BP_BalloonGroup.BP_BalloonGroup_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BalloonGroup.BP_BalloonGroup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Respawn Ballon 0(); // Function BP_BalloonGroup.BP_BalloonGroup_C.Respawn Ballon 0 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BalloonPopped(struct UObject* Caller); // Function BP_BalloonGroup.BP_BalloonGroup_C.BalloonPopped // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Respawn Ballon 1(); // Function BP_BalloonGroup.BP_BalloonGroup_C.Respawn Ballon 1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Respawn Ballon 2(); // Function BP_BalloonGroup.BP_BalloonGroup_C.Respawn Ballon 2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Respawn Ballon 3(); // Function BP_BalloonGroup.BP_BalloonGroup_C.Respawn Ballon 3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Respawn Ballon 4(); // Function BP_BalloonGroup.BP_BalloonGroup_C.Respawn Ballon 4 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Vendor_Broom_Acquired_Unlocked(struct UObject* Caller); // Function BP_BalloonGroup.BP_BalloonGroup_C.Vendor_Broom_Acquired_Unlocked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BalloonGroup(int32_t EntryPoint); // Function BP_BalloonGroup.BP_BalloonGroup_C.ExecuteUbergraph_BP_BalloonGroup // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

