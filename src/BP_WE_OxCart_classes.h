// BlueprintGeneratedClass BP_WE_OxCart.BP_WE_OxCart_C
// Size: 0x2c8 (Inherited: 0x280)
struct ABP_WE_OxCart_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USphereComponent* Sphere; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct UWorldEventManager* WorldEventManager; // 0x298(0x08)
	struct ABP_Station_C* Player Station; // 0x2a0(0x08)
	struct TArray<struct ABP_Station_C*> Stations2Join; // 0x2a8(0x10)
	struct TArray<struct UScheduledEntity*> HoboActors; // 0x2b8(0x10)

	void AddHoboToStation(struct AStation* Station); // Function BP_WE_OxCart.BP_WE_OxCart_C.AddHoboToStation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Is Station Valid(struct AStation* Station, bool& Valid); // Function BP_WE_OxCart.BP_WE_OxCart_C.Is Station Valid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Start Event(struct TArray<struct ABP_Station_C*>& Station Array); // Function BP_WE_OxCart.BP_WE_OxCart_C.Start Event // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_OxCart.BP_WE_OxCart_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StationConnectionsAdded(struct UObject* Caller); // Function BP_WE_OxCart.BP_WE_OxCart_C.StationConnectionsAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_OxCart(int32_t EntryPoint); // Function BP_WE_OxCart.BP_WE_OxCart_C.ExecuteUbergraph_BP_WE_OxCart // (Final|UbergraphFunction) // @ game+0x38a7480
};

