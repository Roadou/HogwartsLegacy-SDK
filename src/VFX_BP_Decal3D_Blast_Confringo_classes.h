// BlueprintGeneratedClass VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C
// Size: 0x290 (Inherited: 0x248)
struct AVFX_BP_Decal3D_Blast_Confringo_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UDecalSphereHelper* DecalSphereHelper; // 0x250(0x08)
	struct UDecalComponent* Decal; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float Timeline_0_Alpha_40CBFBED4324C6E3E35F5192E54CDDB4; // 0x268(0x04)
	enum class ETimelineDirection Timeline_0__Direction_40CBFBED4324C6E3E35F5192E54CDDB4; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x270(0x08)
	struct UMaterialInstanceDynamic* MAT_Decal; // 0x278(0x08)
	struct FName NewVar_1; // 0x280(0x08)
	struct FRandomStream Random Seed; // 0x288(0x08)

	void UserConstructionScript(); // Function VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Fade Decal(); // Function VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C.Fade Decal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Decal3D_Blast_Confringo(int32_t EntryPoint); // Function VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C.ExecuteUbergraph_VFX_BP_Decal3D_Blast_Confringo // (Final|UbergraphFunction) // @ game+0x38a7480
};

