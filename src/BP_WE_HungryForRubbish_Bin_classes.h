// BlueprintGeneratedClass BP_WE_HungryForRubbish_Bin.BP_WE_HungryForRubbish_Bin_C
// Size: 0x2dd (Inherited: 0x268)
struct ABP_WE_HungryForRubbish_Bin_C : APhoenixBudgetedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USceneComponent* BurpLocator; // 0x270(0x08)
	struct UBoxComponent* StomachDetectionBox; // 0x278(0x08)
	struct UBoxComponent* Box5; // 0x280(0x08)
	struct UBoxComponent* Box4; // 0x288(0x08)
	struct UBoxComponent* Box3; // 0x290(0x08)
	struct UBoxComponent* Box2; // 0x298(0x08)
	struct UBoxComponent* Box1; // 0x2a0(0x08)
	struct USceneComponent* Walls; // 0x2a8(0x08)
	struct UBoxComponent* BigDetectionBox; // 0x2b0(0x08)
	struct UBoxComponent* MouthDetectionBox; // 0x2b8(0x08)
	struct USkeletalMeshComponent* SK_WE_HungryForRubbish_Bin; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	struct UABP_WE_HungryForRubbish_C* Anim instance ref; // 0x2d0(0x08)
	float BurpTrashProbability; // 0x2d8(0x04)
	enum class E_House House; // 0x2dc(0x01)

	void SetHouse(enum class HouseIds In House); // Function BP_WE_HungryForRubbish_Bin.BP_WE_HungryForRubbish_Bin_C.SetHouse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseLidTimer(); // Function BP_WE_HungryForRubbish_Bin.BP_WE_HungryForRubbish_Bin_C.CloseLidTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_HungryForRubbish_Bin.BP_WE_HungryForRubbish_Bin_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_HungryForRubbish_Bin.BP_WE_HungryForRubbish_Bin_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WE_HungryForRubbish_Bin.BP_WE_HungryForRubbish_Bin_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__MouthDetectionBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_HungryForRubbish_Bin.BP_WE_HungryForRubbish_Bin_C.BndEvt__MouthDetectionBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StomachDetectionBox_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_HungryForRubbish_Bin.BP_WE_HungryForRubbish_Bin_C.BndEvt__StomachDetectionBox_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BurpEvent(); // Function BP_WE_HungryForRubbish_Bin.BP_WE_HungryForRubbish_Bin_C.BurpEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_HungryForRubbish_Bin(int32_t EntryPoint); // Function BP_WE_HungryForRubbish_Bin.BP_WE_HungryForRubbish_Bin_C.ExecuteUbergraph_BP_WE_HungryForRubbish_Bin // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

