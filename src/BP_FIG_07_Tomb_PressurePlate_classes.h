// BlueprintGeneratedClass BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C
// Size: 0x2e1 (Inherited: 0x248)
struct ABP_FIG_07_Tomb_PressurePlate_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* AkComponent; // 0x250(0x08)
	struct UStaticMeshComponent* Collision; // 0x258(0x08)
	struct UPointLightComponent* PointLight; // 0x260(0x08)
	struct UStaticMeshComponent* SM_Fig07_PressurePlate_01B; // 0x268(0x08)
	struct UStaticMeshComponent* SM_Fig07_PressurePlate_01A; // 0x270(0x08)
	struct UStaticMeshComponent* TriggerZone; // 0x278(0x08)
	struct USceneComponent* PressurePlate; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	float PressurePlate_Timeline_LightPressurePlate_B1B6EB094EB45C2D41549E8D32381212; // 0x290(0x04)
	float PressurePlate_Timeline_BaseGlowPressurePlate_B1B6EB094EB45C2D41549E8D32381212; // 0x294(0x04)
	float PressurePlate_Timeline_FadeInPressurePlate_B1B6EB094EB45C2D41549E8D32381212; // 0x298(0x04)
	float PressurePlate_Timeline_EmissivePressurePlate_B1B6EB094EB45C2D41549E8D32381212; // 0x29c(0x04)
	float PressurePlate_Timeline_Progress_B1B6EB094EB45C2D41549E8D32381212; // 0x2a0(0x04)
	enum class ETimelineDirection PressurePlate_Timeline__Direction_B1B6EB094EB45C2D41549E8D32381212; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* PressurePlate_Timeline; // 0x2a8(0x08)
	struct FName MissionID; // 0x2b0(0x08)
	struct UMaterialInstanceDynamic* PressurePlate_Mat; // 0x2b8(0x08)
	struct FHermesBPDelegateHandle HermesHandle_GraphornDoorFinished; // 0x2c0(0x10)
	struct FHermesBPDelegateHandle HermesHandle_MissionUpdate; // 0x2d0(0x10)
	bool DbgRunWithoutMission; // 0x2e0(0x01)

	void IsPlayerOnGraphorn(bool& Result); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.IsPlayerOnGraphorn // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void PressurePlate_Timeline__FinishedFunc(); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.PressurePlate_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void PressurePlate_Timeline__UpdateFunc(); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.PressurePlate_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.BndEvt__TriggerZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void FIG_07_Updated(struct UObject* Caller, struct FName& String); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.FIG_07_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.BndEvt__TriggerZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void StatChangedEvent(struct FName Key, int32_t Value, int32_t Delta); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.StatChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GraphornDoorFinished(struct UObject* Caller, struct FString String); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.GraphornDoorFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CheckPlayState(); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.CheckPlayState // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableOverlapChecks(); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.EnableOverlapChecks // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableOverlapChecks(); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.DisableOverlapChecks // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FIG_07_Tomb_PressurePlate(int32_t EntryPoint); // Function BP_FIG_07_Tomb_PressurePlate.BP_FIG_07_Tomb_PressurePlate_C.ExecuteUbergraph_BP_FIG_07_Tomb_PressurePlate // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

