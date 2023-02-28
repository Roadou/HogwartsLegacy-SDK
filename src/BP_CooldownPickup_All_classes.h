// BlueprintGeneratedClass BP_CooldownPickup_All.BP_CooldownPickup_All_C
// Size: 0x368 (Inherited: 0x308)
struct ABP_CooldownPickup_All_C : ACooldownPickup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UNiagaraComponent* VFX_NS_CooldownPickup_All; // 0x310(0x08)
	struct USphereComponent* Sphere; // 0x318(0x08)
	struct UCapsuleComponent* Capsule; // 0x320(0x08)
	struct UAkComponent* NewVar_1; // 0x328(0x08)
	enum class EEnvironment Environment; // 0x330(0x01)
	bool AutoSelectLoot; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct FMulticastInlineDelegate onBagEmpty; // 0x338(0x10)
	bool BouncePlayed; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct AActor* PickedupActor; // 0x350(0x08)
	float Speed; // 0x358(0x04)
	float Acceleration; // 0x35c(0x04)
	struct AActor* PlayerOverlapping; // 0x360(0x08)

	void UserConstructionScript(); // Function BP_CooldownPickup_All.BP_CooldownPickup_All_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_CooldownPickup_All_Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_CooldownPickup_All.BP_CooldownPickup_All_C.BndEvt__BP_CooldownPickup_All_Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_CooldownPickup_All.BP_CooldownPickup_All_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_CooldownPickup_Red_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_CooldownPickup_All.BP_CooldownPickup_All_C.BndEvt__BP_CooldownPickup_Red_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ShowNonCinematicElements(struct UObject* Caller); // Function BP_CooldownPickup_All.BP_CooldownPickup_All_C.ShowNonCinematicElements // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideNonCinematicElements(struct UObject* Caller); // Function BP_CooldownPickup_All.BP_CooldownPickup_All_C.HideNonCinematicElements // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_CooldownPickup_All_Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_CooldownPickup_All.BP_CooldownPickup_All_C.BndEvt__BP_CooldownPickup_All_Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void FinisherCast(struct UObject* Caller); // Function BP_CooldownPickup_All.BP_CooldownPickup_All_C.FinisherCast // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CooldownPickup_All(int32_t EntryPoint); // Function BP_CooldownPickup_All.BP_CooldownPickup_All_C.ExecuteUbergraph_BP_CooldownPickup_All // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void onBagEmpty__DelegateSignature(); // Function BP_CooldownPickup_All.BP_CooldownPickup_All_C.onBagEmpty__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

