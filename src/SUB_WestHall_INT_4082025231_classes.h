// BlueprintGeneratedClass SUB_WestHall_INT_4082025231.SUB_WestHall_INT_C
// Size: 0x280 (Inherited: 0x250)
struct ASUB_WestHall_INT_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	bool WET_ObjectPhysics; // 0x258(0x01)
	enum class ECollisionChannel Channel_PhysicsBody; // 0x259(0x01)
	enum class ECollisionResponse CollisionResponse; // 0x25a(0x01)
	enum class EComponentMobility ObjectMobility; // 0x25b(0x01)
	struct FName WEE name; // 0x25c(0x08)
	char pad_264[0x4]; // 0x264(0x04)
	struct FHermesBPDelegateHandle WEE event handler; // 0x268(0x10)
	struct ABP_Door_Template_C* BP_Door_TransfigOffice_ExecuteUbergraph_SUB_WestHall_INT_RefProperty; // 0x278(0x08)

	void ReceiveBeginPlay(); // Function SUB_WestHall_INT_4082025231.SUB_WestHall_INT_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ZZT_01_Updated(struct UObject* Caller, struct FName& String); // Function SUB_WestHall_INT_4082025231.SUB_WestHall_INT_C.ZZT_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WEE_01_Updated(struct UObject* Caller, struct FName& String); // Function SUB_WestHall_INT_4082025231.SUB_WestHall_INT_C.WEE_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_WestHall_INT(int32_t EntryPoint); // Function SUB_WestHall_INT_4082025231.SUB_WestHall_INT_C.ExecuteUbergraph_SUB_WestHall_INT // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

