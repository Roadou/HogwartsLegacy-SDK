// BlueprintGeneratedClass BP_DeadNPC_Spawner.BP_DeadNPC_Spawner_C
// Size: 0x2f0 (Inherited: 0x248)
struct ABP_DeadNPC_Spawner_C : AActor {
	struct UChildActorComponent* Dead NPC Dressing; // 0x248(0x08)
	struct UChildActorComponent* Dead NPC Body; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	enum class E_DeadNPC_Type DeadNPC_Selection; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct AActor* DeadNPC_BodyType; // 0x268(0x08)
	struct AActor* DeadNPC_DressingType; // 0x270(0x08)
	int32_t LootLevel; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TMap<enum class E_DeadNPC_Type, int32_t> DeadNPC_LootMap; // 0x280(0x50)
	struct TArray<struct FSoftClassPath> DeadNPCBodyRefList; // 0x2d0(0x10)
	struct TArray<struct FSoftClassPath> DeadNPCDressingRefList; // 0x2e0(0x10)

	void UserConstructionScript(); // Function BP_DeadNPC_Spawner.BP_DeadNPC_Spawner_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

