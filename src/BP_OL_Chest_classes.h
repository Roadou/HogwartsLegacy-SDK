// BlueprintGeneratedClass BP_OL_Chest.BP_OL_Chest_C
// Size: 0x338 (Inherited: 0x248)
struct ABP_OL_Chest_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* Parent; // 0x250(0x08)
	struct UChildActorComponent* BP_OL_Chest_Marker; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	enum class E_OL_ChestType Chest Type; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	int32_t Prop Index; // 0x26c(0x04)
	enum class E_OL_ChestCategory Chest Category; // 0x270(0x01)
	enum class E_OL_ChestCoverType Chest Cover Type; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct TMap<enum class E_OL_ChestType, struct TSoftClassPtr<UObject>> Map to Container; // 0x278(0x50)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct FTransform Zero; // 0x2d0(0x30)
	struct FTransform Offset; // 0x300(0x30)
	struct FName ChestOwner; // 0x330(0x08)

	void UserConstructionScript(); // Function BP_OL_Chest.BP_OL_Chest_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OL_Chest.BP_OL_Chest_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_Chest(int32_t EntryPoint); // Function BP_OL_Chest.BP_OL_Chest_C.ExecuteUbergraph_BP_OL_Chest // (Final|UbergraphFunction) // @ game+0x38a7480
};

