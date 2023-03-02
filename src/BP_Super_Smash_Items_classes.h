// BlueprintGeneratedClass BP_Super_Smash_Items.BP_Super_Smash_Items_C
// Size: 0x308 (Inherited: 0x248)
struct ABP_Super_Smash_Items_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Sphere3; // 0x250(0x08)
	struct USphereComponent* Sphere2; // 0x258(0x08)
	struct USphereComponent* Sphere1; // 0x260(0x08)
	struct USphereComponent* Sphere; // 0x268(0x08)
	struct TArray<struct UChildActorComponent*> AvailableItems; // 0x270(0x10)
	struct TArray<struct ABP_Super_Smash_In_Hand_Base_C*> AvailableItemClasses; // 0x280(0x10)
	struct TArray<struct ABP_Super_Smash_In_Hand_Base_C*> AvailableItemsInLeftArm; // 0x290(0x10)
	enum class E_Super_Smash_ObjectList ItemType; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FSTR_SuperSmashObjectProfile ChosenProfile; // 0x2a8(0x60)

	struct ABP_Super_Smash_In_Hand_Base_C* FN_SpawnSingleItem(struct FVector Spawn Transform Location, struct FRotator Spawn Transform Rotation, struct FVector Spawn Transform Scale); // Function BP_Super_Smash_Items.BP_Super_Smash_Items_C.FN_SpawnSingleItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Setup_Objects(enum class E_Super_Smash_ObjectList ObjectType); // Function BP_Super_Smash_Items.BP_Super_Smash_Items_C.Setup_Objects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConstructItemsInLeftArm(enum class E_Super_Smash_ObjectList ObjectType); // Function BP_Super_Smash_Items.BP_Super_Smash_Items_C.ConstructItemsInLeftArm // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Super_Smash_Items(int32_t EntryPoint); // Function BP_Super_Smash_Items.BP_Super_Smash_Items_C.ExecuteUbergraph_BP_Super_Smash_Items // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

