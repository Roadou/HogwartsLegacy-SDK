// BlueprintGeneratedClass BP_Hogwarts_DebugText.BP_Hogwarts_DebugText_C
// Size: 0x281 (Inherited: 0x248)
struct ABP_Hogwarts_DebugText_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UTextRenderComponent* TextRender; // 0x250(0x08)
	struct USceneComponent* Scene; // 0x258(0x08)
	struct FText Text; // 0x260(0x18)
	float Scale; // 0x278(0x04)
	float NewVar_1; // 0x27c(0x04)
	bool ShouldRotate; // 0x280(0x01)

	void UserConstructionScript(); // Function BP_Hogwarts_DebugText.BP_Hogwarts_DebugText_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Hogwarts_DebugText.BP_Hogwarts_DebugText_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_1(); // Function BP_Hogwarts_DebugText.BP_Hogwarts_DebugText_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Hogwarts_DebugText(int32_t EntryPoint); // Function BP_Hogwarts_DebugText.BP_Hogwarts_DebugText_C.ExecuteUbergraph_BP_Hogwarts_DebugText // (Final|UbergraphFunction) // @ game+0x38a7480
};

