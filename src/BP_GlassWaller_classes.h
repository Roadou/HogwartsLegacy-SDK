// BlueprintGeneratedClass BP_GlassWaller.BP_GlassWaller_C
// Size: 0x311 (Inherited: 0x248)
struct ABP_GlassWaller_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBP_SplineCollisionGenerator_C* SplineCollisionGenerator; // 0x250(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh; // 0x258(0x08)
	struct USplineComponent* Spline; // 0x260(0x08)
	float CheckIntervalDistance; // 0x268(0x04)
	float MaxAngleDelta; // 0x26c(0x04)
	float WallWidth; // 0x270(0x04)
	float WallHeight; // 0x274(0x04)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x278(0x08)
	bool GenerateOverlapEvents; // 0x280(0x01)
	bool UseCollisionPreset; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	struct FName CollisionPresetName; // 0x284(0x08)
	enum class ECollisionChannel ObjectType; // 0x28c(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x28d(0x01)
	char pad_28E[0x2]; // 0x28e(0x02)
	struct TMap<enum class ECollisionChannel, enum class ECollisionResponse> CollisionResponseOverrides; // 0x290(0x50)
	bool Loops; // 0x2e0(0x01)
	bool ReRun; // 0x2e1(0x01)
	char pad_2E2[0x2]; // 0x2e2(0x02)
	struct FLinearColor WallColor; // 0x2e4(0x10)
	bool Use Pitch; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct FText - WallReport; // 0x2f8(0x18)
	bool HiddenInGame; // 0x310(0x01)

	void Request Destroy Spline Helper(struct USplineComponent* SplineHelper, bool& Success); // Function BP_GlassWaller.BP_GlassWaller_C.Request Destroy Spline Helper // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ViewDocumentation(); // Function BP_GlassWaller.BP_GlassWaller_C.ViewDocumentation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_GlassWaller.BP_GlassWaller_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GlassWaller.BP_GlassWaller_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GlassWaller(int32_t EntryPoint); // Function BP_GlassWaller.BP_GlassWaller_C.ExecuteUbergraph_BP_GlassWaller // (Final|UbergraphFunction) // @ game+0x38a7480
};

