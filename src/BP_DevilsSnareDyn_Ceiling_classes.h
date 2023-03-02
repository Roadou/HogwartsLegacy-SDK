// BlueprintGeneratedClass BP_DevilsSnareDyn_Ceiling.BP_DevilsSnareDyn_Ceiling_C
// Size: 0x448 (Inherited: 0x3e9)
struct ABP_DevilsSnareDyn_Ceiling_C : ABP_DevilsSnareDyn_Base_C {
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UBoxComponent* DamageBoxRetracted; // 0x3f8(0x08)
	struct UBoxComponent* DamageBoxExtended; // 0x400(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareCeilingB04; // 0x408(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareCeilingA02; // 0x410(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareCeilingB03; // 0x418(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareCeilingB02; // 0x420(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareCeilingA01; // 0x428(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareCeilingB01; // 0x430(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareTaperedA01; // 0x438(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareTaperedB01; // 0x440(0x08)

	void ReceiveBeginPlay(); // Function BP_DevilsSnareDyn_Ceiling.BP_DevilsSnareDyn_Ceiling_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DevilsSnareDyn_Ceiling(int32_t EntryPoint); // Function BP_DevilsSnareDyn_Ceiling.BP_DevilsSnareDyn_Ceiling_C.ExecuteUbergraph_BP_DevilsSnareDyn_Ceiling // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

