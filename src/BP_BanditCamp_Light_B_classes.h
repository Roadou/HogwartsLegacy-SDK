// BlueprintGeneratedClass BP_BanditCamp_Light_B.BP_BanditCamp_Light_B_C
// Size: 0x422 (Inherited: 0x248)
struct ABP_BanditCamp_Light_B_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	bool Has Save Data; // 0x258(0x01)
	enum class E_AVA_BanditCamp_Types Bandit Camp Types; // 0x259(0x01)
	char pad_25A[0x6]; // 0x25a(0x06)
	struct FString Bandit Camp Beacon Name; // 0x260(0x10)
	struct FString Bandit Camp Light Identity; // 0x270(0x10)
	bool Firewood Off; // 0x280(0x01)
	bool Campfire Off; // 0x281(0x01)
	bool TreeStump Off; // 0x282(0x01)
	bool Barrel Off; // 0x283(0x01)
	bool Barrel Off_2; // 0x284(0x01)
	bool Barrel Off_3; // 0x285(0x01)
	bool Bench_A Off; // 0x286(0x01)
	bool LeanTo_A Off; // 0x287(0x01)
	bool Cart_A Off; // 0x288(0x01)
	bool Tent_A Off; // 0x289(0x01)
	bool Tent_Smoke_Off; // 0x28a(0x01)
	bool Bag_0_Off; // 0x28b(0x01)
	bool Bag_1_Off; // 0x28c(0x01)
	bool Tent Flap Off; // 0x28d(0x01)
	bool Tent Planks Off; // 0x28e(0x01)
	bool Stations Off; // 0x28f(0x01)
	bool Turn On Beacon Debug; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	int32_t Activation Range; // 0x294(0x04)
	struct AEncounterLocationCreator* Instanced AI Creator; // 0x298(0x08)
	struct FTransform Station Patrol 01; // 0x2a0(0x30)
	struct FTransform Station Patrol 02; // 0x2d0(0x30)
	struct FTransform Station Patrol 03; // 0x300(0x30)
	struct FTransform Station Patrol 04; // 0x330(0x30)
	struct FTransform Station Patrol 05; // 0x360(0x30)
	struct FTransform Station Patrol 06; // 0x390(0x30)
	struct FTransform Station Patrol 07; // 0x3c0(0x30)
	struct FTransform Main Tent; // 0x3f0(0x30)
	bool Turn Off All Objects; // 0x420(0x01)
	bool Marker OFF (DO NOT SET); // 0x421(0x01)

	void Overland Chest Picker(bool Condition, struct UChildActorComponent* Chest); // Function BP_BanditCamp_Light_B.BP_BanditCamp_Light_B_C.Overland Chest Picker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_BanditCamp_Light_B.BP_BanditCamp_Light_B_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Create the AI Encounter Creator(); // Function BP_BanditCamp_Light_B.BP_BanditCamp_Light_B_C.Create the AI Encounter Creator // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Delete the AI Encounter Creator(); // Function BP_BanditCamp_Light_B.BP_BanditCamp_Light_B_C.Delete the AI Encounter Creator // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destroy Bandit Camp(); // Function BP_BanditCamp_Light_B.BP_BanditCamp_Light_B_C.Destroy Bandit Camp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BanditCamp_Light_B.BP_BanditCamp_Light_B_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CreateDOVSpawner(); // Function BP_BanditCamp_Light_B.BP_BanditCamp_Light_B_C.CreateDOVSpawner // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BanditCamp_Light_B(int32_t EntryPoint); // Function BP_BanditCamp_Light_B.BP_BanditCamp_Light_B_C.ExecuteUbergraph_BP_BanditCamp_Light_B // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

