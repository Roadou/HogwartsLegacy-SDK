// BlueprintGeneratedClass BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C
// Size: 0x409 (Inherited: 0x280)
struct ABP_Super_Smash_Bounds_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UBoxComponent* Event_Bounds; // 0x288(0x08)
	float Move_To_Location_Timeline_Alpha_9E53895D422F413B3C43B6AC64E93BCC; // 0x290(0x04)
	enum class ETimelineDirection Move_To_Location_Timeline__Direction_9E53895D422F413B3C43B6AC64E93BCC; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Move_To_Location_Timeline; // 0x298(0x08)
	struct AActor* ItemInHand_REF; // 0x2a0(0x08)
	struct ABP_Super_Smash_Projectile_Base_C* Selected_Projectile_Class; // 0x2a8(0x08)
	struct ABP_Super_Smash_Projectile_Base_C* Projectile_REF; // 0x2b0(0x08)
	struct ABP_Super_Smash_Peeves_C* Peeves_REF; // 0x2b8(0x08)
	struct ABP_Super_Smash_Room_Target_C* StartingRoomTarget_REF; // 0x2c0(0x08)
	struct ABP_StationSuperSmashCower1P_C* StudentStation_REF; // 0x2c8(0x08)
	int32_t Throw_Count; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TArray<struct ABP_Super_Smash_Room_Target_C*> AvailableRoomTargets; // 0x2d8(0x10)
	struct ABP_Super_Smash_Room_Target_C* CurrentRoomTarget_REF; // 0x2e8(0x08)
	struct UScheduledEntity* Student_REF; // 0x2f0(0x08)
	struct FVector Peeves_Start_Location; // 0x2f8(0x0c)
	struct FVector Current_Location; // 0x304(0x0c)
	struct FRotator Current_Rotation; // 0x310(0x0c)
	struct FVector Move_To_Location; // 0x31c(0x0c)
	struct FRotator Move_To_Rotation; // 0x328(0x0c)
	struct FVector Mid_Point; // 0x334(0x0c)
	struct FVector ThrowTargetLocation; // 0x340(0x0c)
	struct FRotator Peeves_Start_Rotation; // 0x34c(0x0c)
	enum class E_Super_Smash_States E_Peeves_States; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	float Gravity; // 0x35c(0x04)
	float Velocity; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct ABP_Super_Smash_Room_Target_C* Last_Throw_Point; // 0x368(0x08)
	struct TArray<struct APawn*> Student_Array; // 0x370(0x10)
	struct UAvaAudioDialogueEvent* Dialogue_Student_Exit; // 0x380(0x08)
	struct TMap<struct FGameplayTag, struct UWorldEventSocketComponent*> Socket_Map; // 0x388(0x50)
	struct FName CurrentPhase; // 0x3d8(0x08)
	int32_t PhaseStepCounter; // 0x3e0(0x04)
	bool Potions?; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	struct ABP_Super_Smash_In_Hand_Base_C* ObjectInHandREF; // 0x3e8(0x08)
	struct AFocusTrigger* FocusTrigger; // 0x3f0(0x08)
	struct TArray<enum class E_Super_Smash_ObjectList> ItemVariants; // 0x3f8(0x10)
	bool StartMovement?; // 0x408(0x01)

	void RTN_HeldItemToReload(struct AActor*& ChildActorClass, struct UChildActorComponent*& Output); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.RTN_HeldItemToReload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void FN_Adjust_To_Sockets(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.FN_Adjust_To_Sockets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RTN_Peeves_Location_Rotation(struct FVector& Location, struct FRotator& Rotation); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.RTN_Peeves_Location_Rotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void RTN_Quadratic_Bezier(struct FVector A, struct FVector Mid, struct FVector B, float InputPin, struct FVector& Location); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.RTN_Quadratic_Bezier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void FN_RTN_Mid_Offset(struct FVector A, struct FVector B, float Min, float Max, struct FVector& OffsetMid); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.FN_RTN_Mid_Offset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void FN_SET_MoveToLocation(struct FVector& Vector, struct FRotator& Rotation); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.FN_SET_MoveToLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FN_SET_Peeves_Current_LocRot(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.FN_SET_Peeves_Current_LocRot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FN_Student_Leave_Station(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.FN_Student_Leave_Station // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FN_SetThrowTargetLocation(float Chance_Of_Being_Player); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.FN_SetThrowTargetLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FN_RTN_CreateProjectileTrajectory(struct FVector Target, struct FVector Start_Location, bool& Reachable?, struct FRotator& Spawn_Rotation); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.FN_RTN_CreateProjectileTrajectory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Move_To_Location_Timeline__FinishedFunc(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.Move_To_Location_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Move_To_Location_Timeline__UpdateFunc(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.Move_To_Location_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void INIT_On_Event_End(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.INIT_On_Event_End // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Switch_Peeves_State(enum class E_Super_Smash_States E_Peeves_States); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.Switch_Peeves_State // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Notify_Taunt_End(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.Notify_Taunt_End // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void INIT_Throw_Object(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.INIT_Throw_Object // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Move_To_Throw_Point(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.Move_To_Throw_Point // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Peeves_Dive(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.Peeves_Dive // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Notify_Grab_Object(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.Notify_Grab_Object // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Student_Exit_Dialogue(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.Student_Exit_Dialogue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDiveEnd(); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.OnDiveEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Super_Smash_Bounds(int32_t EntryPoint); // Function BP_Super_Smash_Bounds.BP_Super_Smash_Bounds_C.ExecuteUbergraph_BP_Super_Smash_Bounds // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

