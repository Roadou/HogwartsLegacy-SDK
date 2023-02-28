// BlueprintGeneratedClass BP_Hog_LibraryDrawer.BP_Hog_LibraryDrawer_C
// Size: 0x31c (Inherited: 0x2b0)
struct ABP_Hog_LibraryDrawer_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USceneComponent* InteractPoint; // 0x2b8(0x08)
	struct UOwnershipComponent* Ownership; // 0x2c0(0x08)
	struct UStaticMeshComponent* Drawer; // 0x2c8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2d0(0x08)
	struct USceneComponent* Scene; // 0x2d8(0x08)
	struct ULootDropComponent* LootDrop; // 0x2e0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2e8(0x08)
	float Timeline_Doors_Drawer_F05F69DA420C9EAE870C61BE5FF05B2C; // 0x2f0(0x04)
	enum class ETimelineDirection Timeline_Doors__Direction_F05F69DA420C9EAE870C61BE5FF05B2C; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UTimelineComponent* Timeline_Doors; // 0x2f8(0x08)
	bool Searching; // 0x300(0x01)
	bool Open; // 0x301(0x01)
	char pad_302[0x2]; // 0x302(0x02)
	struct FVector DrawerInitialPosition; // 0x304(0x0c)
	bool Contains Key; // 0x310(0x01)
	bool KeyFound; // 0x311(0x01)
	bool HasBeenSearched; // 0x312(0x01)
	char pad_313[0x1]; // 0x313(0x01)
	struct FName Beacon ID; // 0x314(0x08)

	struct FName GetUniqueBeaconId(); // Function BP_Hog_LibraryDrawer.BP_Hog_LibraryDrawer_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_Doors__FinishedFunc(); // Function BP_Hog_LibraryDrawer.BP_Hog_LibraryDrawer_C.Timeline_Doors__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_Doors__UpdateFunc(); // Function BP_Hog_LibraryDrawer.BP_Hog_LibraryDrawer_C.Timeline_Doors__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Hog_LibraryDrawer.BP_Hog_LibraryDrawer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_Hog_LibraryDrawer.BP_Hog_LibraryDrawer_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenDrawer(); // Function BP_Hog_LibraryDrawer.BP_Hog_LibraryDrawer_C.OpenDrawer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseDrawer(); // Function BP_Hog_LibraryDrawer.BP_Hog_LibraryDrawer_C.CloseDrawer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsKeyFound(); // Function BP_Hog_LibraryDrawer.BP_Hog_LibraryDrawer_C.IsKeyFound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function BP_Hog_LibraryDrawer.BP_Hog_LibraryDrawer_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Hog_LibraryDrawer(int32_t EntryPoint); // Function BP_Hog_LibraryDrawer.BP_Hog_LibraryDrawer_C.ExecuteUbergraph_BP_Hog_LibraryDrawer // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

