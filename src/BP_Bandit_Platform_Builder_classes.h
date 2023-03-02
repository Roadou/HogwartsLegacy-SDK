// BlueprintGeneratedClass BP_Bandit_Platform_Builder.BP_Bandit_Platform_Builder_C
// Size: 0x2a8 (Inherited: 0x248)
struct ABP_Bandit_Platform_Builder_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	enum class E_BanditType CampType; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	int32_t StackCount; // 0x25c(0x04)
	int32_t SegmentCount; // 0x260(0x04)
	bool AddFloor; // 0x264(0x01)
	bool AddRoof; // 0x265(0x01)
	struct FSTR_Bandit_Platform_WallDirection WallSetup; // 0x266(0x0c)
	char pad_272[0x6]; // 0x272(0x06)
	struct TArray<struct FTransform> DeleteSection; // 0x278(0x10)
	float Noise; // 0x288(0x04)
	struct FRandomStream RandomSeed; // 0x28c(0x08)
	char pad_294[0x4]; // 0x294(0x04)
	struct TArray<enum class EObjectTypeQuery> Type; // 0x298(0x10)

	void StackPlacement(int32_t StackIndex, float VerticalDis, int32_t SegmentIndex, float HorizontalDIS, int32_t ROTIndex, float ROT_Offset, struct TArray<struct AActor*>& BP_List, bool LOCNoise, bool ROTNoise, struct UChildActorComponent*& Child); // Function BP_Bandit_Platform_Builder.BP_Bandit_Platform_Builder_C.StackPlacement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Bandit_Platform_Builder.BP_Bandit_Platform_Builder_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Bandit_Platform_Builder.BP_Bandit_Platform_Builder_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Bandit_Platform_Builder(int32_t EntryPoint); // Function BP_Bandit_Platform_Builder.BP_Bandit_Platform_Builder_C.ExecuteUbergraph_BP_Bandit_Platform_Builder // (Final|UbergraphFunction) // @ game+0x38a7480
};

