// BlueprintGeneratedClass BP_PruningPotPlants.BP_PruningPotPlants_C
// Size: 0x380 (Inherited: 0x280)
struct ABP_PruningPotPlants_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAkComponent* AK_BP_PruningPotPlants; // 0x288(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x290(0x08)
	struct USceneComponent* Root; // 0x298(0x08)
	struct USceneComponent* RotatorPoint; // 0x2a0(0x08)
	float Timeline_0_Directional_Rotation_Alpha_2FA3EB3C453B2755EA103BBB014321C7; // 0x2a8(0x04)
	float Timeline_0_Alpha_2FA3EB3C453B2755EA103BBB014321C7; // 0x2ac(0x04)
	enum class ETimelineDirection Timeline_0__Direction_2FA3EB3C453B2755EA103BBB014321C7; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct UTimelineComponent* Timeline_1; // 0x2b8(0x08)
	struct TArray<struct UWorldEventSocketComponent*> SocketsArray; // 0x2c0(0x10)
	struct FGameplayTag Tag_To_Detect; // 0x2d0(0x08)
	enum class E_PruningPotPlants_State State; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	int32_t Max_Actions; // 0x2dc(0x04)
	int32_t Current_Action_Count; // 0x2e0(0x04)
	int32_t Current_Index; // 0x2e4(0x04)
	bool Float?; // 0x2e8(0x01)
	bool Snipping?; // 0x2e9(0x01)
	char pad_2EA[0x2]; // 0x2ea(0x02)
	struct FVector Initial_Location; // 0x2ec(0x0c)
	struct FRotator Initial_Rotation; // 0x2f8(0x0c)
	struct FVector Current_Location; // 0x304(0x0c)
	struct FRotator Current_Rotation; // 0x310(0x0c)
	struct FVector Destination_Location; // 0x31c(0x0c)
	struct FRotator Destination_Rotation; // 0x328(0x0c)
	struct FVector Arc_Mid_Point; // 0x334(0x0c)
	struct FRotator Directional_Rotation; // 0x340(0x0c)
	struct FRotator Current_Directional_Rotation; // 0x34c(0x0c)
	struct UWorldEventSocketComponent* CurrentSocket; // 0x358(0x08)
	struct USkeletalMeshComponent* NewVar_1; // 0x360(0x08)
	struct UParticleSystem* Leaf_Cuttings_VFX; // 0x368(0x08)
	struct UAnimMontage* SnippingMontage; // 0x370(0x08)
	struct UABP_WE_SP_Shears_C* ABP WE SP Shears; // 0x378(0x08)

	void RTN_FN_QuadraticBezier(struct FVector A, struct FVector M, struct FVector B, float Alpha, struct FVector& Location); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.RTN_FN_QuadraticBezier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void RTN_FN_ArcMidPoint(struct FVector Location, struct FVector Destination, float ArcAmount, struct FVector& OffsetMid); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.RTN_FN_ArcMidPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void FN_SetState(enum class E_PruningPotPlants_State State); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.FN_SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnNotifyEnd_C6715A5D4913C29D98E077A11A5B1009(struct FName NotifyName); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.OnNotifyEnd_C6715A5D4913C29D98E077A11A5B1009 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyBegin_C6715A5D4913C29D98E077A11A5B1009(struct FName NotifyName); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.OnNotifyBegin_C6715A5D4913C29D98E077A11A5B1009 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInterrupted_C6715A5D4913C29D98E077A11A5B1009(struct FName NotifyName); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.OnInterrupted_C6715A5D4913C29D98E077A11A5B1009 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBlendOut_C6715A5D4913C29D98E077A11A5B1009(struct FName NotifyName); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.OnBlendOut_C6715A5D4913C29D98E077A11A5B1009 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCompleted_C6715A5D4913C29D98E077A11A5B1009(struct FName NotifyName); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.OnCompleted_C6715A5D4913C29D98E077A11A5B1009 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Switch_State(); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.Switch_State // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Move_Object(struct FVector Destination, float Arc_Amount, float Movement_Speed, struct FRotator Movement_Rotation); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.Move_Object // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Move_To_Index(); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.Move_To_Index // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Play_Custom_Behaviour(); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.Play_Custom_Behaviour // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Stop_Custom_Behaviour(); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.Stop_Custom_Behaviour // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnLeaves(struct FVector Size, float Amount); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.SpawnLeaves // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PruningPotPlants(int32_t EntryPoint); // Function BP_PruningPotPlants.BP_PruningPotPlants_C.ExecuteUbergraph_BP_PruningPotPlants // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

