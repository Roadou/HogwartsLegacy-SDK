// BlueprintGeneratedClass VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C
// Size: 0x36c (Inherited: 0x248)
struct AVFX_BP_HW_CT_FountainStatue_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* VFX_NS_TopStream3; // 0x250(0x08)
	struct UNiagaraComponent* VFX_NS_TopStream2; // 0x258(0x08)
	struct UNiagaraComponent* VFX_NS_TopStream1; // 0x260(0x08)
	struct UNiagaraComponent* VFX_NS_TopStream; // 0x268(0x08)
	struct UNiagaraComponent* VFX_NS_BaseRipples; // 0x270(0x08)
	struct UNiagaraComponent* VFX_NS_Topper; // 0x278(0x08)
	struct UParticleSystemComponent* VFX_P_HW_CT_Fountain_WaterSphere; // 0x280(0x08)
	struct UNiagaraComponent* VFX_NS_DropletsUnder; // 0x288(0x08)
	struct UNiagaraComponent* VFX_NS_DropletsTop; // 0x290(0x08)
	struct UNiagaraComponent* VFX_NS_FountainStream3; // 0x298(0x08)
	struct UNiagaraComponent* VFX_NS_FountainStream2; // 0x2a0(0x08)
	struct UNiagaraComponent* VFX_NS_FountainStream1; // 0x2a8(0x08)
	struct UNiagaraComponent* VFX_NS_FountainStream; // 0x2b0(0x08)
	struct UNiagaraComponent* VFX_NS_FountainSplash3; // 0x2b8(0x08)
	struct UNiagaraComponent* VFX_NS_FountainSplash2; // 0x2c0(0x08)
	struct UNiagaraComponent* VFX_NS_FountainSplash1; // 0x2c8(0x08)
	struct UNiagaraComponent* VFX_NS_FountainSplash; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_HW_CT_FountainStatue_Werewolf; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_HW_CT_FountainStatue_Unicorn; // 0x2e0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2e8(0x08)
	struct USkeletalMeshComponent* Mermaid Anim04; // 0x2f0(0x08)
	struct UParticleSystemComponent* TailSplash; // 0x2f8(0x08)
	struct USkeletalMeshComponent* Mermaid Anim02; // 0x300(0x08)
	struct USkeletalMeshComponent* Mermaid Anim01; // 0x308(0x08)
	struct UStaticMeshComponent* SM_HW_CT_FountainStatue_Goblin3; // 0x310(0x08)
	struct UStaticMeshComponent* SM_HW_CT_FountainStatue_Goblin2; // 0x318(0x08)
	struct UStaticMeshComponent* SM_HW_CT_FountainStatue_Goblin1; // 0x320(0x08)
	struct UStaticMeshComponent* SM_HW_CT_FountainStatue_Goblin; // 0x328(0x08)
	struct UAkComponent* Ak_VFX_BP_HW_CT_FountainStatue; // 0x330(0x08)
	struct UStaticMeshComponent* Water plane; // 0x338(0x08)
	struct UStaticMeshComponent* VFX_SM_HW_CT_FountainStatue_NoMermaids; // 0x340(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x348(0x08)
	enum class ETimelineDirection Timeline_0__Direction_4257F7914D8887E7A45F6886C9FC8F77; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct UTimelineComponent* Timeline_1; // 0x358(0x08)
	struct USkeletalMeshComponent* NewVar_1; // 0x360(0x08)
	float RunTime; // 0x368(0x04)

	void UserConstructionScript(); // Function VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__NewTrack_3__EventFunc(); // Function VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C.Timeline_0__NewTrack_3__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__NewTrack_2__EventFunc(); // Function VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C.Timeline_0__NewTrack_2__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__NewTrack_1__EventFunc(); // Function VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C.Timeline_0__NewTrack_1__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__NewTrack_0__EventFunc(); // Function VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C.Timeline_0__NewTrack_0__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeactivateMermaids(); // Function VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C.DeactivateMermaids // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateMermaids(); // Function VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C.ActivateMermaids // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_HW_CT_FountainStatue(int32_t EntryPoint); // Function VFX_BP_HW_CT_FountainStatue.VFX_BP_HW_CT_FountainStatue_C.ExecuteUbergraph_VFX_BP_HW_CT_FountainStatue // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

