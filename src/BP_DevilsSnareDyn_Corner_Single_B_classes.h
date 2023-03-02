// BlueprintGeneratedClass BP_DevilsSnareDyn_Corner_Single_B.BP_DevilsSnareDyn_Corner_Single_B_C
// Size: 0x410 (Inherited: 0x3e9)
struct ABP_DevilsSnareDyn_Corner_Single_B_C : ABP_DevilsSnareDyn_Base_C {
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UBoxComponent* DamageBoxRetracted; // 0x3f8(0x08)
	struct UBoxComponent* DamageBoxExtended; // 0x400(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareRightAngleB01; // 0x408(0x08)

	void ReceiveBeginPlay(); // Function BP_DevilsSnareDyn_Corner_Single_B.BP_DevilsSnareDyn_Corner_Single_B_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DevilsSnareDyn_Corner_Single_B(int32_t EntryPoint); // Function BP_DevilsSnareDyn_Corner_Single_B.BP_DevilsSnareDyn_Corner_Single_B_C.ExecuteUbergraph_BP_DevilsSnareDyn_Corner_Single_B // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

