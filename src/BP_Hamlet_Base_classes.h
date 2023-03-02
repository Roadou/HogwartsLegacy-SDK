// BlueprintGeneratedClass BP_Hamlet_Base.BP_Hamlet_Base_C
// Size: 0x257 (Inherited: 0x248)
struct ABP_Hamlet_Base_C : AActor {
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	bool Turn OFF Intrusion; // 0x250(0x01)
	enum class EDoorState Lock A Door State; // 0x251(0x01)
	enum class ELockDifficulty Lock Level A Difficulty; // 0x252(0x01)
	enum class EDoorState Lock B Door State; // 0x253(0x01)
	enum class ELockDifficulty Lock Level B Difficulty; // 0x254(0x01)
	enum class EDoorState Lock C Door State; // 0x255(0x01)
	enum class ELockDifficulty Lock Level C Difficulty; // 0x256(0x01)

	void Setup Hamlet(struct UChildActorComponent* BP_Door_Template 01, struct UChildActorComponent* BP_Door_Template 02, struct UChildActorComponent* BP_Door_Template 03, bool& Turn OFF Intrusion); // Function BP_Hamlet_Base.BP_Hamlet_Base_C.Setup Hamlet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

