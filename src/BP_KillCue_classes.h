// BlueprintGeneratedClass BP_KillCue.BP_KillCue_C
// Size: 0x270 (Inherited: 0x248)
struct ABP_KillCue_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct AActor* KillTarget; // 0x258(0x08)
	float Delay; // 0x260(0x04)
	bool DestroyTarget; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UBP_EnemyAI_C* BP Enemy AI; // 0x268(0x08)

	void ReceiveBeginPlay(); // Function BP_KillCue.BP_KillCue_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_KillCue(int32_t EntryPoint); // Function BP_KillCue.BP_KillCue_C.ExecuteUbergraph_BP_KillCue // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

