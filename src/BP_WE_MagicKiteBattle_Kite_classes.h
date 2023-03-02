// BlueprintGeneratedClass BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C
// Size: 0x378 (Inherited: 0x248)
struct ABP_WE_MagicKiteBattle_Kite_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* magic_kite_battle_kite; // 0x250(0x08)
	struct USplineComponent* Return2; // 0x258(0x08)
	struct USplineComponent* Return1; // 0x260(0x08)
	struct USplineComponent* Return; // 0x268(0x08)
	struct USplineComponent* Loop1; // 0x270(0x08)
	struct USplineComponent* Loop; // 0x278(0x08)
	struct USplineComponent* Deploy2; // 0x280(0x08)
	struct USplineComponent* Deploy1; // 0x288(0x08)
	struct USplineComponent* Deploy; // 0x290(0x08)
	struct USceneComponent* ReturnSplines; // 0x298(0x08)
	struct USceneComponent* LoopSplines; // 0x2a0(0x08)
	struct USceneComponent* DeploySplines; // 0x2a8(0x08)
	struct UNiagaraComponent* Rope; // 0x2b0(0x08)
	struct UNiagaraComponent* ParticleDeploy_Spline; // 0x2b8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2c0(0x08)
	struct USceneComponent* Kite; // 0x2c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d0(0x08)
	enum class ETimelineDirection UpdateReturnRope__Direction_ECF683934836A54CF68139B095FAC6FE; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct UTimelineComponent* UpdateReturnRope; // 0x2e0(0x08)
	float MoveKiteBackToWand_Alpha_7F4D995143BE43EBDA9D60B6AF014111; // 0x2e8(0x04)
	enum class ETimelineDirection MoveKiteBackToWand__Direction_7F4D995143BE43EBDA9D60B6AF014111; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct UTimelineComponent* MoveKiteBackToWand; // 0x2f0(0x08)
	float MoveAlongSpline_Alpha_E3484E0E4070CBC201EDCA91F3F8D564; // 0x2f8(0x04)
	enum class ETimelineDirection MoveAlongSpline__Direction_E3484E0E4070CBC201EDCA91F3F8D564; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct UTimelineComponent* MoveAlongSpline; // 0x300(0x08)
	float MoveKiteToSpline_Alpha_5D8AAEC942DBC063CFB9A086F7C3342A; // 0x308(0x04)
	enum class ETimelineDirection MoveKiteToSpline__Direction_5D8AAEC942DBC063CFB9A086F7C3342A; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct UTimelineComponent* MoveKiteToSpline; // 0x310(0x08)
	bool HasUsedReturnSpline; // 0x318(0x01)
	bool HasDeployed; // 0x319(0x01)
	char pad_31A[0x2]; // 0x31a(0x02)
	float KiteDeployDuration; // 0x31c(0x04)
	float KiteLoopDuration; // 0x320(0x04)
	float KiteReturnDuration; // 0x324(0x04)
	struct FRotator StartRot; // 0x328(0x0c)
	struct FVector ReturnStartLocation; // 0x334(0x0c)
	struct USkeletalMeshComponent* SkeletalMeshComp; // 0x340(0x08)
	struct USplineComponent* LoopSpline; // 0x348(0x08)
	struct UStaticMeshComponent* Wand; // 0x350(0x08)
	struct AActor* KiteFlier; // 0x358(0x08)
	struct ABP_WE_MagicKiteBattle_C* EventManager; // 0x360(0x08)
	struct USplineComponent* DeploySpline; // 0x368(0x08)
	struct USplineComponent* ReturnSpline; // 0x370(0x08)

	struct USkeletalMeshComponent* Get Char Mesh(struct AActor* NewParam); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.Get Char Mesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UpdateRopePosition(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.UpdateRopePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveOnSpline(struct USceneComponent* Mover, struct USplineComponent* Spline, float Alpha, bool SetRotation); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.MoveOnSpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveKiteToSpline__FinishedFunc(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.MoveKiteToSpline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void MoveKiteToSpline__UpdateFunc(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.MoveKiteToSpline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void MoveKiteToSpline__StartDeploy__EventFunc(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.MoveKiteToSpline__StartDeploy__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void MoveAlongSpline__FinishedFunc(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.MoveAlongSpline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void MoveAlongSpline__UpdateFunc(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.MoveAlongSpline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void MoveKiteBackToWand__FinishedFunc(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.MoveKiteBackToWand__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void MoveKiteBackToWand__UpdateFunc(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.MoveKiteBackToWand__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void MoveKiteBackToWand__StartReturn__EventFunc(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.MoveKiteBackToWand__StartReturn__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void UpdateReturnRope__FinishedFunc(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.UpdateReturnRope__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void UpdateReturnRope__UpdateFunc(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.UpdateReturnRope__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void KiteReturn(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.KiteReturn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartDeploy(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.StartDeploy // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinishedReturnAnim(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.FinishedReturnAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartFlyingLoop(); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.StartFlyingLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_MagicKiteBattle_Kite(int32_t EntryPoint); // Function BP_WE_MagicKiteBattle_Kite.BP_WE_MagicKiteBattle_Kite_C.ExecuteUbergraph_BP_WE_MagicKiteBattle_Kite // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

