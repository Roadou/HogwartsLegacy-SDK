// BlueprintGeneratedClass BP_Spitton_Interact.BP_Spitton_Interact_C
// Size: 0x320 (Inherited: 0x2f4)
struct ABP_Spitton_Interact_C : ABP_HW_PartialBody_Interaction_C {
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct USphereComponent* Sphere; // 0x300(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x308(0x08)
	struct USceneComponent* ForTag; // 0x310(0x08)
	float Relative Rotation X (Roll); // 0x318(0x04)
	float Relative Rotation Y (Pitch); // 0x31c(0x04)

	void InteractionStarted(); // Function BP_Spitton_Interact.BP_Spitton_Interact_C.InteractionStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_Spitton_Interact.BP_Spitton_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Spitton_Interact(int32_t EntryPoint); // Function BP_Spitton_Interact.BP_Spitton_Interact_C.ExecuteUbergraph_BP_Spitton_Interact // (Final|UbergraphFunction) // @ game+0x38a7480
};

