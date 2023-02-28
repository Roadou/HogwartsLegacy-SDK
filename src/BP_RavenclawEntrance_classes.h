// BlueprintGeneratedClass BP_RavenclawEntrance.BP_RavenclawEntrance_C
// Size: 0x2c8 (Inherited: 0x248)
struct ABP_RavenclawEntrance_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UDialogueComponent* Dialogue; // 0x258(0x08)
	struct UAkComponent* AkEagleVoice; // 0x260(0x08)
	struct UBoxComponent* Trigger Volume2; // 0x268(0x08)
	struct UBoxComponent* Box; // 0x270(0x08)
	struct USkeletalMeshComponent* SK_RavenClawDoor; // 0x278(0x08)
	struct UBoxComponent* Trigger Volume1; // 0x280(0x08)
	struct USceneComponent* Scene; // 0x288(0x08)
	struct TArray<struct AActor*> ActorsInside1; // 0x290(0x10)
	bool IsOpen; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct TArray<struct AActor*> ActorsInside2; // 0x2a8(0x10)
	bool Inward; // 0x2b8(0x01)
	bool IsOpening; // 0x2b9(0x01)
	bool SceneRigControlled; // 0x2ba(0x01)
	char pad_2BB[0x5]; // 0x2bb(0x05)
	struct AAkAcousticPortal* Acoustic Portal; // 0x2c0(0x08)

	void OpenDoorOutward(); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.OpenDoorOutward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenDoorInward(); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.OpenDoorInward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Allowed Character(struct AActor* Actor, bool& Allowed); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.Allowed Character // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShouldOpen(bool& ShouldOpen, bool& Inward); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.ShouldOpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Can Close(bool& CanClose); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.Can Close // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenDoor(bool Inward); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.OpenDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseDoor(); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.CloseDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Outside Box_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.BndEvt__Outside Box_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_RavenclawEntrance_Trigger Volume2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.BndEvt__BP_RavenclawEntrance_Trigger Volume2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_RavenclawEntrance_Trigger Volume2_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.BndEvt__BP_RavenclawEntrance_Trigger Volume2_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetSceneRigControlled(bool Param); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.SetSceneRigControlled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_RavenclawEntrance(int32_t EntryPoint); // Function BP_RavenclawEntrance.BP_RavenclawEntrance_C.ExecuteUbergraph_BP_RavenclawEntrance // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

