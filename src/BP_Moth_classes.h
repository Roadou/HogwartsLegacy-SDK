// BlueprintGeneratedClass BP_Moth.BP_Moth_C
// Size: 0x3f0 (Inherited: 0x248)
struct ABP_Moth_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UAkComponent* Ak_BP_Moth; // 0x258(0x08)
	struct USkeletalMeshComponent* SK_BronzeMoth_Skelmesh; // 0x260(0x08)
	struct USceneComponent* Scene; // 0x268(0x08)
	struct UStaticMeshComponent* Sphere; // 0x270(0x08)
	float Timeline_2_NewTrack_0_5DFDC6344725E8C39498278919F1F2D1; // 0x278(0x04)
	enum class ETimelineDirection Timeline_2__Direction_5DFDC6344725E8C39498278919F1F2D1; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* Timeline_3; // 0x280(0x08)
	struct FVector StartLoc; // 0x288(0x0c)
	struct FVector Target; // 0x294(0x0c)
	struct ABP_MothTarget_C* TargetOBJ; // 0x2a0(0x08)
	struct TArray<enum class EObjectTypeQuery> Type; // 0x2a8(0x10)
	struct TArray<struct ABP_MothTarget_C*> MothTargets; // 0x2b8(0x10)
	struct TArray<struct AActor*> OPTIONS; // 0x2c8(0x10)
	char pad_2D8[0x8]; // 0x2d8(0x08)
	struct FTransform LerpTransformA; // 0x2e0(0x30)
	struct FTransform LerpTransformB; // 0x310(0x30)
	struct UStaticMeshComponent* TargetMesh; // 0x340(0x08)
	struct FName Save Stat; // 0x348(0x08)
	int32_t Stat Value; // 0x350(0x04)
	enum class E_MothState CurrentState; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct FVector HoverLocation; // 0x358(0x0c)
	float MaxDistanceCheck; // 0x364(0x04)
	float ReturnHomeCount; // 0x368(0x04)
	float StartLumosTime; // 0x36c(0x04)
	float MaxLumosTime; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct FMulticastInlineDelegate MothInLight; // 0x378(0x10)
	struct UNiagaraComponent* MothTrail; // 0x388(0x08)
	struct ABP_MothTarget_C* StartMothTarget; // 0x390(0x08)
	struct AActor* MothTargetOwner; // 0x398(0x08)
	int32_t OwnerNumTarget; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct UNiagaraComponent* ConstEmitter; // 0x3a8(0x08)
	struct ABP_WandTool_C* PlayerWand; // 0x3b0(0x08)
	struct UABP_HW_Lumos_Moth_Master_Skeleton_C* AnimBP; // 0x3b8(0x08)
	float Interp Speed; // 0x3c0(0x04)
	bool MothFree; // 0x3c4(0x01)
	bool SetExplicitTargetList; // 0x3c5(0x01)
	char pad_3C6[0x2]; // 0x3c6(0x02)
	struct TArray<struct AActor*> ExplicitTargetList; // 0x3c8(0x10)
	bool LightsOut; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	float MinDurationInLight; // 0x3dc(0x04)
	struct FString In Name; // 0x3e0(0x10)

	bool DisableLightRaytrace(); // Function BP_Moth.BP_Moth_C.DisableLightRaytrace // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisableLightInteraction(); // Function BP_Moth.BP_Moth_C.DisableLightInteraction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WriteStartingLocation(struct FVector InVec); // Function BP_Moth.BP_Moth_C.WriteStartingLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReleaseMoth(); // Function BP_Moth.BP_Moth_C.ReleaseMoth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Disable(bool IsDisabled); // Function BP_Moth.BP_Moth_C.Disable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DetermineStartMothTarget(); // Function BP_Moth.BP_Moth_C.DetermineStartMothTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get Player Wand(struct AWandTool*& Wand); // Function BP_Moth.BP_Moth_C.Get Player Wand // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ReturnHomeCounter(); // Function BP_Moth.BP_Moth_C.ReturnHomeCounter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReturnHomeUpdate(float DeltaSeconds); // Function BP_Moth.BP_Moth_C.ReturnHomeUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HoverUpdate(struct FVector LocalTarget, float DeltaSeconds); // Function BP_Moth.BP_Moth_C.HoverUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DetachMoth(struct FTransform LerpTransform); // Function BP_Moth.BP_Moth_C.DetachMoth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InLightUpdate(float DeltaSeconds); // Function BP_Moth.BP_Moth_C.InLightUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SeekUpdate(struct FVector SeekTarget, float DeltaSeconds); // Function BP_Moth.BP_Moth_C.SeekUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTargetLists(); // Function BP_Moth.BP_Moth_C.UpdateTargetLists // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindHome(); // Function BP_Moth.BP_Moth_C.FindHome // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WeightedClosest(struct TArray<struct ABP_MothTarget_C*>& List, float MothTargetWeight, struct ABP_MothTarget_C*& Closest); // Function BP_Moth.BP_Moth_C.WeightedClosest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Moth.BP_Moth_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__FinishedFunc(); // Function BP_Moth.BP_Moth_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__UpdateFunc(); // Function BP_Moth.BP_Moth_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void MarkForDeath(); // Function BP_Moth.BP_Moth_C.MarkForDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateMothState(enum class E_MothState NewState); // Function BP_Moth.BP_Moth_C.UpdateMothState // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DetachEvent(); // Function BP_Moth.BP_Moth_C.DetachEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Moth.BP_Moth_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Lights Out(); // Function BP_Moth.BP_Moth_C.Lights Out // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredLight(struct AActor* LumosBP, bool bPlayerOwned); // Function BP_Moth.BP_Moth_C.OnEnteredLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Moth.BP_Moth_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void LandOnSocket(); // Function BP_Moth.BP_Moth_C.LandOnSocket // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedNearby(); // Function BP_Moth.BP_Moth_C.OnExitedNearby // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedLightProximity(struct AActor* LumosBP); // Function BP_Moth.BP_Moth_C.OnExitedLightProximity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedLight(struct AActor* LumosBP, bool bPlayerOwned); // Function BP_Moth.BP_Moth_C.OnExitedLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredNearby(struct AActor* LumosBP); // Function BP_Moth.BP_Moth_C.OnEnteredNearby // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredLightProximity(struct AActor* LumosBP); // Function BP_Moth.BP_Moth_C.OnEnteredLightProximity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetMothLocation(); // Function BP_Moth.BP_Moth_C.ResetMothLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IdleBreak(struct UObject* Caller); // Function BP_Moth.BP_Moth_C.IdleBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRandomPlane(struct UObject* Caller); // Function BP_Moth.BP_Moth_C.SetRandomPlane // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MothDetached(struct UObject* Caller); // Function BP_Moth.BP_Moth_C.MothDetached // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MothIdle(struct UObject* Caller); // Function BP_Moth.BP_Moth_C.MothIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MothLanding(struct UObject* Caller); // Function BP_Moth.BP_Moth_C.MothLanding // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Moth.BP_Moth_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Moth(int32_t EntryPoint); // Function BP_Moth.BP_Moth_C.ExecuteUbergraph_BP_Moth // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void MothInLight__DelegateSignature(bool inLight); // Function BP_Moth.BP_Moth_C.MothInLight__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

