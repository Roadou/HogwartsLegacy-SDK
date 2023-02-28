// BlueprintGeneratedClass BP_AccioImpact.BP_AccioImpact_C
// Size: 0xe8 (Inherited: 0xc8)
struct UBP_AccioImpact_C : USpellImpactComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	float AccioForce; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct ABP_Shell_Accio_C*> ShellActor; // 0xd8(0x10)

	void ReceiveBeginPlay(); // Function BP_AccioImpact.BP_AccioImpact_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AccioImpact.BP_AccioImpact_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AccioImpact(int32_t EntryPoint); // Function BP_AccioImpact.BP_AccioImpact_C.ExecuteUbergraph_BP_AccioImpact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

