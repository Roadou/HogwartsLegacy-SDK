// BlueprintGeneratedClass BP_AudioCall.BP_AudioCall_C
// Size: 0x2c3 (Inherited: 0x248)
struct ABP_AudioCall_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct FHitBySpellData Hit by Spell Data; // 0x258(0x48)
	float Delay; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct UObject* Spell; // 0x2a8(0x08)
	struct FDialogueConversationReference Audio; // 0x2b0(0x10)
	bool IsSpell; // 0x2c0(0x01)
	bool Cleared; // 0x2c1(0x01)
	bool ClearComplete; // 0x2c2(0x01)

	void ReceiveBeginPlay(); // Function BP_AudioCall.BP_AudioCall_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AudioCall(int32_t EntryPoint); // Function BP_AudioCall.BP_AudioCall_C.ExecuteUbergraph_BP_AudioCall // (Final|UbergraphFunction) // @ game+0x38a7480
};

