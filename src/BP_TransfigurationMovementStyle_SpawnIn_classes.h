// BlueprintGeneratedClass BP_TransfigurationMovementStyle_SpawnIn.BP_TransfigurationMovementStyle_SpawnIn_C
// Size: 0x60c (Inherited: 0x5e8)
struct ABP_TransfigurationMovementStyle_SpawnIn_C : ABP_TransfigurationMovementStyle_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e8(0x08)
	float PlaceTimeline_Scale_16644A4A4AD78EA0DD9B12BF839430F7; // 0x5f0(0x04)
	float PlaceTimeline_DistanceFromSurface_16644A4A4AD78EA0DD9B12BF839430F7; // 0x5f4(0x04)
	enum class ETimelineDirection PlaceTimeline__Direction_16644A4A4AD78EA0DD9B12BF839430F7; // 0x5f8(0x01)
	char pad_5F9[0x7]; // 0x5f9(0x07)
	struct UTimelineComponent* PlaceTimeline; // 0x600(0x08)
	float LevitationDistance; // 0x608(0x04)

	void PlaceTimeline__FinishedFunc(); // Function BP_TransfigurationMovementStyle_SpawnIn.BP_TransfigurationMovementStyle_SpawnIn_C.PlaceTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void PlaceTimeline__UpdateFunc(); // Function BP_TransfigurationMovementStyle_SpawnIn.BP_TransfigurationMovementStyle_SpawnIn_C.PlaceTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Place(); // Function BP_TransfigurationMovementStyle_SpawnIn.BP_TransfigurationMovementStyle_SpawnIn_C.Place // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TransfigurationMovementStyle_SpawnIn(int32_t EntryPoint); // Function BP_TransfigurationMovementStyle_SpawnIn.BP_TransfigurationMovementStyle_SpawnIn_C.ExecuteUbergraph_BP_TransfigurationMovementStyle_SpawnIn // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

