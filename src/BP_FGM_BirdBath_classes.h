// BlueprintGeneratedClass BP_FGM_BirdBath.BP_FGM_BirdBath_C
// Size: 0x3c0 (Inherited: 0x371)
struct ABP_FGM_BirdBath_C : ABP_Station_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x380(0x08)
	struct UStaticMeshComponent* BirdBath; // 0x388(0x08)
	struct FText ObjectName; // 0x390(0x18)
	struct FString Talk to BirdBath; // 0x3a8(0x10)
	struct AActor* LookAtTarget; // 0x3b8(0x08)

	void ReceiveBeginPlay(); // Function BP_FGM_BirdBath.BP_FGM_BirdBath_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_FGM_BirdBath.BP_FGM_BirdBath_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_1(); // Function BP_FGM_BirdBath.BP_FGM_BirdBath_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function BP_FGM_BirdBath.BP_FGM_BirdBath_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FGM_BirdBath(int32_t EntryPoint); // Function BP_FGM_BirdBath.BP_FGM_BirdBath_C.ExecuteUbergraph_BP_FGM_BirdBath // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

