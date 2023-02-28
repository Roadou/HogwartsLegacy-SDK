// BlueprintGeneratedClass BP_Kneazle_Creature.BP_Kneazle_Creature_C
// Size: 0x24f8 (Inherited: 0x24c0)
struct ABP_Kneazle_Creature_C : ABP_Creature_Character_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x24c0(0x08)
	struct UExtendedOdcRepulsorComponent* ExtendedOdcRepulsor; // 0x24c8(0x08)
	struct UBP_NPC_MovementCapsuleComponent_C* NPCMovementCapsule_Head; // 0x24d0(0x08)
	struct UCapsuleComponent* Capsule_spine_05; // 0x24d8(0x08)
	struct UCapsuleComponent* Capsule_body; // 0x24e0(0x08)
	struct UQuadrupedSpineComponent* QuadrupedSpine; // 0x24e8(0x08)
	struct UBP_CreatureNurture_C* BP_CreatureNurture; // 0x24f0(0x08)

	void ReceiveBeginPlay(); // Function BP_Kneazle_Creature.BP_Kneazle_Creature_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Kneazle_Creature(int32_t EntryPoint); // Function BP_Kneazle_Creature.BP_Kneazle_Creature_C.ExecuteUbergraph_BP_Kneazle_Creature // (Final|UbergraphFunction) // @ game+0x38a7480
};

