// BlueprintGeneratedClass BP_HerbologyStation_Classroom.BP_HerbologyStation_Classroom_C
// Size: 0x338 (Inherited: 0x2bc)
struct ABP_HerbologyStation_Classroom_C : ABP_SANC_HerbologyStation_Base_C {
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticMesh28; // 0x2c8(0x08)
	struct UStaticMeshComponent* StaticMesh21; // 0x2d0(0x08)
	struct UStaticMeshComponent* StaticMesh18; // 0x2d8(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x2e0(0x08)
	struct UStaticMeshComponent* StaticMesh31; // 0x2e8(0x08)
	struct UStaticMeshComponent* StaticMesh26; // 0x2f0(0x08)
	struct UStaticMeshComponent* StaticMesh37; // 0x2f8(0x08)
	struct UConjurationBoundsComponent* ConjurationBounds; // 0x300(0x08)
	struct UStaticMeshComponent* SM_Sanc_Secateurs; // 0x308(0x08)
	struct UStaticMeshComponent* SM_Sanc_HandTrowel; // 0x310(0x08)
	struct UStaticMeshComponent* SM_Sanc_HandShears; // 0x318(0x08)
	struct UChildActorComponent* ChildActor; // 0x320(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x328(0x08)
	struct FName BeaconID; // 0x330(0x08)

	struct FName GetUniqueBeaconId(); // Function BP_HerbologyStation_Classroom.BP_HerbologyStation_Classroom_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HerbologyStation_Classroom.BP_HerbologyStation_Classroom_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function BP_HerbologyStation_Classroom.BP_HerbologyStation_Classroom_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCurtainRaised_Event_1(); // Function BP_HerbologyStation_Classroom.BP_HerbologyStation_Classroom_C.OnCurtainRaised_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RegisterZZHTable(bool Register); // Function BP_HerbologyStation_Classroom.BP_HerbologyStation_Classroom_C.RegisterZZHTable // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HerbologyStation_Classroom(int32_t EntryPoint); // Function BP_HerbologyStation_Classroom.BP_HerbologyStation_Classroom_C.ExecuteUbergraph_BP_HerbologyStation_Classroom // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

