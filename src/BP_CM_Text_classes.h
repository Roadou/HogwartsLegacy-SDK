// BlueprintGeneratedClass BP_CM_Text.BP_CM_Text_C
// Size: 0x278 (Inherited: 0x248)
struct ABP_CM_Text_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UTextRenderComponent* TextRender; // 0x250(0x08)
	struct USceneComponent* Scene; // 0x258(0x08)
	struct FText Text; // 0x260(0x18)

	void UserConstructionScript(); // Function BP_CM_Text.BP_CM_Text_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_CM_Text.BP_CM_Text_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StartText(); // Function BP_CM_Text.BP_CM_Text_C.StartText // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CM_Text(int32_t EntryPoint); // Function BP_CM_Text.BP_CM_Text_C.ExecuteUbergraph_BP_CM_Text // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

