// BlueprintGeneratedClass BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C
// Size: 0x320 (Inherited: 0x280)
struct ABP_WE_SelfCheckingBooks_v2_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USphereComponent* Sphere; // 0x288(0x08)
	struct USkeletalMeshComponent* SCB_Filling_Box; // 0x290(0x08)
	struct USkeletalMeshComponent* SCB_Card; // 0x298(0x08)
	struct USkeletalMeshComponent* SCB_InkBox; // 0x2a0(0x08)
	struct USkeletalMeshComponent* SCB_Stamp; // 0x2a8(0x08)
	struct USkeletalMeshComponent* SCB_Book; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)
	struct FVector2D MinMaxAmountOfBooks; // 0x2c0(0x08)
	int32_t BookAmount; // 0x2c8(0x04)
	bool EventRunning; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct TArray<struct USkeletalMeshComponent*> SCB_Books; // 0x2d0(0x10)
	struct TArray<struct UMaterialInterface*> Book_Materials; // 0x2e0(0x10)
	struct FObjectFadeParamsSpeedDuration Fade_In; // 0x2f0(0x0c)
	struct FObjectFadeParamsSpeedDuration fade_out; // 0x2fc(0x0c)
	struct FTimerHandle LoopingStampTimer; // 0x308(0x08)
	struct TArray<struct UAnimInstance*> SCB_AnimBPs; // 0x310(0x10)

	void GetCanPlay(bool& CanPlay?); // Function BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C.GetCanPlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeOut(); // Function BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C.FadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetEvent(); // Function BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C.ResetEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayEvent(); // Function BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C.PlayEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCanPlay(bool CanPlay?); // Function BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C.SetCanPlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_WE_SelfCheckingBooks_v2_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C.BndEvt__BP_WE_SelfCheckingBooks_v2_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_WE_SelfCheckingBooks_v2_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C.BndEvt__BP_WE_SelfCheckingBooks_v2_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Looping Stamp Animation(); // Function BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C.Looping Stamp Animation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void WE_SCB_EndNotify(struct UObject* Caller); // Function BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C.WE_SCB_EndNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_SelfCheckingBooks_v2(int32_t EntryPoint); // Function BP_WE_SelfCheckingBooks_v2.BP_WE_SelfCheckingBooks_v2_C.ExecuteUbergraph_BP_WE_SelfCheckingBooks_v2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

