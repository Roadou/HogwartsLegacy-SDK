// BlueprintGeneratedClass BP_EdgeFogController.BP_EdgeFogController_C
// Size: 0x2a4 (Inherited: 0x248)
struct ABP_EdgeFogController_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* CenterPoint; // 0x250(0x08)
	struct UNiagaraComponent* Niagara; // 0x258(0x08)
	struct USplineComponent* Spline1; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	float Fade_Value_9FAD62B843C2BE1DE2CC40B22F94B68E; // 0x270(0x04)
	enum class ETimelineDirection Fade__Direction_9FAD62B843C2BE1DE2CC40B22F94B68E; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct UTimelineComponent* fade; // 0x278(0x08)
	float SectionLength; // 0x280(0x04)
	float HorizontalLength; // 0x284(0x04)
	float VerticalLength; // 0x288(0x04)
	float Offset; // 0x28c(0x04)
	float MaxOpacity; // 0x290(0x04)
	bool Deactivate; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	float XValues; // 0x298(0x04)
	float YValues; // 0x29c(0x04)
	float ZValues; // 0x2a0(0x04)

	void UserConstructionScript(); // Function BP_EdgeFogController.BP_EdgeFogController_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Fade__FinishedFunc(); // Function BP_EdgeFogController.BP_EdgeFogController_C.Fade__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Fade__UpdateFunc(); // Function BP_EdgeFogController.BP_EdgeFogController_C.Fade__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void StartFadeOut(); // Function BP_EdgeFogController.BP_EdgeFogController_C.StartFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartFadeIn(); // Function BP_EdgeFogController.BP_EdgeFogController_C.StartFadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_EdgeFogController.BP_EdgeFogController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_EdgeFogController(int32_t EntryPoint); // Function BP_EdgeFogController.BP_EdgeFogController_C.ExecuteUbergraph_BP_EdgeFogController // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

