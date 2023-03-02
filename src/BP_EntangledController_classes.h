// BlueprintGeneratedClass BP_EntangledController.BP_EntangledController_C
// Size: 0x100 (Inherited: 0xc8)
struct UBP_EntangledController_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	struct AActor* Parent; // 0xd0(0x08)
	struct AActor* Child; // 0xd8(0x08)
	struct TArray<struct AActor*> Ignore; // 0xe0(0x10)
	struct FMulticastInlineDelegate SetIgnoreArray; // 0xf0(0x10)

	void SetArray(); // Function BP_EntangledController.BP_EntangledController_C.SetArray // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_EntangledController(int32_t EntryPoint); // Function BP_EntangledController.BP_EntangledController_C.ExecuteUbergraph_BP_EntangledController // (Final|UbergraphFunction) // @ game+0x38a7480
	void SetIgnoreArray__DelegateSignature(); // Function BP_EntangledController.BP_EntangledController_C.SetIgnoreArray__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

