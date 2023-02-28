// BlueprintGeneratedClass UI_BP_FastTravelLocation.UI_BP_FastTravelLocation_C
// Size: 0x391 (Inherited: 0x378)
struct AUI_BP_FastTravelLocation_C : AFastTravelLocation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UChildActorComponent* ChildSceneRigActor; // 0x380(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x388(0x08)
	bool WaitEnabled; // 0x390(0x01)

	struct FName GetUniqueBeaconId(); // Function UI_BP_FastTravelLocation.UI_BP_FastTravelLocation_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitScreen(); // Function UI_BP_FastTravelLocation.UI_BP_FastTravelLocation_C.ExitScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function UI_BP_FastTravelLocation.UI_BP_FastTravelLocation_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceTriggerUnlock(); // Function UI_BP_FastTravelLocation.UI_BP_FastTravelLocation_C.ForceTriggerUnlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function UI_BP_FastTravelLocation.UI_BP_FastTravelLocation_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function UI_BP_FastTravelLocation.UI_BP_FastTravelLocation_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FastTravelLocation(int32_t EntryPoint); // Function UI_BP_FastTravelLocation.UI_BP_FastTravelLocation_C.ExecuteUbergraph_UI_BP_FastTravelLocation // (Final|UbergraphFunction) // @ game+0x38a7480
};

