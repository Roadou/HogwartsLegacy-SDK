// BlueprintGeneratedClass BP_WE_Mirage_ThrownObject.BP_WE_Mirage_ThrownObject_C
// Size: 0x270 (Inherited: 0x248)
struct ABP_WE_Mirage_ThrownObject_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Sphere; // 0x250(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x258(0x08)
	struct UStaticMeshComponent* Mesh; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)

	void GetParents(struct TArray<struct AActor*>& Parents); // Function BP_WE_Mirage_ThrownObject.BP_WE_Mirage_ThrownObject_C.GetParents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_Mirage_ThrownObject.BP_WE_Mirage_ThrownObject_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_Mirage_ThrownObject.BP_WE_Mirage_ThrownObject_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Mirage_ThrownObject(int32_t EntryPoint); // Function BP_WE_Mirage_ThrownObject.BP_WE_Mirage_ThrownObject_C.ExecuteUbergraph_BP_WE_Mirage_ThrownObject // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

