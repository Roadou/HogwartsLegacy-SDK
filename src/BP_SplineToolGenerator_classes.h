// BlueprintGeneratedClass BP_SplineToolGenerator.BP_SplineToolGenerator_C
// Size: 0x1ec (Inherited: 0xc8)
struct UBP_SplineToolGenerator_C : USplineToolGenerator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	struct USplineComponent* Spline; // 0xd0(0x08)
	float spacing; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TArray<struct UStaticMesh*> MeshesToUse; // 0xe0(0x10)
	bool UseRandomMeshes; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FRandomStream RandomizationSeed; // 0xf4(0x08)
	bool RotateMeshAtOrigin; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct TArray<struct UStaticMesh*> ValidMeshes; // 0x100(0x10)
	int32_t InstancesNeeded; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<struct UInstancedStaticMeshComponent*> GeneratedISM; // 0x118(0x10)
	bool UseStartEndMesh; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float SpawnChance; // 0x12c(0x04)
	struct TArray<float> Static Mesh Weights; // 0x130(0x10)
	struct TArray<struct UStaticMesh*> ValidSetMeshes; // 0x140(0x10)
	struct TArray<float> Mesh Chance Num; // 0x150(0x10)
	bool UseSplineMeshByMaxAngle; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	float MaxAngleDelta; // 0x164(0x04)
	float CheckEnd; // 0x168(0x04)
	float SplineMeshTangentScale; // 0x16c(0x04)
	float Spline Mesh Tangent Scale; // 0x170(0x04)
	int32_t Debug ISM Components Count; // 0x174(0x04)
	int32_t Debug SplineMeshComponentsCount; // 0x178(0x04)
	int32_t Debug ISM Instances Count; // 0x17c(0x04)
	float SpacingOffset; // 0x180(0x04)
	float DebugOffset; // 0x184(0x04)
	struct FMulticastInlineDelegate SplineGeneratorDebugDispatcher; // 0x188(0x10)
	bool In Generate Overlap Events; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	struct FName In Collision Profile Name; // 0x19c(0x08)
	float SplineLength; // 0x1a4(0x04)
	bool EnableDebugging; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct UStaticMesh* Start Mesh; // 0x1b0(0x08)
	struct UStaticMesh* End Mesh; // 0x1b8(0x08)
	float SectionScaleAdjustment; // 0x1c0(0x04)
	float EndMeshOffset; // 0x1c4(0x04)
	float AdjustedSpacing; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct UInstancedStaticMeshComponent* SelectedInstanceComponent; // 0x1d0(0x08)
	float RemainderTolerance; // 0x1d8(0x04)
	bool Flip Mesh; // 0x1dc(0x01)
	char pad_1DD[0x3]; // 0x1dd(0x03)
	float InstanceLimit; // 0x1e0(0x04)
	bool UseHISM; // 0x1e4(0x01)
	char pad_1E5[0x3]; // 0x1e5(0x03)
	int32_t UseHISMThreshold; // 0x1e8(0x04)

	void AddStaticMeshComponent(struct FVector InTransformLocation, struct FRotator InRotation, struct FName InCollisionProfileName, float InSectionLength); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.AddStaticMeshComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float GetRelativeScaleToSpacing(struct UStaticMesh* StaticMesh, int32_t Index, float SectionLength); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.GetRelativeScaleToSpacing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GenerateUsageDebugData(); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.GenerateUsageDebugData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetComponentCounts(int32_t& Debug ISM Components Count, int32_t& Debug SplineMeshComponentsCount, int32_t& Debug ISM Instances Count); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.GetComponentCounts // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ShowDebugLines(float InDebugOffset, float StartDistance, float EndDistance); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.ShowDebugLines // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PurePrintFloat(struct FString NewParam, float FloatValue, float& Value); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.PurePrintFloat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void AddSplineMesh(int32_t InSplineLoopIndex, bool InGenerateOverlapEvents, struct FName InCollisionProfileName); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.AddSplineMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetLocationsByIndex(int32_t SplineLoopIndex, float SpacingOffset, bool isSplineMesh, float& SectionStartLocation, float& SectionEndLocation); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.GetLocationsByIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	bool CheckMaxAngle(float StartDistance, float EndDistance, int32_t Index); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.CheckMaxAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetStaticMeshesUsedOnSpline(struct TArray<struct UStaticMesh*>& Array, struct TArray<struct UStaticMesh*>& ValidSetMeshes, struct TArray<float>& MeshChanceNum); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.GetStaticMeshesUsedOnSpline // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void PickWeightedRandom(int32_t NumMeshes, struct TArray<float>& Weights, bool& Success, int32_t& Return); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.PickWeightedRandom // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ShouldGenerateMesh(int32_t CurrentIndex, int32_t LastIndex, bool& Return); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.ShouldGenerateMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetValidMesh(bool& FoundSome); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.GetValidMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Add ISM Component(int32_t Index); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.Add ISM Component // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectRandomComponent(struct UInstancedStaticMeshComponent*& Output); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.SelectRandomComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GenerateInstances(struct USplineComponent* Spline, float MeshSpacing, float CreateInstanceChance, struct TArray<struct UStaticMesh*>& StaticMeshes, struct TArray<float>& MeshRandomWeights, bool RandomizeMeshes, struct FRandomStream RandomSeed, bool RotateMeshesAtOrigin, bool FlipMesh, bool StartAndEndMesh, struct UStaticMesh* StartMesh, struct UStaticMesh* EndMesh, bool UseSplineMeshByMaxAngle, float MaxAngleDelta, float SpacingOffset, bool InGenerateOverlapEvents, struct FName InCollisionProfileName, bool EnableDebugging, int32_t UseHISMThreshold); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.GenerateInstances // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SplineToolGenerator(int32_t EntryPoint); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.ExecuteUbergraph_BP_SplineToolGenerator // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void SplineGeneratorDebugDispatcher__DelegateSignature(struct FString TextValue, struct FVector TextLocation, struct FVector Line1Start, struct FVector Line1End, struct FVector Line2Start, struct FVector Line2End); // Function BP_SplineToolGenerator.BP_SplineToolGenerator_C.SplineGeneratorDebugDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

