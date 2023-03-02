// BlueprintGeneratedClass BP_WE_Superposition_Experience.BP_WE_Superposition_Experience_C
// Size: 0x2c1 (Inherited: 0x280)
struct ABP_WE_Superposition_Experience_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct TArray<struct UWorldEventSocketComponent*> WorldEventSockets; // 0x290(0x10)
	struct TArray<struct FGameplayTagContainer> SocketDescriptors; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnExperienceEnded; // 0x2b0(0x10)
	bool CanPlayOnInitialise; // 0x2c0(0x01)

	void FindSocketsOutOfRange(struct FVector CentreLocation, float Radius, struct TArray<struct UWorldEventSocketComponent*>& WorldEventSockets, struct TArray<struct UWorldEventSocketComponent*>& Sockets); // Function BP_WE_Superposition_Experience.BP_WE_Superposition_Experience_C.FindSocketsOutOfRange // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetAllSocketsByTag(struct FGameplayTagContainer SocketDescriptor, struct AWorldEventLocationActor*& WorldEventLocator, struct TArray<struct UWorldEventSocketComponent*>& OutWorldEventSockets); // Function BP_WE_Superposition_Experience.BP_WE_Superposition_Experience_C.GetAllSocketsByTag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Uninitialise(); // Function BP_WE_Superposition_Experience.BP_WE_Superposition_Experience_C.Uninitialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialise(); // Function BP_WE_Superposition_Experience.BP_WE_Superposition_Experience_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_Superposition_Experience.BP_WE_Superposition_Experience_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Superposition_Experience(int32_t EntryPoint); // Function BP_WE_Superposition_Experience.BP_WE_Superposition_Experience_C.ExecuteUbergraph_BP_WE_Superposition_Experience // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnExperienceEnded__DelegateSignature(); // Function BP_WE_Superposition_Experience.BP_WE_Superposition_Experience_C.OnExperienceEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

