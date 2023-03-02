// BlueprintGeneratedClass BP_PlayingWithFire.BP_PlayingWithFire_C
// Size: 0x300 (Inherited: 0x248)
struct ABP_PlayingWithFire_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Focus; // 0x250(0x08)
	struct USphereComponent* FleeDialogueSphere; // 0x258(0x08)
	struct UAkComponent* AkFireLoop; // 0x260(0x08)
	struct UObjectStateComponent* ObjectState; // 0x268(0x08)
	struct USphereComponent* Sphere; // 0x270(0x08)
	struct USkeletalMeshComponent* JuggleRig; // 0x278(0x08)
	struct UStaticMeshComponent* JuggleObject03; // 0x280(0x08)
	struct UStaticMeshComponent* JuggleObject02; // 0x288(0x08)
	struct UStaticMeshComponent* JuggleObject01; // 0x290(0x08)
	struct UChildActorComponent* Ghost_A; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	struct ABP_DB_Lightweight_Character_C* GhostActor A actor ref; // 0x2a8(0x08)
	struct USkeletalMeshComponent* SK_GhostA; // 0x2b0(0x08)
	struct TArray<struct AActor*> Juggle Objects; // 0x2b8(0x10)
	struct TArray<struct UStaticMeshComponent*> Juggle prop components; // 0x2c8(0x10)
	bool InJuggleOutro; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FTimerHandle TimerDialogue timer handle; // 0x2e0(0x08)
	struct FString ForcedFleeVolumeGUID; // 0x2e8(0x10)
	struct AFocusTrigger* FocusTrigger; // 0x2f8(0x08)

	void PlayHighThrowDialogue(); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.PlayHighThrowDialogue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set up anim BP(); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.Set up anim BP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Drop Prop(int32_t Index); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.Drop Prop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Attach Juggle Rig to Juggler(); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.Attach Juggle Rig to Juggler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Attach Fire FX to batons(); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.Attach Fire FX to batons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Event Character Load Complete(struct AActor* Actor); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.Event Character Load Complete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Start Juggle Outro(); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.Start Juggle Outro // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TimerDialogue(); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.TimerDialogue // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyPeeves(); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.DestroyPeeves // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.OnBeginOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PlayingWithFire(int32_t EntryPoint); // Function BP_PlayingWithFire.BP_PlayingWithFire_C.ExecuteUbergraph_BP_PlayingWithFire // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

