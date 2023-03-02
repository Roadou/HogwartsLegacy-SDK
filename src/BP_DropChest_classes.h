// BlueprintGeneratedClass BP_DropChest.BP_DropChest_C
// Size: 0x2b4 (Inherited: 0x248)
struct ABP_DropChest_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	struct UChildActorComponent* ChildActor; // 0x258(0x08)
	float DRop_Scale_34E412B54C79616A4858A391604AEF1A; // 0x260(0x04)
	float DRop_XRotation_34E412B54C79616A4858A391604AEF1A; // 0x264(0x04)
	float DRop_YRotation_34E412B54C79616A4858A391604AEF1A; // 0x268(0x04)
	float DRop_ZTranslation_34E412B54C79616A4858A391604AEF1A; // 0x26c(0x04)
	enum class ETimelineDirection DRop__Direction_34E412B54C79616A4858A391604AEF1A; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct UTimelineComponent* Drop; // 0x278(0x08)
	int32_t Counter; // 0x280(0x04)
	int32_t #ofSwitches; // 0x284(0x04)
	float Delay; // 0x288(0x04)
	float DropScale; // 0x28c(0x04)
	struct FString lootGroup; // 0x290(0x10)
	float SecondsToPreStream; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct ABP_OL_Chest_VP_Marker_C* Beacon; // 0x2a8(0x08)
	float PlayRate; // 0x2b0(0x04)

	void UserConstructionScript(); // Function BP_DropChest.BP_DropChest_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DRop__FinishedFunc(); // Function BP_DropChest.BP_DropChest_C.DRop__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void DRop__UpdateFunc(); // Function BP_DropChest.BP_DropChest_C.DRop__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DropChest.BP_DropChest_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_DropChest.BP_DropChest_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_DropChest.BP_DropChest_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DropChest(int32_t EntryPoint); // Function BP_DropChest.BP_DropChest_C.ExecuteUbergraph_BP_DropChest // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

