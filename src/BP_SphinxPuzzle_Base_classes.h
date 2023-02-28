// BlueprintGeneratedClass BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C
// Size: 0x3b1 (Inherited: 0x2e8)
struct ABP_SphinxPuzzle_Base_C : ASphinxPuzzle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct USphereComponent* PlayerSphere; // 0x2f0(0x08)
	struct UChildActorComponent* BP_SphinxPuzzle_Marker; // 0x2f8(0x08)
	struct UChildActorComponent* BP_Merlin_Gazebo; // 0x300(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x308(0x08)
	enum class EInteractiveState State; // 0x310(0x01)
	char pad_311[0xf]; // 0x311(0x0f)
	struct FTransform StatueTransform; // 0x320(0x30)
	struct ABP_Merlin_Gazebo_C* Gazebo; // 0x350(0x08)
	struct FVector GazeboSceneRigOffset_Location; // 0x358(0x0c)
	struct FRotator GazeboSceneRigOffset_Rotation; // 0x364(0x0c)
	struct UAkAudioEvent* PiecesCompletedAudioEvent; // 0x370(0x08)
	bool SkinFXIsLoaded; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UAkAudioEvent* PiecesCompletedMotionEvent; // 0x380(0x08)
	bool AlreadyOpen; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct USceneRig_Interaction* GazeboSR; // 0x390(0x08)
	bool bHasAlreadyPlayedNoSpellLine; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct TArray<struct FName> SpellRequiredForPuzzle; // 0x3a0(0x10)
	bool bHasAValidSpell; // 0x3b0(0x01)

	void PrecacheSkinFX(struct UMaterialPermuterLoadingBundle*& BundleLoader); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.PrecacheSkinFX // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinishPuzzle(); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.FinishPuzzle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LocksAndKnowledgeActions(); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.LocksAndKnowledgeActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PiecesCompleted(); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.PiecesCompleted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenGazebo(float Delay, bool Solved); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.OpenGazebo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CompleteBeacon(); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.CompleteBeacon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Build(); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.Build // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MissionUnlock(); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.MissionUnlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void EnableCollectionCollision(); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.EnableCollectionCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BundleLoaded(struct UMaterialPermuterLoadingBundle* Bundle); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.BundleLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NotifyCurrentState(enum class EInteractiveState CurrentObjectState); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.NotifyCurrentState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NotifyBeginPuzzle(enum class EInteractiveState State); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.NotifyBeginPuzzle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_SphinxPuzzle_Base_PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.BndEvt__BP_SphinxPuzzle_Base_PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SphinxPuzzle_Base(int32_t EntryPoint); // Function BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.ExecuteUbergraph_BP_SphinxPuzzle_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

