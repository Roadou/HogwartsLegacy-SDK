// BlueprintGeneratedClass BP_WE_Mirage_Dressing_Snowman.BP_WE_Mirage_Dressing_Snowman_C
// Size: 0x300 (Inherited: 0x290)
struct ABP_WE_Mirage_Dressing_Snowman_C : ABP_WE_Mirage_Dressing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UStaticMeshComponent* SM_Volume_Cube; // 0x298(0x08)
	struct USceneComponent* Fog; // 0x2a0(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x2a8(0x08)
	struct UDecalComponent* Decal; // 0x2b0(0x08)
	struct UDecalSphereHelper* DecalSphereHelper1; // 0x2b8(0x08)
	struct UNiagaraComponent* AmbientParticles; // 0x2c0(0x08)
	struct UStaticMeshComponent* VFX_SM_IcicleB_1m; // 0x2c8(0x08)
	struct UStaticMeshComponent* VFX_SM_IcicleB_1m1; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_WE_snowpatch_01; // 0x2d8(0x08)
	struct USceneComponent* Geometry; // 0x2e0(0x08)
	float Timeline_0_NewTrack_0_56EA299D42578A334FFB168D073F8C53; // 0x2e8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_56EA299D42578A334FFB168D073F8C53; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2f0(0x08)
	struct ABP_WE_Mirage_Actor_Snowman_C* Snowman; // 0x2f8(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_WE_Mirage_Dressing_Snowman.BP_WE_Mirage_Dressing_Snowman_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_WE_Mirage_Dressing_Snowman.BP_WE_Mirage_Dressing_Snowman_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void DestroyDressing(); // Function BP_WE_Mirage_Dressing_Snowman.BP_WE_Mirage_Dressing_Snowman_C.DestroyDressing // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RepairDressing(); // Function BP_WE_Mirage_Dressing_Snowman.BP_WE_Mirage_Dressing_Snowman_C.RepairDressing // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_Mirage_Dressing_Snowman.BP_WE_Mirage_Dressing_Snowman_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Mirage_Dressing_Snowman(int32_t EntryPoint); // Function BP_WE_Mirage_Dressing_Snowman.BP_WE_Mirage_Dressing_Snowman_C.ExecuteUbergraph_BP_WE_Mirage_Dressing_Snowman // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

