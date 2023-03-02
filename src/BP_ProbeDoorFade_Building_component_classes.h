// BlueprintGeneratedClass BP_ProbeDoorFade_Building_component.BP_ProbeDoorFade_Building_component_C
// Size: 0x268 (Inherited: 0x220)
struct UBP_ProbeDoorFade_Building_component_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UWLightProbesVolumeComponent* Light Probes Volume Component; // 0x228(0x08)
	float Max Light Angle; // 0x230(0x04)
	float Closed Rotation; // 0x234(0x04)
	float Float precision; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct TArray<struct ADoor*> Doors; // 0x240(0x10)
	int32_t Door Index; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct ADoor* Door Actor; // 0x258(0x08)
	struct AActor* Building; // 0x260(0x08)

	void ReceiveBeginPlay(); // Function BP_ProbeDoorFade_Building_component.BP_ProbeDoorFade_Building_component_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_ProbeDoorFade_Building_component.BP_ProbeDoorFade_Building_component_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Door open(); // Function BP_ProbeDoorFade_Building_component.BP_ProbeDoorFade_Building_component_C.Door open // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Door close(); // Function BP_ProbeDoorFade_Building_component.BP_ProbeDoorFade_Building_component_C.Door close // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ProbeDoorFade_Building_component(int32_t EntryPoint); // Function BP_ProbeDoorFade_Building_component.BP_ProbeDoorFade_Building_component_C.ExecuteUbergraph_BP_ProbeDoorFade_Building_component // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

