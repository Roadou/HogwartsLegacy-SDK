// BlueprintGeneratedClass BTT_EnemyAI_GetRandomLocation.BTT_EnemyAI_GetRandomLocation_C
// Size: 0xd4 (Inherited: 0xa8)
struct UBTT_EnemyAI_GetRandomLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool ApplyTether; // 0xb0(0x01)
	bool OverrideCharacterTetherTypeAnd Dist; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	float TetherDistOverride; // 0xb4(0x04)
	enum class ENPC_Tether TetherTypeOveride; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UNPC_Component* NPCComponent; // 0xc0(0x08)
	struct FVector StartVec; // 0xc8(0x0c)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_EnemyAI_GetRandomLocation.BTT_EnemyAI_GetRandomLocation_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_EnemyAI_GetRandomLocation.BTT_EnemyAI_GetRandomLocation_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_EnemyAI_GetRandomLocation(int32_t EntryPoint); // Function BTT_EnemyAI_GetRandomLocation.BTT_EnemyAI_GetRandomLocation_C.ExecuteUbergraph_BTT_EnemyAI_GetRandomLocation // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

