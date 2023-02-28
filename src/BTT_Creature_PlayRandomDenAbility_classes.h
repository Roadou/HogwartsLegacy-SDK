// BlueprintGeneratedClass BTT_Creature_PlayRandomDenAbility.BTT_Creature_PlayRandomDenAbility_C
// Size: 0x110 (Inherited: 0xa8)
struct UBTT_Creature_PlayRandomDenAbility_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	enum class ECreatureStance Creature Stance; // 0xb0(0x01)
	bool Force Execute; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct TMap<enum class ECreatureStance, struct UInteractionArchitectAsset*> IDA Stance Map; // 0xb8(0x50)
	struct UCreature_AIComponent* AIComponent; // 0x108(0x08)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Creature_PlayRandomDenAbility.BTT_Creature_PlayRandomDenAbility_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Creature_PlayRandomDenAbility(int32_t EntryPoint); // Function BTT_Creature_PlayRandomDenAbility.BTT_Creature_PlayRandomDenAbility_C.ExecuteUbergraph_BTT_Creature_PlayRandomDenAbility // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

