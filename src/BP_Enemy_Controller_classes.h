// BlueprintGeneratedClass BP_Enemy_Controller.BP_Enemy_Controller_C
// Size: 0x468 (Inherited: 0x460)
struct ABP_Enemy_Controller_C : AEnemy_Controller {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)

	void ReceiveBeginPlay(); // Function BP_Enemy_Controller.BP_Enemy_Controller_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceivePossess(struct APawn* PossessedPawn); // Function BP_Enemy_Controller.BP_Enemy_Controller_C.ReceivePossess // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Enemy_Controller(int32_t EntryPoint); // Function BP_Enemy_Controller.BP_Enemy_Controller_C.ExecuteUbergraph_BP_Enemy_Controller // (Final|UbergraphFunction) // @ game+0x38a7480
};

