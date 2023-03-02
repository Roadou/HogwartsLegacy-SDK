// BlueprintGeneratedClass BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C
// Size: 0x8f9 (Inherited: 0x358)
struct ABP_WE_Spline_Mover_Cart_C : ACartMoverBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UAkComponent* Ak; // 0x360(0x08)
	struct UChildActorComponent* CollisionSetup; // 0x368(0x08)
	struct UChildActorComponent* BackSpringLeftActor; // 0x370(0x08)
	struct UChildActorComponent* BackSpringRightActor; // 0x378(0x08)
	struct UChildActorComponent* FrontSpringRightActor; // 0x380(0x08)
	struct UChildActorComponent* FrontSpringLeftActor; // 0x388(0x08)
	struct USceneComponent* FrontLeftWheelRef; // 0x390(0x08)
	struct USceneComponent* FrontRightWheelRef; // 0x398(0x08)
	struct UChildActorComponent* FrontWheelsActor; // 0x3a0(0x08)
	struct UChildActorComponent* FrontAxleActor; // 0x3a8(0x08)
	struct USceneComponent* BackRightWheelRef; // 0x3b0(0x08)
	struct USceneComponent* BackLeftWheelRef; // 0x3b8(0x08)
	struct UChildActorComponent* FrontSteeringActor; // 0x3c0(0x08)
	struct UChildActorComponent* BackWheelsActor; // 0x3c8(0x08)
	struct UChildActorComponent* BackAxleActor; // 0x3d0(0x08)
	struct USocialMultiAgentComponent* SocialMultiAgent; // 0x3d8(0x08)
	struct UChildActorComponent* CartBodyActor; // 0x3e0(0x08)
	struct USceneComponent* Scene; // 0x3e8(0x08)
	struct UParticleSystemComponent* DustVFX; // 0x3f0(0x08)
	struct UStaticMeshComponent* Tailgate; // 0x3f8(0x08)
	struct UChildActorComponent* TailgateActor; // 0x400(0x08)
	struct UStaticMeshComponent* Tailgate_Decals; // 0x408(0x08)
	float TL_TailGate_Swing_9FF2ABA84CE761B3423315BC70E48870; // 0x410(0x04)
	enum class ETimelineDirection TL_TailGate__Direction_9FF2ABA84CE761B3423315BC70E48870; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	struct UTimelineComponent* TL_TailGate; // 0x418(0x08)
	bool SwingBack; // 0x420(0x01)
	bool FinishedSpline; // 0x421(0x01)
	bool BodyLoaded; // 0x422(0x01)
	bool TailGateLoaded; // 0x423(0x01)
	bool PredeterminedPrefab; // 0x424(0x01)
	bool FinishedSetup; // 0x425(0x01)
	char pad_426[0x2]; // 0x426(0x02)
	int32_t CartBlockerCount; // 0x428(0x04)
	int32_t PrefabInt; // 0x42c(0x04)
	float local_delta; // 0x430(0x04)
	float Front_Wheel_Circumference ; // 0x434(0x04)
	float Back_Wheel_Circumference; // 0x438(0x04)
	float MaxVelocity; // 0x43c(0x04)
	struct FTimerHandle CartRestartTimer; // 0x440(0x08)
	struct USplineComponent* Spline_1; // 0x448(0x08)
	struct TArray<struct FSTR_RTWCarts> CartPrefabs; // 0x450(0x10)
	struct FCartSetup CartSetupData; // 0x460(0x208)
	struct FCartSetup CartSetup; // 0x668(0x208)
	bool BlockedByPlayer; // 0x870(0x01)
	bool BlockedByCart; // 0x871(0x01)
	bool TailgateClosed; // 0x872(0x01)
	char pad_873[0x5]; // 0x873(0x05)
	struct FSTR_RTWCarts PrefabStructure; // 0x878(0x58)
	bool BackWheelLoaded; // 0x8d0(0x01)
	bool BackAxleLoaded; // 0x8d1(0x01)
	bool FrontSteeringLoaded; // 0x8d2(0x01)
	bool FrontAxleLoaded; // 0x8d3(0x01)
	bool FrontWheelsLoaded; // 0x8d4(0x01)
	bool FrontSpringRightLoaded; // 0x8d5(0x01)
	bool FrontSpringLeftLoaded; // 0x8d6(0x01)
	bool CollisionLoaded; // 0x8d7(0x01)
	bool BackSpringRightLoaded; // 0x8d8(0x01)
	bool BackSpringLeftLoaded; // 0x8d9(0x01)
	char pad_8DA[0x6]; // 0x8da(0x06)
	struct UBoxComponent* SlowCollisionReference; // 0x8e0(0x08)
	struct UBoxComponent* StopCollisionReference; // 0x8e8(0x08)
	struct ABP_WE_RIW_Collision_C* As BP WE RIW Collision; // 0x8f0(0x08)
	bool SFXPlaying; // 0x8f8(0x01)

	void SetupOverlapAndCollisionThrottles(); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.SetupOverlapAndCollisionThrottles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Is Cart Unblocked(); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.Is Cart Unblocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Is Blocked by Cart(struct AActor* OtherCart, bool& IsBlocked); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.Is Blocked by Cart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TryFinishSetup(); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.TryFinishSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupTailGate(); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.SetupTailGate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RestartCart(); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.RestartCart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TL_TailGate__FinishedFunc(); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.TL_TailGate__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void TL_TailGate__UpdateFunc(); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.TL_TailGate__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C8F11CFB40A5A0EE0183ABAEBBBD6C1A(struct UObject* Loaded); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.OnLoaded_C8F11CFB40A5A0EE0183ABAEBBBD6C1A // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C8F11CFB40A5A0EE0183ABAE1791113B(struct UObject* Loaded); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.OnLoaded_C8F11CFB40A5A0EE0183ABAE1791113B // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C8F11CFB40A5A0EE0183ABAEAAE455DA(struct UObject* Loaded); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.OnLoaded_C8F11CFB40A5A0EE0183ABAEAAE455DA // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C8F11CFB40A5A0EE0183ABAEC21CD983(struct UObject* Loaded); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.OnLoaded_C8F11CFB40A5A0EE0183ABAEC21CD983 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C8F11CFB40A5A0EE0183ABAE71FBC800(struct UObject* Loaded); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.OnLoaded_C8F11CFB40A5A0EE0183ABAE71FBC800 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C8F11CFB40A5A0EE0183ABAE4124B81B(struct UObject* Loaded); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.OnLoaded_C8F11CFB40A5A0EE0183ABAE4124B81B // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C8F11CFB40A5A0EE0183ABAEFE0D2824(struct UObject* Loaded); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.OnLoaded_C8F11CFB40A5A0EE0183ABAEFE0D2824 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C8F11CFB40A5A0EE0183ABAE7B98BCFB(struct UObject* Loaded); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.OnLoaded_C8F11CFB40A5A0EE0183ABAE7B98BCFB // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C8F11CFB40A5A0EE0183ABAE17CD2D57(struct UObject* Loaded); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.OnLoaded_C8F11CFB40A5A0EE0183ABAE17CD2D57 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C8F11CFB40A5A0EE0183ABAEAA72F993(struct UObject* Loaded); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.OnLoaded_C8F11CFB40A5A0EE0183ABAEAA72F993 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C8F11CFB40A5A0EE0183ABAE74AAB9B4(struct UObject* Loaded); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.OnLoaded_C8F11CFB40A5A0EE0183ABAE74AAB9B4 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C8F11CFB40A5A0EE0183ABAE1DF423C0(struct UObject* Loaded); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.OnLoaded_C8F11CFB40A5A0EE0183ABAE1DF423C0 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetupCart(); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.SetupCart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Spline_Mover_Cart(int32_t EntryPoint); // Function BP_WE_Spline_Mover_Cart.BP_WE_Spline_Mover_Cart_C.ExecuteUbergraph_BP_WE_Spline_Mover_Cart // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

