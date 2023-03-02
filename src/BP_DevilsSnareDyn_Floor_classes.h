// BlueprintGeneratedClass BP_DevilsSnareDyn_Floor.BP_DevilsSnareDyn_Floor_C
// Size: 0x438 (Inherited: 0x3e9)
struct ABP_DevilsSnareDyn_Floor_C : ABP_DevilsSnareDyn_Base_C {
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UBoxComponent* DamageBoxExtended; // 0x3f8(0x08)
	struct UBoxComponent* DamageBoxRetracted; // 0x400(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareFloorA03; // 0x408(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareFloorA02; // 0x410(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareFloorB03; // 0x418(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareFloorB02; // 0x420(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareFloorB01; // 0x428(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareFloorA01; // 0x430(0x08)

	void ReceiveBeginPlay(); // Function BP_DevilsSnareDyn_Floor.BP_DevilsSnareDyn_Floor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DevilsSnareDyn_Floor(int32_t EntryPoint); // Function BP_DevilsSnareDyn_Floor.BP_DevilsSnareDyn_Floor_C.ExecuteUbergraph_BP_DevilsSnareDyn_Floor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

