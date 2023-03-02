// BlueprintGeneratedClass BP_DevilsSnareAmbient_Corner.BP_DevilsSnareAmbient_Corner_C
// Size: 0x2a8 (Inherited: 0x28c)
struct ABP_DevilsSnareAmbient_Corner_C : ABP_DevilsSnareAmbient_Base_C {
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UAkComponent* Ak_BP_DevilsSnareAmbient_Corner; // 0x298(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2a0(0x08)

	void UserConstructionScript(); // Function BP_DevilsSnareAmbient_Corner.BP_DevilsSnareAmbient_Corner_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DevilsSnareAmbient_Corner.BP_DevilsSnareAmbient_Corner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DevilsSnareAmbient_Corner(int32_t EntryPoint); // Function BP_DevilsSnareAmbient_Corner.BP_DevilsSnareAmbient_Corner_C.ExecuteUbergraph_BP_DevilsSnareAmbient_Corner // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

