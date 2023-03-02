// BlueprintGeneratedClass BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C
// Size: 0x360 (Inherited: 0x248)
struct ABP_GM_CartCauldronSmall_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_GobMine_SmallCart_Box; // 0x250(0x08)
	struct UBillboardComponent* BillboardRight1; // 0x258(0x08)
	struct UBillboardComponent* BillboardRight; // 0x260(0x08)
	struct UPointLightComponent* PointLight; // 0x268(0x08)
	struct UStaticMeshComponent* SM_GobMine_SmallCauldron_Bucket; // 0x270(0x08)
	struct UObjectStateComponent* ObjectState; // 0x278(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x280(0x08)
	struct UStaticMeshComponent* SM_GobMine_SmallCauldron_A; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	float Timeline_2_NewTrack_0_4D9373A24307965DA8E563B69D4E1365; // 0x298(0x04)
	enum class ETimelineDirection Timeline_2__Direction_4D9373A24307965DA8E563B69D4E1365; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Timeline_3; // 0x2a0(0x08)
	float Timeline_1_NewTrack_0_1D73B0D64C30C8BDFD2AF49893292FFA; // 0x2a8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_1D73B0D64C30C8BDFD2AF49893292FFA; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2b0(0x08)
	float Timeline_0_NewTrack_0_4CBA12C74C31FA3118A1BF930786A185; // 0x2b8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_4CBA12C74C31FA3118A1BF930786A185; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2c0(0x08)
	struct ABP_GM_TrackCompositeSpline_C* TrackSpline; // 0x2c8(0x08)
	float Speed; // 0x2d0(0x04)
	float CurrentDistanceOnSpline; // 0x2d4(0x04)
	bool SwitchSpline; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float DistanceOnSpline; // 0x2dc(0x04)
	float JunkDistance; // 0x2e0(0x04)
	bool SwitchSplineNextTurn; // 0x2e4(0x01)
	bool PhysEnabled; // 0x2e5(0x01)
	char pad_2E6[0x2]; // 0x2e6(0x02)
	float OldPitch; // 0x2e8(0x04)
	float OldYaw; // 0x2ec(0x04)
	float PitchSparkThreshold; // 0x2f0(0x04)
	float YawSparkThreshold; // 0x2f4(0x04)
	struct TArray<struct FTransform> SparksBothWheels; // 0x2f8(0x10)
	struct TArray<struct FTransform> SparksRightWheel; // 0x308(0x10)
	struct TArray<struct FTransform> SparksLeftWheel; // 0x318(0x10)
	struct FRotator CartRotation; // 0x328(0x0c)
	struct FVector CartLocation; // 0x334(0x0c)
	bool bIsBucket; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	struct FRotator BucketPreDropRotation; // 0x344(0x0c)
	bool bIsBucketFilled; // 0x350(0x01)
	bool bIsStopNDropping; // 0x351(0x01)
	char pad_352[0x6]; // 0x352(0x06)
	struct UParticleSystemComponent* VFXRockEmmiter; // 0x358(0x08)

	void DistanceFromWolrd(struct FVector Location, struct USplineComponent* Spline, float& Distance); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.DistanceFromWolrd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__FinishedFunc(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__UpdateFunc(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void MoveBucket(float DistanceOnSpline, float Speed); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.MoveBucket // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void junkUp(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.junkUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopNDrop(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.StopNDrop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyBoxBottom(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.DestroyBoxBottom // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FillBucket(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.FillBucket // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinishedDropping(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.FinishedDropping // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopTimeline(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.StopTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayTimeline(); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.PlayTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_CartCauldronSmall(int32_t EntryPoint); // Function BP_GM_CartCauldronSmall.BP_GM_CartCauldronSmall_C.ExecuteUbergraph_BP_GM_CartCauldronSmall // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

