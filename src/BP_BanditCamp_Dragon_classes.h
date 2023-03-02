// BlueprintGeneratedClass BP_BanditCamp_Dragon.BP_BanditCamp_Dragon_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_BanditCamp_Dragon_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* BP_BanditCamp_Marker; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct AEncounterLocationCreator* Instanced AI Creator; // 0x260(0x08)

	void Delete the AI Encounter Creator(); // Function BP_BanditCamp_Dragon.BP_BanditCamp_Dragon_C.Delete the AI Encounter Creator // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Create the AI Encounter Creator(); // Function BP_BanditCamp_Dragon.BP_BanditCamp_Dragon_C.Create the AI Encounter Creator // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destroy Bandit Camp(); // Function BP_BanditCamp_Dragon.BP_BanditCamp_Dragon_C.Destroy Bandit Camp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BanditCamp_Dragon(int32_t EntryPoint); // Function BP_BanditCamp_Dragon.BP_BanditCamp_Dragon_C.ExecuteUbergraph_BP_BanditCamp_Dragon // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

