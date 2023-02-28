// BlueprintGeneratedClass BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C
// Size: 0x1d9 (Inherited: 0xc8)
struct UBP_SplineCollisionGenerator_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMeshComponent; // 0xd0(0x08)
	struct USplineComponent* SplineComponent; // 0xd8(0x08)
	float CheckIntervalDistance; // 0xe0(0x04)
	float MaxAngleDelta; // 0xe4(0x04)
	float WallWidth; // 0xe8(0x04)
	float WallHeight; // 0xec(0x04)
	bool HiddenInGame; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float SplineLength; // 0xf4(0x04)
	bool Finished; // 0xf8(0x01)
	bool Clockwise; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	float SegmentStart; // 0xfc(0x04)
	float SegmentEnd; // 0x100(0x04)
	float PreviousSegmentStart; // 0x104(0x04)
	float PreviousSegmentEnd; // 0x108(0x04)
	float CheckEnd; // 0x10c(0x04)
	struct FVector OutsideCornerPoint; // 0x110(0x0c)
	struct FVector ProjectedCornerPoint; // 0x11c(0x0c)
	struct FVector OffsetedStartPoint; // 0x128(0x0c)
	char pad_134[0x4]; // 0x134(0x04)
	struct UPhysicalMaterial* PhysicsMaterial; // 0x138(0x08)
	bool GenerateOverlapEvents; // 0x140(0x01)
	bool UseCollisionPreset; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	struct FName CollisionPresetName; // 0x144(0x08)
	enum class ECollisionEnabled CollisionEnabled; // 0x14c(0x01)
	enum class ECollisionChannel ObjectType; // 0x14d(0x01)
	char pad_14E[0x2]; // 0x14e(0x02)
	struct TMap<enum class ECollisionChannel, enum class ECollisionResponse> CollisionResponseOverrides; // 0x150(0x50)
	struct FText GenerationReport; // 0x1a0(0x18)
	struct FLinearColor WallColor; // 0x1b8(0x10)
	bool Loops; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct USplineComponent* SplineHelper; // 0x1d0(0x08)
	bool Use Pitch; // 0x1d8(0x01)

	void SnapInstancesToSpline(); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.SnapInstancesToSpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateSplineHelper(); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.CreateSplineHelper // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetGenerationReport(struct FText& Result); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.GetGenerationReport // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Get Map Values(int32_t Index, struct TMap<enum class ECollisionChannel, enum class ECollisionResponse>& TargetMap, enum class ECollisionResponse& Output); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.Get Map Values // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	struct FVector GetProjectedCornerPoint(float EndDistance, struct FVector& CornerPoint, bool TurnDirection); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.GetProjectedCornerPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	struct FVector GetOutsideCornerPoint(float LastStart, struct FVector OffsetStartPoint, float LastEnd, bool TurnDirection); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.GetOutsideCornerPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	bool GetTurnDirection(float LastStart, float LastEnd, float CheckEnd); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.GetTurnDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void FindAngle(float AB Length, float C Length, float& Angle); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.FindAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetAbsDelta(struct FRotator A, struct FRotator B, float& Yaw); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.GetAbsDelta // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	struct FVector Get Location At Distance Along Spline(float Distance); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.Get Location At Distance Along Spline // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	bool CheckAngleDelta(float StartDistance, float EndDistance, float CheckDistance); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.CheckAngleDelta // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void CreateNewInstance(struct FVector BoxStart, struct FVector BoxEnd); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.CreateNewInstance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GenerateCollisionInstances(struct USplineComponent* SplineComponent, struct UInstancedStaticMeshComponent* InstancedStaticMeshComponent, struct FF_SplineCollisionGenerationSettings GenerationSettings, bool UsePitch); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.GenerateCollisionInstances // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SplineCollisionGenerator(int32_t EntryPoint); // Function BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.ExecuteUbergraph_BP_SplineCollisionGenerator // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

