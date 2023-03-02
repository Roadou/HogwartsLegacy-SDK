// BlueprintGeneratedClass BP_WE_HungryForRubbish_main.BP_WE_HungryForRubbish_main_C
// Size: 0x2b0 (Inherited: 0x280)
struct ABP_WE_HungryForRubbish_main_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* StudentSpawnMarker; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct ABP_Station_C* Station ref; // 0x298(0x08)
	struct UScheduledEntity* StudentHobo ref; // 0x2a0(0x08)
	struct ABP_WE_HungryForRubbish_Bin_C* bin; // 0x2a8(0x08)

	void Put Hobo in Station(struct UScheduledEntity* Hobo ref, struct AStation* Station ref, struct FString Station Action, bool Teleport to Station?); // Function BP_WE_HungryForRubbish_main.BP_WE_HungryForRubbish_main_C.Put Hobo in Station // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spawn Student Hobo(enum class HouseIds InHouse, enum class EGenderEnum InGender, struct UScheduledEntity*& Output_Get); // Function BP_WE_HungryForRubbish_main.BP_WE_HungryForRubbish_main_C.Spawn Student Hobo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void [WE_HungryForRubbish] Trash Object Drop(bool Throw?); // Function BP_WE_HungryForRubbish_main.BP_WE_HungryForRubbish_main_C.[WE_HungryForRubbish] Trash Object Drop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_HungryForRubbish_main.BP_WE_HungryForRubbish_main_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StationUseStart(); // Function BP_WE_HungryForRubbish_main.BP_WE_HungryForRubbish_main_C.StationUseStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StationUseFinish(); // Function BP_WE_HungryForRubbish_main.BP_WE_HungryForRubbish_main_C.StationUseFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void [WE_HungryForRubbish] Trash Object Spawn(struct USkeletalMeshComponent* Attach ref); // Function BP_WE_HungryForRubbish_main.BP_WE_HungryForRubbish_main_C.[WE_HungryForRubbish] Trash Object Spawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_HungryForRubbish_main(int32_t EntryPoint); // Function BP_WE_HungryForRubbish_main.BP_WE_HungryForRubbish_main_C.ExecuteUbergraph_BP_WE_HungryForRubbish_main // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

