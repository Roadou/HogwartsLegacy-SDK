// BlueprintGeneratedClass BP_ObjectStateDiagnostics.BP_ObjectStateDiagnostics_C
// Size: 0x260 (Inherited: 0x248)
struct ABP_ObjectStateDiagnostics_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UWidgetComponent* Widget; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)

	void ReceiveBeginPlay(); // Function BP_ObjectStateDiagnostics.BP_ObjectStateDiagnostics_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_ObjectStateDiagnostics.BP_ObjectStateDiagnostics_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ObjectStateDiagnostics(int32_t EntryPoint); // Function BP_ObjectStateDiagnostics.BP_ObjectStateDiagnostics_C.ExecuteUbergraph_BP_ObjectStateDiagnostics // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

