// BlueprintGeneratedClass BP_FX_InkShroud.BP_FX_InkShroud_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_FX_InkShroud_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak; // 0x250(0x08)
	struct UParticleSystemComponent* P_InkShroud; // 0x258(0x08)
	struct UStaticMeshComponent* SM_FX_SunSyrupMesh; // 0x260(0x08)
	struct USceneComponent* Scene; // 0x268(0x08)
	float SpawnIn_ScaleTrack_0DBA6EE749C340218B9E96B34B934EC2; // 0x270(0x04)
	enum class ETimelineDirection SpawnIn__Direction_0DBA6EE749C340218B9E96B34B934EC2; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct UTimelineComponent* SpawnIn; // 0x278(0x08)

	void SpawnIn__FinishedFunc(); // Function BP_FX_InkShroud.BP_FX_InkShroud_C.SpawnIn__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void SpawnIn__UpdateFunc(); // Function BP_FX_InkShroud.BP_FX_InkShroud_C.SpawnIn__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FX_InkShroud.BP_FX_InkShroud_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FX_InkShroud(int32_t EntryPoint); // Function BP_FX_InkShroud.BP_FX_InkShroud_C.ExecuteUbergraph_BP_FX_InkShroud // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

