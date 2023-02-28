// BlueprintGeneratedClass BP_SceneRig_Interact.BP_SceneRig_Interact_C
// Size: 0x518 (Inherited: 0x4b0)
struct ABP_SceneRig_Interact_C : ASceneRigActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UStaticMeshComponent* Cube; // 0x4b8(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x4c0(0x08)
	bool WaitForStreaming; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct USceneRigPlayer* ourSceneRigPlayer; // 0x4d0(0x08)
	struct AActor* exitInterestPointActor; // 0x4d8(0x08)
	struct FVector exitLocation; // 0x4e0(0x0c)
	struct FVector CalloutLocation; // 0x4ec(0x0c)
	struct FVector LookAtPoint; // 0x4f8(0x0c)
	bool UseExteriorLock; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	struct AActor* Origin Interest Point Actor; // 0x508(0x08)
	struct FName BeaconableObjectID; // 0x510(0x08)

	struct FName GetUniqueBeaconId(); // Function BP_SceneRig_Interact.BP_SceneRig_Interact_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableInteract(); // Function BP_SceneRig_Interact.BP_SceneRig_Interact_C.DisableInteract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableInteract(); // Function BP_SceneRig_Interact.BP_SceneRig_Interact_C.EnableInteract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_SceneRig_Interact.BP_SceneRig_Interact_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnterComplete(); // Function BP_SceneRig_Interact.BP_SceneRig_Interact_C.EnterComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StreamingComplete(); // Function BP_SceneRig_Interact.BP_SceneRig_Interact_C.StreamingComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SceneRigFinished(); // Function BP_SceneRig_Interact.BP_SceneRig_Interact_C.SceneRigFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_SceneRig_Interact.BP_SceneRig_Interact_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SceneRig_Interact.BP_SceneRig_Interact_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneRig_Interact(int32_t EntryPoint); // Function BP_SceneRig_Interact.BP_SceneRig_Interact_C.ExecuteUbergraph_BP_SceneRig_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

