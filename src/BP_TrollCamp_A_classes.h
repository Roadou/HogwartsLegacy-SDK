// BlueprintGeneratedClass BP_TrollCamp_A.BP_TrollCamp_A_C
// Size: 0x3c1 (Inherited: 0x248)
struct ABP_TrollCamp_A_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* BP_BanditCamp_Marker; // 0x250(0x08)
	struct UChildActorComponent* BP_TrollHut1; // 0x258(0x08)
	struct UChildActorComponent* BP_TrollHut_Fish; // 0x260(0x08)
	struct UChildActorComponent* Empty; // 0x268(0x08)
	struct UChildActorComponent* BP_Troll_Camps_TrollBed; // 0x270(0x08)
	struct UChildActorComponent* BP_Troll_Camp_FishPile; // 0x278(0x08)
	struct UChildActorComponent* BP_Troll_Camp_FishPile3; // 0x280(0x08)
	struct UChildActorComponent* BP_Troll_Camp_Storage; // 0x288(0x08)
	struct UChildActorComponent* BP_Torch; // 0x290(0x08)
	struct UChildActorComponent* BP_Troll_Camp_FishPile2; // 0x298(0x08)
	struct UChildActorComponent* BP_Lean-to; // 0x2a0(0x08)
	struct UChildActorComponent* BP_Troll_Camp_Teepee; // 0x2a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b0(0x08)
	struct AEncounterLocationCreator* Instanced AI Creator; // 0x2b8(0x08)
	bool Turn OFF Marker; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct TArray<struct UChildActorComponent*> Child Actor List; // 0x2c8(0x10)
	struct TArray<bool> Disabled List; // 0x2d8(0x10)
	bool Troll Hut Off; // 0x2e8(0x01)
	bool Troll Hut Fish Off; // 0x2e9(0x01)
	bool Troll Fish Pile 2 Off; // 0x2ea(0x01)
	bool Troll Teepee Off; // 0x2eb(0x01)
	bool Troll Bed Off; // 0x2ec(0x01)
	bool Troll Lean-to Off; // 0x2ed(0x01)
	bool Campfire Off; // 0x2ee(0x01)
	bool Camp Storage Off; // 0x2ef(0x01)
	bool Troll Fish Pile 1 Off; // 0x2f0(0x01)
	bool Troll Fish Pile 3 Off; // 0x2f1(0x01)
	char pad_2F2[0xe]; // 0x2f2(0x0e)
	struct FTransform Station Patrol 01; // 0x300(0x30)
	struct FTransform Station Patrol 02; // 0x330(0x30)
	struct FTransform Station Patrol 03; // 0x360(0x30)
	struct FTransform Station Patrol 04; // 0x390(0x30)
	bool Stations Off; // 0x3c0(0x01)

	void UserConstructionScript(); // Function BP_TrollCamp_A.BP_TrollCamp_A_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Delete the AI Encounter Creator(); // Function BP_TrollCamp_A.BP_TrollCamp_A_C.Delete the AI Encounter Creator // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Create the AI Encounter Creator(); // Function BP_TrollCamp_A.BP_TrollCamp_A_C.Create the AI Encounter Creator // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destroy Bandit Camp(); // Function BP_TrollCamp_A.BP_TrollCamp_A_C.Destroy Bandit Camp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TrollCamp_A(int32_t EntryPoint); // Function BP_TrollCamp_A.BP_TrollCamp_A_C.ExecuteUbergraph_BP_TrollCamp_A // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

