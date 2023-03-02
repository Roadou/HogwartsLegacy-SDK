// BlueprintGeneratedClass BP_GraphornMountVFXActor.BP_GraphornMountVFXActor_C
// Size: 0x2b1 (Inherited: 0x280)
struct ABP_GraphornMountVFXActor_C : ABP_MountVFXActorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAkComponent* AkComponent; // 0x288(0x08)
	struct UPostProcessComponent* PostProcess; // 0x290(0x08)
	struct FVector TargetLocation; // 0x298(0x0c)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct ACharacter* Character; // 0x2a8(0x08)
	bool IsSwimming; // 0x2b0(0x01)

	void ReceiveTick(float DeltaSeconds); // Function BP_GraphornMountVFXActor.BP_GraphornMountVFXActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CreatureCharge_Start(struct UObject* Caller); // Function BP_GraphornMountVFXActor.BP_GraphornMountVFXActor_C.CreatureCharge_Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_GraphornMountVFXActor.BP_GraphornMountVFXActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GraphornMountVFXActor.BP_GraphornMountVFXActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void MovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function BP_GraphornMountVFXActor.BP_GraphornMountVFXActor_C.MovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatureCharge_End(struct UObject* Caller); // Function BP_GraphornMountVFXActor.BP_GraphornMountVFXActor_C.CreatureCharge_End // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GraphornMountVFXActor(int32_t EntryPoint); // Function BP_GraphornMountVFXActor.BP_GraphornMountVFXActor_C.ExecuteUbergraph_BP_GraphornMountVFXActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

