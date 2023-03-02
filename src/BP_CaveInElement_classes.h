// BlueprintGeneratedClass BP_CaveInElement.BP_CaveInElement_C
// Size: 0x2d1 (Inherited: 0x248)
struct ABP_CaveInElement_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float Timeline_0_NewTrack_0_29AA750E4C72F8725583EAAB42D0051F; // 0x258(0x04)
	enum class ETimelineDirection Timeline_0__Direction_29AA750E4C72F8725583EAAB42D0051F; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x260(0x08)
	float AnimateMesh_AnimCurve_568FD24F4E35F1791EE50498ABFB00C3; // 0x268(0x04)
	enum class ETimelineDirection AnimateMesh__Direction_568FD24F4E35F1791EE50498ABFB00C3; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* AnimateMesh; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)
	struct FTransform InitialTransform; // 0x280(0x30)
	struct UCurveFloat* DefualtCurve; // 0x2b0(0x08)
	struct FVector CurrentLocation; // 0x2b8(0x0c)
	struct FVector InitialScale; // 0x2c4(0x0c)
	bool UseShake; // 0x2d0(0x01)

	void AnimateMesh__FinishedFunc(); // Function BP_CaveInElement.BP_CaveInElement_C.AnimateMesh__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void AnimateMesh__UpdateFunc(); // Function BP_CaveInElement.BP_CaveInElement_C.AnimateMesh__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_CaveInElement.BP_CaveInElement_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_CaveInElement.BP_CaveInElement_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ProcessElement(struct FSTR_CaveIn_AnimMeshElement MeshStruct, struct FSTR_CaveInParticleElement ParticleStruct); // Function BP_CaveInElement.BP_CaveInElement_C.ProcessElement // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RemoveMesh(struct UStaticMeshComponent* NewParam); // Function BP_CaveInElement.BP_CaveInElement_C.RemoveMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CaveInElement(int32_t EntryPoint); // Function BP_CaveInElement.BP_CaveInElement_C.ExecuteUbergraph_BP_CaveInElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

