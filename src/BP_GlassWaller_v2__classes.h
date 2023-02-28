// BlueprintGeneratedClass BP_GlassWaller_v2_.BP_GlassWaller_v2__C
// Size: 0x333 (Inherited: 0x280)
struct ABP_GlassWaller_v2__C : AGlassWaller {
	struct UBP_SplineCollisionGenerator_C* SplineCollisionGenerator; // 0x280(0x08)
	float CheckIntervalDistance; // 0x288(0x04)
	float MaxAngleDelta; // 0x28c(0x04)
	float WallWidth; // 0x290(0x04)
	float WallHeight; // 0x294(0x04)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x298(0x08)
	bool GenerateOverlapEvents; // 0x2a0(0x01)
	bool UseCollisionPreset; // 0x2a1(0x01)
	char pad_2A2[0x2]; // 0x2a2(0x02)
	struct FName CollisionPresetName; // 0x2a4(0x08)
	enum class ECollisionChannel ObjectType; // 0x2ac(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x2ad(0x01)
	char pad_2AE[0x2]; // 0x2ae(0x02)
	struct TMap<enum class ECollisionChannel, enum class ECollisionResponse> CollisionResponseOverrides; // 0x2b0(0x50)
	struct FLinearColor WallColor; // 0x300(0x10)
	bool Use Pitch; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct FText - WallReport; // 0x318(0x18)
	bool HiddenInGame; // 0x330(0x01)
	bool Loops; // 0x331(0x01)
	bool ReRun; // 0x332(0x01)

	void Request Destroy Spline Helper(struct USplineComponent* SplineHelper, bool& Success); // Function BP_GlassWaller_v2_.BP_GlassWaller_v2__C.Request Destroy Spline Helper // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ViewDocumentation(); // Function BP_GlassWaller_v2_.BP_GlassWaller_v2__C.ViewDocumentation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_GlassWaller_v2_.BP_GlassWaller_v2__C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

