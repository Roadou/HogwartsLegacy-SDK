// BlueprintGeneratedClass BP_HW_Armi_Sphere_C_Interact.BP_HW_Armi_Sphere_C_Interact_C
// Size: 0x318 (Inherited: 0x2d8)
struct ABP_HW_Armi_Sphere_C_Interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_HW_ArmilarySphere_C_Frame; // 0x2e0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2e8(0x08)
	struct USceneComponent* Tag; // 0x2f0(0x08)
	struct UStaticMeshComponent* SM_HW_ArmilarySphere_C_Ball; // 0x2f8(0x08)
	struct UStaticMeshComponent* SM_HW_ArmilarySphere_C_Mount; // 0x300(0x08)
	float Timeline_0_NewTrack_0_94D7E0CD43FCB3B769C06F922291D6E5; // 0x308(0x04)
	enum class ETimelineDirection Timeline_0__Direction_94D7E0CD43FCB3B769C06F922291D6E5; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x310(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_HW_Armi_Sphere_C_Interact.BP_HW_Armi_Sphere_C_Interact_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_HW_Armi_Sphere_C_Interact.BP_HW_Armi_Sphere_C_Interact_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ResetCog(); // Function BP_HW_Armi_Sphere_C_Interact.BP_HW_Armi_Sphere_C_Interact_C.ResetCog // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_Armi_Sphere_C_Interact.BP_HW_Armi_Sphere_C_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Armi_Sphere_C_Interact(int32_t EntryPoint); // Function BP_HW_Armi_Sphere_C_Interact.BP_HW_Armi_Sphere_C_Interact_C.ExecuteUbergraph_BP_HW_Armi_Sphere_C_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

