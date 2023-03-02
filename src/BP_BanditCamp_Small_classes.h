// BlueprintGeneratedClass BP_BanditCamp_Small.BP_BanditCamp_Small_C
// Size: 0x3c2 (Inherited: 0x248)
struct ABP_BanditCamp_Small_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* Empty; // 0x250(0x08)
	struct USceneComponent* Scene; // 0x258(0x08)
	bool Has Save Data; // 0x260(0x01)
	enum class E_AVA_BanditCamp_Small_Types Bandit Camp Types; // 0x261(0x01)
	char pad_262[0x6]; // 0x262(0x06)
	struct FString Bandit Camp Beacon Name; // 0x268(0x10)
	struct FString Bandit Camp Light Identity; // 0x278(0x10)
	bool Campfire Off; // 0x288(0x01)
	bool Tent_A Off; // 0x289(0x01)
	bool Tent Planks Off; // 0x28a(0x01)
	bool Tent Flap Off; // 0x28b(0x01)
	bool Stations Off; // 0x28c(0x01)
	bool Turn On Beacon Debug; // 0x28d(0x01)
	char pad_28E[0x2]; // 0x28e(0x02)
	int32_t Activation Range; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct AEncounterLocationCreator* Instanced AI Creator; // 0x298(0x08)
	struct FTransform Station Patrol 01; // 0x2a0(0x30)
	struct FTransform Station Patrol 02; // 0x2d0(0x30)
	struct FTransform Station Patrol 03; // 0x300(0x30)
	struct FTransform Station Patrol 04; // 0x330(0x30)
	struct FTransform Station Patrol 05; // 0x360(0x30)
	struct FTransform Station Patrol 06; // 0x390(0x30)
	bool Turn Off All Objects; // 0x3c0(0x01)
	bool Marker OFF (DO NOT SET); // 0x3c1(0x01)

	void Overland Chest Picker(bool Condition, struct UChildActorComponent* Chest); // Function BP_BanditCamp_Small.BP_BanditCamp_Small_C.Overland Chest Picker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_BanditCamp_Small.BP_BanditCamp_Small_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Delete the AI Encounter Creator(); // Function BP_BanditCamp_Small.BP_BanditCamp_Small_C.Delete the AI Encounter Creator // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destroy Bandit Camp(); // Function BP_BanditCamp_Small.BP_BanditCamp_Small_C.Destroy Bandit Camp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Create the AI Encounter Creator(); // Function BP_BanditCamp_Small.BP_BanditCamp_Small_C.Create the AI Encounter Creator // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BanditCamp_Small.BP_BanditCamp_Small_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CreateDOVSpawner(); // Function BP_BanditCamp_Small.BP_BanditCamp_Small_C.CreateDOVSpawner // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BanditCamp_Small(int32_t EntryPoint); // Function BP_BanditCamp_Small.BP_BanditCamp_Small_C.ExecuteUbergraph_BP_BanditCamp_Small // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

