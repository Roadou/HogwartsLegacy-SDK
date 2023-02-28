// BlueprintGeneratedClass BP_MothTarget.BP_MothTarget_C
// Size: 0x2aa (Inherited: 0x248)
struct ABP_MothTarget_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Sphere1; // 0x250(0x08)
	struct UStaticMeshComponent* Sphere; // 0x258(0x08)
	bool Occupied; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct FMulticastInlineDelegate IsOccupied; // 0x268(0x10)
	struct FMulticastInlineDelegate IsVacant; // 0x278(0x10)
	struct TArray<struct AActor*> Targets; // 0x288(0x10)
	struct ABP_Moth_C* Moth; // 0x298(0x08)
	bool MothAttached; // 0x2a0(0x01)
	bool HideAttachedMoth; // 0x2a1(0x01)
	bool ACTIVE; // 0x2a2(0x01)
	bool PlayLandingEvent; // 0x2a3(0x01)
	float MothScale; // 0x2a4(0x04)
	bool ForceHover; // 0x2a8(0x01)
	bool CanDetach; // 0x2a9(0x01)

	void On(struct ABP_Moth_C* Moth); // Function BP_MothTarget.BP_MothTarget_C.On // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Off(); // Function BP_MothTarget.BP_MothTarget_C.Off // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Check(); // Function BP_MothTarget.BP_MothTarget_C.Check // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyMoth(); // Function BP_MothTarget.BP_MothTarget_C.DestroyMoth // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LandingEvent(); // Function BP_MothTarget.BP_MothTarget_C.LandingEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_MothTarget.BP_MothTarget_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MothTarget(int32_t EntryPoint); // Function BP_MothTarget.BP_MothTarget_C.ExecuteUbergraph_BP_MothTarget // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void IsVacant__DelegateSignature(); // Function BP_MothTarget.BP_MothTarget_C.IsVacant__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsOccupied__DelegateSignature(); // Function BP_MothTarget.BP_MothTarget_C.IsOccupied__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

