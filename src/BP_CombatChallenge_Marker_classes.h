// BlueprintGeneratedClass BP_CombatChallenge_Marker.BP_CombatChallenge_Marker_C
// Size: 0x330 (Inherited: 0x304)
struct ABP_CombatChallenge_Marker_C : ANone {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x310(0x08)
	enum class E_AVA_CombatChallengeType Combat Challenge Type; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct FString New DBName; // 0x320(0x10)

	void UserConstructionScript(); // Function BP_CombatChallenge_Marker.BP_CombatChallenge_Marker_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_CombatChallenge_Marker.BP_CombatChallenge_Marker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CombatChallenge_Marker(int32_t EntryPoint); // Function BP_CombatChallenge_Marker.BP_CombatChallenge_Marker_C.ExecuteUbergraph_BP_CombatChallenge_Marker // (Final|UbergraphFunction) // @ game+0x38a7480
};

