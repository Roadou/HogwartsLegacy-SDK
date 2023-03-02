// BlueprintGeneratedClass BP_TV_01_TalkingWell.BP_TV_01_TalkingWell_C
// Size: 0x2c0 (Inherited: 0x248)
struct ABP_TV_01_TalkingWell_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* WellMesh; // 0x250(0x08)
	struct UNiagaraComponent* NiagaraTalkingVFX; // 0x258(0x08)
	struct UAkComponent* AkComponent; // 0x260(0x08)
	struct UPointLightComponent* PointLight; // 0x268(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x270(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x278(0x08)
	struct UObjectStateComponent* ObjectState; // 0x280(0x08)
	struct USceneComponent* AppearLocation; // 0x288(0x08)
	struct USceneComponent* VoiceLocation; // 0x290(0x08)
	struct UAnimatedLightComponent* AnimatedLight; // 0x298(0x08)
	struct ASceneRigActor* CurrentSceneRig; // 0x2a0(0x08)
	struct FText ObjectName; // 0x2a8(0x18)

	struct FName GetUniqueBeaconId(); // Function BP_TV_01_TalkingWell.BP_TV_01_TalkingWell_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetWellVisuals(); // Function BP_TV_01_TalkingWell.BP_TV_01_TalkingWell_C.SetWellVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_TV_01_TalkingWell.BP_TV_01_TalkingWell_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_TV_01_TalkingWell.BP_TV_01_TalkingWell_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Updated TV_01(struct UObject* Caller, struct FMissionID& MissionID); // Function BP_TV_01_TalkingWell.BP_TV_01_TalkingWell_C.Updated TV_01 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TV_01_TalkingWell(int32_t EntryPoint); // Function BP_TV_01_TalkingWell.BP_TV_01_TalkingWell_C.ExecuteUbergraph_BP_TV_01_TalkingWell // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

