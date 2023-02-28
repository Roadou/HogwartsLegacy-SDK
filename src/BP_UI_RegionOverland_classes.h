// BlueprintGeneratedClass BP_UI_RegionOverland.BP_UI_RegionOverland_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_UI_RegionOverland_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float PulseTimeline_Pulse_6DA7D5514447DEA8F53E2FB54E705A66; // 0x258(0x04)
	enum class ETimelineDirection PulseTimeline__Direction_6DA7D5514447DEA8F53E2FB54E705A66; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct UTimelineComponent* PulseTimeline; // 0x260(0x08)

	void PulseTimeline__FinishedFunc(); // Function BP_UI_RegionOverland.BP_UI_RegionOverland_C.PulseTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void PulseTimeline__UpdateFunc(); // Function BP_UI_RegionOverland.BP_UI_RegionOverland_C.PulseTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_UI_RegionOverland.BP_UI_RegionOverland_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void RegionIndexEvent(struct UObject* Caller, int32_t int); // Function BP_UI_RegionOverland.BP_UI_RegionOverland_C.RegionIndexEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_UI_RegionOverland(int32_t EntryPoint); // Function BP_UI_RegionOverland.BP_UI_RegionOverland_C.ExecuteUbergraph_BP_UI_RegionOverland // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

