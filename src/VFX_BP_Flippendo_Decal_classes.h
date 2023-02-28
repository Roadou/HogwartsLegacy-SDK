// BlueprintGeneratedClass VFX_BP_Flippendo_Decal.VFX_BP_Flippendo_Decal_C
// Size: 0x298 (Inherited: 0x248)
struct AVFX_BP_Flippendo_Decal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UDecalComponent* Decal; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float Timeline_0_NewTrack_0_4A6586A444911439E1C94BB975E479FD; // 0x260(0x04)
	enum class ETimelineDirection Timeline_0__Direction_4A6586A444911439E1C94BB975E479FD; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* Timeline_1; // 0x268(0x08)
	float Timeline_Emissive_NewTrack_0_FB15434345AC1DDD714615865D102483; // 0x270(0x04)
	enum class ETimelineDirection Timeline_Emissive__Direction_FB15434345AC1DDD714615865D102483; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct UTimelineComponent* Timeline_Emissive; // 0x278(0x08)
	struct UMaterialInstanceDynamic* Decal_Mat; // 0x280(0x08)
	struct UMeshComponent* decal_Splat; // 0x288(0x08)
	struct UMaterialInstanceDynamic* Decal_Splatter; // 0x290(0x08)

	void UserConstructionScript(); // Function VFX_BP_Flippendo_Decal.VFX_BP_Flippendo_Decal_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_Emissive__FinishedFunc(); // Function VFX_BP_Flippendo_Decal.VFX_BP_Flippendo_Decal_C.Timeline_Emissive__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_Emissive__UpdateFunc(); // Function VFX_BP_Flippendo_Decal.VFX_BP_Flippendo_Decal_C.Timeline_Emissive__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function VFX_BP_Flippendo_Decal.VFX_BP_Flippendo_Decal_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function VFX_BP_Flippendo_Decal.VFX_BP_Flippendo_Decal_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Flippendo_Decal.VFX_BP_Flippendo_Decal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Flippendo_Decal(int32_t EntryPoint); // Function VFX_BP_Flippendo_Decal.VFX_BP_Flippendo_Decal_C.ExecuteUbergraph_VFX_BP_Flippendo_Decal // (Final|UbergraphFunction) // @ game+0x38a7480
};

