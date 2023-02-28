// BlueprintGeneratedClass BP_ProbeDoorFade_component.BP_ProbeDoorFade_component_C
// Size: 0x244 (Inherited: 0x220)
struct UBP_ProbeDoorFade_component_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct APadlockDoor* Door component; // 0x228(0x08)
	struct UWLightProbesVolumeComponent* Light Probes Volume Component; // 0x230(0x08)
	float Max Light Angle; // 0x238(0x04)
	float Closed Rotation; // 0x23c(0x04)
	float Float precision; // 0x240(0x04)

	void Door close(); // Function BP_ProbeDoorFade_component.BP_ProbeDoorFade_component_C.Door close // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Door open(); // Function BP_ProbeDoorFade_component.BP_ProbeDoorFade_component_C.Door open // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_ProbeDoorFade_component.BP_ProbeDoorFade_component_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ProbeDoorFade_component.BP_ProbeDoorFade_component_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ProbeDoorFade_component(int32_t EntryPoint); // Function BP_ProbeDoorFade_component.BP_ProbeDoorFade_component_C.ExecuteUbergraph_BP_ProbeDoorFade_component // (Final|UbergraphFunction) // @ game+0x38a7480
};

