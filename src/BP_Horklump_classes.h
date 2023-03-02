// BlueprintGeneratedClass BP_Horklump.BP_Horklump_C
// Size: 0x342 (Inherited: 0x2ed)
struct ABP_Horklump_C : ABP_Foragable_C {
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_29SM_Forageable_Horklump_Baby_SM_Forageable_Horklump_Baby1; // 0x2f8(0x08)
	struct UAkComponent* Ak_BP_Horklump; // 0x300(0x08)
	struct USphereComponent* RevelioSphere; // 0x308(0x08)
	struct USphereComponent* EndProximity; // 0x310(0x08)
	struct USphereComponent* StartProximity; // 0x318(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x320(0x08)
	float RBMaxSpeed; // 0x328(0x04)
	float RBMinSpeed; // 0x32c(0x04)
	struct FMulticastInlineDelegate PickedUp; // 0x330(0x10)
	bool HideBase; // 0x340(0x01)
	enum class EForageableState CurrentState; // 0x341(0x01)

	bool ResetState(enum class EForageableState NextState); // Function BP_Horklump.BP_Horklump_C.ResetState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Horklump.BP_Horklump_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Horklump.BP_Horklump_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Horklump_StartProximity_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Horklump.BP_Horklump_C.BndEvt__BP_Horklump_StartProximity_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SpawnBaby3(struct UObject* Caller); // Function BP_Horklump.BP_Horklump_C.SpawnBaby3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnBaby2(struct UObject* Caller); // Function BP_Horklump.BP_Horklump_C.SpawnBaby2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnBaby1(struct UObject* Caller); // Function BP_Horklump.BP_Horklump_C.SpawnBaby1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPickedUp(); // Function BP_Horklump.BP_Horklump_C.OnPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Horklump_EndProximity_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Horklump.BP_Horklump_C.BndEvt__BP_Horklump_EndProximity_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Horklump(int32_t EntryPoint); // Function BP_Horklump.BP_Horklump_C.ExecuteUbergraph_BP_Horklump // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PickedUp__DelegateSignature(); // Function BP_Horklump.BP_Horklump_C.PickedUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

