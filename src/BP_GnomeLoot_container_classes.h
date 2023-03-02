// BlueprintGeneratedClass BP_GnomeLoot_container.BP_GnomeLoot_container_C
// Size: 0x3e0 (Inherited: 0x3c5)
struct ABP_GnomeLoot_container_C : ABP_S_BagContainer_C {
	char pad_3C5[0x3]; // 0x3c5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	float Timeline_0_ScaleIn_F8ECEEE44BD5FAF6524A6E841F2AB32D; // 0x3d0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_F8ECEEE44BD5FAF6524A6E841F2AB32D; // 0x3d4(0x01)
	char pad_3D5[0x3]; // 0x3d5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x3d8(0x08)

	void EmptyLoot?(bool& Result); // Function BP_GnomeLoot_container.BP_GnomeLoot_container_C.EmptyLoot? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_GnomeLoot_container.BP_GnomeLoot_container_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_GnomeLoot_container.BP_GnomeLoot_container_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GnomeLoot_container.BP_GnomeLoot_container_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_GnomeLoot_container.BP_GnomeLoot_container_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnInventoryUpdated_Event_1(struct UObject* i_caller); // Function BP_GnomeLoot_container.BP_GnomeLoot_container_C.OnInventoryUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GnomeLoot_container(int32_t EntryPoint); // Function BP_GnomeLoot_container.BP_GnomeLoot_container_C.ExecuteUbergraph_BP_GnomeLoot_container // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

