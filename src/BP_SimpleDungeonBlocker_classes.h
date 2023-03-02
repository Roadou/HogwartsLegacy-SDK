// BlueprintGeneratedClass BP_SimpleDungeonBlocker.BP_SimpleDungeonBlocker_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_SimpleDungeonBlocker_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* ChildActor; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	bool OpenAfterMission; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	struct FName Mission ID; // 0x264(0x08)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FString MissionNicknameStep; // 0x270(0x10)
	struct AActor* BlockerBP; // 0x280(0x08)

	void UserConstructionScript(); // Function BP_SimpleDungeonBlocker.BP_SimpleDungeonBlocker_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SimpleDungeonBlocker.BP_SimpleDungeonBlocker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void EVT_01_Updated(struct UObject* Caller, struct FName& String); // Function BP_SimpleDungeonBlocker.BP_SimpleDungeonBlocker_C.EVT_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SimpleDungeonBlocker(int32_t EntryPoint); // Function BP_SimpleDungeonBlocker.BP_SimpleDungeonBlocker_C.ExecuteUbergraph_BP_SimpleDungeonBlocker // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

