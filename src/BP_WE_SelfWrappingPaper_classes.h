// BlueprintGeneratedClass BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C
// Size: 0x400 (Inherited: 0x280)
struct ABP_WE_SelfWrappingPaper_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UStaticMeshComponent* Disapperate_Loc_Ref; // 0x288(0x08)
	struct UStaticMeshComponent* Apperate_Loc_Ref; // 0x290(0x08)
	struct USkeletalMeshComponent* SK_WEA_SelfWrapping_Paper_ToMove; // 0x298(0x08)
	struct UStaticMeshComponent* SM_SWG_BowVFX; // 0x2a0(0x08)
	struct UStaticMeshComponent* VFX_Loc; // 0x2a8(0x08)
	struct USkeletalMeshComponent* SK_WEA_SelfWrapping_Paper3; // 0x2b0(0x08)
	struct USkeletalMeshComponent* SK_WEA_SelfWrapping_Paper2; // 0x2b8(0x08)
	struct USkeletalMeshComponent* SK_WEA_SelfWrapping_Paper1; // 0x2c0(0x08)
	struct UStaticMeshComponent* SM_SWG_Bow2; // 0x2c8(0x08)
	struct UStaticMeshComponent* SM_SWG_Box_Folded2; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_SWG_Bow1; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_SWG_Box_Folded1; // 0x2e0(0x08)
	struct UStaticMeshComponent* SM_SWG_Bow; // 0x2e8(0x08)
	struct UStaticMeshComponent* SM_SWG_Box_Folded; // 0x2f0(0x08)
	struct USkeletalMeshComponent* SK_WEA_SelfWrapping_Present; // 0x2f8(0x08)
	struct USkeletalMeshComponent* SK_WEA_SelfWrapping_Paper; // 0x300(0x08)
	struct USkeletalMeshComponent* SK_WE_Zonkos_Box; // 0x308(0x08)
	struct UBoxComponent* Box; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)
	float Generate_Bow_Intensity_26C458344DB06710B6D0ADBCC2291CD3; // 0x320(0x04)
	float Generate_Bow_Cool_26C458344DB06710B6D0ADBCC2291CD3; // 0x324(0x04)
	float Generate_Bow_Move_VFX_26C458344DB06710B6D0ADBCC2291CD3; // 0x328(0x04)
	float Generate_Bow_Appear_26C458344DB06710B6D0ADBCC2291CD3; // 0x32c(0x04)
	enum class ETimelineDirection Generate_Bow__Direction_26C458344DB06710B6D0ADBCC2291CD3; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct UTimelineComponent* Generate_Bow; // 0x338(0x08)
	enum class ETimelineDirection Timeline_0__Direction_808B8D89419235F5AD09C7AA35B9EF1F; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct UTimelineComponent* Timeline_1; // 0x348(0x08)
	struct FVector2D MinMaxAmountOfBooks; // 0x350(0x08)
	int32_t BookAmount; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct TArray<struct USkeletalMeshComponent*> SCB_Items; // 0x360(0x10)
	bool EventRunning; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	struct FObjectFadeParamsSpeedDuration Fade_In; // 0x374(0x0c)
	struct FObjectFadeParamsSpeedDuration fade_out; // 0x380(0x0c)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<struct USkeletalMeshComponent*> SWP_Items; // 0x390(0x10)
	struct TArray<struct UMaterialInterface*> Box_Materials; // 0x3a0(0x10)
	struct TArray<struct UMaterialInterface*> Paper_Materials; // 0x3b0(0x10)
	struct UMaterialInstanceDynamic* RibbonMaterial; // 0x3c0(0x08)
	struct UNiagaraComponent* Sparkles_VFX; // 0x3c8(0x08)
	float Appear; // 0x3d0(0x04)
	float Move_VFX; // 0x3d4(0x04)
	float Cool; // 0x3d8(0x04)
	float Intensity; // 0x3dc(0x04)
	struct UMaterialInterface* NextPaperMaterial; // 0x3e0(0x08)
	struct FVector Apperate_Loc; // 0x3e8(0x0c)
	struct FVector Disapperate_Loc; // 0x3f4(0x0c)

	void Set_VFX_Locations(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Set_VFX_Locations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MaterialOfNextPaper(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.MaterialOfNextPaper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFinalRibbonValues(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.SetFinalRibbonValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitialRibbonValues(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.SetInitialRibbonValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__Apperate__EventFunc(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Timeline_0__Apperate__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__Generate_Ribbon__EventFunc(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Timeline_0__Generate_Ribbon__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__reset Event__EventFunc(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Timeline_0__reset Event__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__paper Fade Out__EventFunc(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Timeline_0__paper Fade Out__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__Hide box__EventFunc(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Timeline_0__Hide box__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__fade in box__EventFunc(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Timeline_0__fade in box__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__swap paper__EventFunc(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Timeline_0__swap paper__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Generate_Bow__FinishedFunc(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Generate_Bow__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Generate_Bow__UpdateFunc(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Generate_Bow__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Generate_Bow__FinishEvent__EventFunc(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Generate_Bow__FinishEvent__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SetupEvent(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.SetupEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Generate Ribbon(); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.Generate Ribbon // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_SelfWrappingPaper(int32_t EntryPoint); // Function BP_WE_SelfWrappingPaper.BP_WE_SelfWrappingPaper_C.ExecuteUbergraph_BP_WE_SelfWrappingPaper // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

