// BlueprintGeneratedClass BP_BiomeTunnelDoor.BP_BiomeTunnelDoor_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_BiomeTunnelDoor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct FName Zone; // 0x258(0x08)
	struct TSoftObjectPtr<USceneRig> DoorOpenSR_SoftRef; // 0x260(0x28)

	void OnLoaded_A4511CA944B3415EC311BC8F855C3AC9(struct UObject* Loaded); // Function BP_BiomeTunnelDoor.BP_BiomeTunnelDoor_C.OnLoaded_A4511CA944B3415EC311BC8F855C3AC9 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BiomeTunnelDoor.BP_BiomeTunnelDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OpenDoor(struct FName ZoneName); // Function BP_BiomeTunnelDoor.BP_BiomeTunnelDoor_C.OpenDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BiomeTunnelDoor(int32_t EntryPoint); // Function BP_BiomeTunnelDoor.BP_BiomeTunnelDoor_C.ExecuteUbergraph_BP_BiomeTunnelDoor // (Final|UbergraphFunction) // @ game+0x38a7480
};

