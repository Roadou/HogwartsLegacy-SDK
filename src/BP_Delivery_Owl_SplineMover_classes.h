// BlueprintGeneratedClass BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C
// Size: 0x32c (Inherited: 0x248)
struct ABP_Delivery_Owl_SplineMover_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x250(0x08)
	struct USkeletalMeshComponent* Owl; // 0x258(0x08)
	struct UBoxComponent* Box_1; // 0x260(0x08)
	bool Activate; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float Alpha; // 0x26c(0x04)
	struct ABP_WE_GenericSpline_C* Owls Spline; // 0x270(0x08)
	float Duration; // 0x278(0x04)
	float Offset; // 0x27c(0x04)
	struct UBoxComponent* Box Trigger; // 0x280(0x08)
	bool Visibility; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct TArray<struct USkeletalMesh*> OwlSkeletalMeshes; // 0x290(0x10)
	struct ABP_Delivery_Package_C* DeliveryPackage; // 0x2a0(0x08)
	struct ABP_Delivery_Package_C* SpawnedPackage; // 0x2a8(0x08)
	float TotalWeight; // 0x2b0(0x04)
	float RandomWeight; // 0x2b4(0x04)
	float CurrentWeight; // 0x2b8(0x04)
	float OwlSpeed; // 0x2bc(0x04)
	struct TArray<struct FSTR_WE_DeliveryOwl> OwlProfiles; // 0x2c0(0x10)
	bool HasReachedEndOfSpline; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float MaxFlyDistance; // 0x2d4(0x04)
	bool IsOutOfRange; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct UParticleSystem* AmbientFeatherEffect; // 0x2e0(0x08)
	bool IsActiveInLevel; // 0x2e8(0x01)
	bool PackageDropped; // 0x2e9(0x01)
	char pad_2EA[0x6]; // 0x2ea(0x06)
	struct TArray<struct UAkAudioEvent*> OwlHoots; // 0x2f0(0x10)
	float Distance; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct UParticleSystemComponent* ActiveParticleSystemComponent; // 0x308(0x08)
	struct FMulticastInlineDelegate OnDeliveryLanded; // 0x310(0x10)
	struct UStaticMesh* SpawnablePackage; // 0x320(0x08)
	float OwlPitch; // 0x328(0x04)

	void OnPackageLanded(struct ABP_Delivery_Package_C* Package); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.OnPackageLanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetGroundLocation(struct FVector& Location); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.GetGroundLocation // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsAtEndOfSpline(struct ABP_WE_GenericSpline_C* Spline, float CurrentDistance, bool& IsAtEndOfSpline); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.IsAtEndOfSpline // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayRandomOwlHoot(); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.PlayRandomOwlHoot // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetActive(bool ACTIVE); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.SetActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectRandomOwlMesh(); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.SelectRandomOwlMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DropPackage(); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.DropPackage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupPackage(struct USkeletalMeshComponent* Owl, struct ABP_Delivery_Package_C*& Package); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.SetupPackage // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetupMove(); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.SetupMove // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void MoveAlongSpline(float DeltaTime); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.MoveAlongSpline // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Delivery_Owl_SplineMover(int32_t EntryPoint); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.ExecuteUbergraph_BP_Delivery_Owl_SplineMover // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnDeliveryLanded__DelegateSignature(struct ABP_Delivery_Package_C* OnPackageLanded); // Function BP_Delivery_Owl_SplineMover.BP_Delivery_Owl_SplineMover_C.OnDeliveryLanded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

