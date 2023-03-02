// BlueprintGeneratedClass BP_SpiderCamp_A.BP_SpiderCamp_A_C
// Size: 0x274 (Inherited: 0x248)
struct ABP_SpiderCamp_A_C : AActor {
	struct UChildActorComponent* BP_BanditCamp_Marker; // 0x248(0x08)
	struct UChildActorComponent* BP_SpiderEggs; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct AEncounterLocationCreator* Instanced AI Creator; // 0x260(0x08)
	bool Turn OFF Marker; // 0x268(0x01)
	enum class E_AVA_OverlandSpiderTypes Spider Type; // 0x269(0x01)
	bool Turn OFF Additiona Eggs; // 0x26a(0x01)
	char pad_26B[0x1]; // 0x26b(0x01)
	struct FVector2D M Spider Spawn Range; // 0x26c(0x08)

	void UserConstructionScript(); // Function BP_SpiderCamp_A.BP_SpiderCamp_A_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

