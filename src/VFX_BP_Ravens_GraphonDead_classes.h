// BlueprintGeneratedClass VFX_BP_Ravens_GraphonDead.VFX_BP_Ravens_GraphonDead_C
// Size: 0x278 (Inherited: 0x248)
struct AVFX_BP_Ravens_GraphonDead_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* BoxReset; // 0x250(0x08)
	struct UNiagaraComponent* Niagara; // 0x258(0x08)
	struct UStaticMeshComponent* SM_CrowPosition; // 0x260(0x08)
	struct UBoxComponent* Box; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)

	void Play Flapping Sound(); // Function VFX_BP_Ravens_GraphonDead.VFX_BP_Ravens_GraphonDead_C.Play Flapping Sound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function VFX_BP_Ravens_GraphonDead.VFX_BP_Ravens_GraphonDead_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Ravens_GraphonDead.VFX_BP_Ravens_GraphonDead_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function VFX_BP_Ravens_GraphonDead.VFX_BP_Ravens_GraphonDead_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BoxReset_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function VFX_BP_Ravens_GraphonDead.VFX_BP_Ravens_GraphonDead_C.BndEvt__BoxReset_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__VFX_BP_Ravens_GraphonDead_BoxReset_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function VFX_BP_Ravens_GraphonDead.VFX_BP_Ravens_GraphonDead_C.BndEvt__VFX_BP_Ravens_GraphonDead_BoxReset_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Ravens_GraphonDead(int32_t EntryPoint); // Function VFX_BP_Ravens_GraphonDead.VFX_BP_Ravens_GraphonDead_C.ExecuteUbergraph_VFX_BP_Ravens_GraphonDead // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

