// BlueprintGeneratedClass BP_Wow_Player.BP_Wow_Player_C
// Size: 0x2c8 (Inherited: 0x248)
struct ABP_Wow_Player_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Wow Loop Sphere; // 0x250(0x08)
	struct UBoxComponent* WOW Loop Trigger; // 0x258(0x08)
	struct USphereComponent* Wow Play Sphere; // 0x260(0x08)
	struct USphereComponent* Wow Init Sphere; // 0x268(0x08)
	struct UBoxComponent* WOW Play Trigger; // 0x270(0x08)
	struct UBoxComponent* WOW Init Trigger; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	bool Use Sphere Collision; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	struct FDatabaseLockList Wow Lock Name; // 0x28c(0x08)
	struct FDatabaseLockList Set Wow Unlock Name; // 0x294(0x08)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct ASceneRigActor* Wow Scene Rig; // 0x2a0(0x08)
	int32_t Set Stat; // 0x2a8(0x04)
	struct FMissionName Activate after mission; // 0x2ac(0x08)
	struct FName LockId; // 0x2b4(0x08)
	bool Use Init Volume to kill; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct FDatabaseLockList WOW_Unlock_All; // 0x2c0(0x08)

	void UserConstructionScript(); // Function BP_Wow_Player.BP_Wow_Player_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Wow_Player.BP_Wow_Player_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Wow_Player.BP_Wow_Player_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Wow_Player_WOW Load Trigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Wow_Player.BP_Wow_Player_C.BndEvt__BP_Wow_Player_WOW Load Trigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Wow_Player_WOW Play Trigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Wow_Player.BP_Wow_Player_C.BndEvt__BP_Wow_Player_WOW Play Trigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Wow_Player_Wow Load Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Wow_Player.BP_Wow_Player_C.BndEvt__BP_Wow_Player_Wow Load Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Wow_Player_Wow Play Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Wow_Player.BP_Wow_Player_C.BndEvt__BP_Wow_Player_Wow Play Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_3(); // Function BP_Wow_Player.BP_Wow_Player_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Wow_Player_WOW Loop Trigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Wow_Player.BP_Wow_Player_C.BndEvt__BP_Wow_Player_WOW Loop Trigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Wow_Player_Wow Loop Sphere_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Wow_Player.BP_Wow_Player_C.BndEvt__BP_Wow_Player_Wow Loop Sphere_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Wow_Player_Wow Init Sphere_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Wow_Player.BP_Wow_Player_C.BndEvt__BP_Wow_Player_Wow Init Sphere_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Wow_Player_WOW Init Trigger_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Wow_Player.BP_Wow_Player_C.BndEvt__BP_Wow_Player_WOW Init Trigger_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Wow_Player(int32_t EntryPoint); // Function BP_Wow_Player.BP_Wow_Player_C.ExecuteUbergraph_BP_Wow_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

