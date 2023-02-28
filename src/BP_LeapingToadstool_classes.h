// BlueprintGeneratedClass BP_LeapingToadstool.BP_LeapingToadstool_C
// Size: 0x371 (Inherited: 0x2ed)
struct ABP_LeapingToadstool_C : ABP_Foragable_C {
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_19SM_Forageable_Leaping_Toadstools_I; // 0x2f8(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_11SM_KidneyWeed_05; // 0x300(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_17SM_Forageable_Leaping_Toadstools_G; // 0x308(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_25SM_Forageable_Leaping_Toadstools_H; // 0x310(0x08)
	struct UStaticMeshComponent* SM_DeadLeafThin_01_Master; // 0x318(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_2SM_DeadLeafThick_01_Master; // 0x320(0x08)
	struct UStaticMeshComponent* SM_Toadstools_Mound_Round; // 0x328(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_15SM_DeadLeafThick_01_Fall2; // 0x330(0x08)
	struct UAkComponent* AK_BP_LeapingToadstool; // 0x338(0x08)
	struct UAkComponent* Ak_MotionListener; // 0x340(0x08)
	struct USphereComponent* RevelioSphere; // 0x348(0x08)
	struct USphereComponent* ExitProximitySphere; // 0x350(0x08)
	struct USphereComponent* EnterProximitySphere; // 0x358(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x360(0x08)
	float RB Max Vertical Speed; // 0x368(0x04)
	float RB Max Lateral speed; // 0x36c(0x04)
	enum class EForageableState CurrentState; // 0x370(0x01)

	bool ResetState(enum class EForageableState NextState); // Function BP_LeapingToadstool.BP_LeapingToadstool_C.ResetState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Horklump_ExitProximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_LeapingToadstool.BP_LeapingToadstool_C.BndEvt__BP_Horklump_ExitProximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SpawnRigidBodies(struct UObject* Caller); // Function BP_LeapingToadstool.BP_LeapingToadstool_C.SpawnRigidBodies // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Horklump_EnterProximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_LeapingToadstool.BP_LeapingToadstool_C.BndEvt__BP_Horklump_EnterProximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_LeapingToadstool.BP_LeapingToadstool_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnPickedUp(); // Function BP_LeapingToadstool.BP_LeapingToadstool_C.OnPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_LeapingToadstool(int32_t EntryPoint); // Function BP_LeapingToadstool.BP_LeapingToadstool_C.ExecuteUbergraph_BP_LeapingToadstool // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

