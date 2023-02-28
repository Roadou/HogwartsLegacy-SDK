// BlueprintGeneratedClass VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C
// Size: 0x298 (Inherited: 0x248)
struct AVFX_BP_Decal3D_Stupify_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UDecalSphereHelper* DecalSphereHelper; // 0x250(0x08)
	struct UDecalComponent* Decal; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float Timeline_2_Alpha_C27138AA42B10D795A5D1E8CFE5514F3; // 0x268(0x04)
	enum class ETimelineDirection Timeline_2__Direction_C27138AA42B10D795A5D1E8CFE5514F3; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Timeline_3; // 0x270(0x08)
	float Timeline_1_Alpha_A471E1BB487073B5424E0186F28D91C9; // 0x278(0x04)
	enum class ETimelineDirection Timeline_1__Direction_A471E1BB487073B5424E0186F28D91C9; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x280(0x08)
	struct UMaterialInstanceDynamic* MAT_Decal; // 0x288(0x08)
	struct FRandomStream Random Seed; // 0x290(0x08)

	void UserConstructionScript(); // Function VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__FinishedFunc(); // Function VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__UpdateFunc(); // Function VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Fade Decal(); // Function VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.Fade Decal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Fade Emissive(); // Function VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.Fade Emissive // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Decal3D_Stupify(int32_t EntryPoint); // Function VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.ExecuteUbergraph_VFX_BP_Decal3D_Stupify // (Final|UbergraphFunction) // @ game+0x38a7480
};

