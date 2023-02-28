// BlueprintGeneratedClass BP_HW_Knowledge_GrimbaldWeftSkull.BP_HW_Knowledge_GrimbaldWeftSkull_C
// Size: 0x2a8 (Inherited: 0x248)
struct ABP_HW_Knowledge_GrimbaldWeftSkull_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* Box; // 0x250(0x08)
	struct UStaticMeshComponent* Skull; // 0x258(0x08)
	struct UStaticMeshComponent* SM_HW_HOM_SkullJar; // 0x260(0x08)
	struct FRotator Initial; // 0x268(0x0c)
	struct FRotator Final; // 0x274(0x0c)
	float FollowSpeed; // 0x280(0x04)
	bool InVolume; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct FString Pause; // 0x288(0x10)
	struct FString FindSkull; // 0x298(0x10)

	void UserConstructionScript(); // Function BP_HW_Knowledge_GrimbaldWeftSkull.BP_HW_Knowledge_GrimbaldWeftSkull_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_HW_Knowledge_GrimbaldWeftSkull.BP_HW_Knowledge_GrimbaldWeftSkull_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_HW_Knowledge_GrimbaldWeftSkull.BP_HW_Knowledge_GrimbaldWeftSkull_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_HW_Knowledge_GrimbaldWeftSkull.BP_HW_Knowledge_GrimbaldWeftSkull_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Knowledge_GrimbaldWeftSkull(int32_t EntryPoint); // Function BP_HW_Knowledge_GrimbaldWeftSkull.BP_HW_Knowledge_GrimbaldWeftSkull_C.ExecuteUbergraph_BP_HW_Knowledge_GrimbaldWeftSkull // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

