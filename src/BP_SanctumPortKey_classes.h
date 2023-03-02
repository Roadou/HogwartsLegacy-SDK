// BlueprintGeneratedClass BP_SanctumPortKey.BP_SanctumPortKey_C
// Size: 0x2c0 (Inherited: 0x248)
struct ABP_SanctumPortKey_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x250(0x08)
	struct UStaticMeshComponent* Sphere; // 0x258(0x08)
	struct UObjectStateComponent* ObjectState; // 0x260(0x08)
	struct ABP_SanctumPortKey_C* Target; // 0x268(0x08)
	struct FVector Warp Target; // 0x270(0x0c)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TArray<enum class EObjectTypeQuery> Type; // 0x280(0x10)
	struct FMulticastInlineDelegate PlayerWarped; // 0x290(0x10)
	struct TArray<struct AActor*> Ignore; // 0x2a0(0x10)
	bool FoundSafeSpot; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FVector TestLoc; // 0x2b4(0x0c)

	void UserConstructionScript(); // Function BP_SanctumPortKey.BP_SanctumPortKey_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SanctumPortKey.BP_SanctumPortKey_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_SanctumPortKey.BP_SanctumPortKey_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_SanctumPortKey.BP_SanctumPortKey_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void CheckUpright(); // Function BP_SanctumPortKey.BP_SanctumPortKey_C.CheckUpright // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SanctumPortKey(int32_t EntryPoint); // Function BP_SanctumPortKey.BP_SanctumPortKey_C.ExecuteUbergraph_BP_SanctumPortKey // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PlayerWarped__DelegateSignature(struct AActor* Who); // Function BP_SanctumPortKey.BP_SanctumPortKey_C.PlayerWarped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

