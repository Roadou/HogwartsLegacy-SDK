// BlueprintGeneratedClass BP_RegionSpline.BP_RegionSpline_C
// Size: 0x2f0 (Inherited: 0x290)
struct ABP_RegionSpline_C : APhoenixMapRegion {
	struct USplineComponent* Spline; // 0x290(0x08)
	struct TMap<enum class E_RegionNames, struct FLinearColor> RegionMap; // 0x298(0x50)
	struct UMaterialInstanceDynamic* Material; // 0x2e8(0x08)

	void ReverseSplineOrder(); // Function BP_RegionSpline.BP_RegionSpline_C.ReverseSplineOrder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Show(bool Visible); // Function BP_RegionSpline.BP_RegionSpline_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateSpline(struct USplineComponent* Spline Component); // Function BP_RegionSpline.BP_RegionSpline_C.CreateSpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_RegionSpline.BP_RegionSpline_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

