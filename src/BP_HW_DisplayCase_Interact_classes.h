// BlueprintGeneratedClass BP_HW_DisplayCase_Interact.BP_HW_DisplayCase_Interact_C
// Size: 0x2f0 (Inherited: 0x2d8)
struct ABP_HW_DisplayCase_Interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e8(0x08)

	void GetTextDoSomething(struct UTextRenderComponent*& TextRenderComponent); // Function BP_HW_DisplayCase_Interact.BP_HW_DisplayCase_Interact_C.GetTextDoSomething // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HW_DisplayCase_Interact.BP_HW_DisplayCase_Interact_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_DisplayCase_Interact.BP_HW_DisplayCase_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_DisplayCase_Interact(int32_t EntryPoint); // Function BP_HW_DisplayCase_Interact.BP_HW_DisplayCase_Interact_C.ExecuteUbergraph_BP_HW_DisplayCase_Interact // (Final|UbergraphFunction) // @ game+0x38a7480
};

