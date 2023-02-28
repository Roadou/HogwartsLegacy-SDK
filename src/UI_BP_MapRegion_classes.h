// BlueprintGeneratedClass UI_BP_MapRegion.UI_BP_MapRegion_C
// Size: 0x288 (Inherited: 0x248)
struct AUI_BP_MapRegion_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	enum class ESplineMeshAxis regionForwardAxis; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UMaterialInstanceDynamic* regionDynamicMaterial; // 0x260(0x08)
	struct TArray<struct UStaticMeshComponent*> RegionMeshes; // 0x268(0x10)
	struct TArray<struct UMaterialInstance*> DynamicMaterialInstances; // 0x278(0x10)

	void CreateSpline(struct USplineComponent* SplineComponent); // Function UI_BP_MapRegion.UI_BP_MapRegion_C.CreateSpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Show(bool Visible); // Function UI_BP_MapRegion.UI_BP_MapRegion_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function UI_BP_MapRegion.UI_BP_MapRegion_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetupSpline_Event_2(struct USplineComponent* SplineComponent); // Function UI_BP_MapRegion.UI_BP_MapRegion_C.SetupSpline_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MapRegion(int32_t EntryPoint); // Function UI_BP_MapRegion.UI_BP_MapRegion_C.ExecuteUbergraph_UI_BP_MapRegion // (Final|UbergraphFunction) // @ game+0x38a7480
};

