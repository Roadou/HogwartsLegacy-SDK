// BlueprintGeneratedClass BP_M_Door_Metal.BP_M_Door_Metal_C
// Size: 0x308 (Inherited: 0x248)
struct ABP_M_Door_Metal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct ULockComponent* Lock; // 0x250(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x258(0x08)
	struct UStaticMeshComponent* Door; // 0x260(0x08)
	struct UStaticMeshComponent* Latch; // 0x268(0x08)
	struct UStaticMeshComponent* Frame; // 0x270(0x08)
	struct USceneComponent* Scene; // 0x278(0x08)
	struct UObjectStateComponent* ObjectState; // 0x280(0x08)
	float Unlock_NewTrack_1_6FDC1E8748DC6B3D776865AC29EB004D; // 0x288(0x04)
	float Unlock_NewTrack_0_6FDC1E8748DC6B3D776865AC29EB004D; // 0x28c(0x04)
	enum class ETimelineDirection Unlock__Direction_6FDC1E8748DC6B3D776865AC29EB004D; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct UTimelineComponent* Unlock; // 0x298(0x08)
	enum class EEnvironment Environment; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	int32_t PropIndex; // 0x2a4(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x2a8(0x50)
	int32_t EnvInt; // 0x2f8(0x04)
	bool Locked; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct FRandomStream Random Seed; // 0x300(0x08)

	bool CanUnlock(struct UPrimitiveComponent* Comp, struct FVector Location); // Function BP_M_Door_Metal.BP_M_Door_Metal_C.CanUnlock // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_M_Door_Metal.BP_M_Door_Metal_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Unlock__FinishedFunc(); // Function BP_M_Door_Metal.BP_M_Door_Metal_C.Unlock__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Unlock__UpdateFunc(); // Function BP_M_Door_Metal.BP_M_Door_Metal_C.Unlock__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnFailedToUnlock(); // Function BP_M_Door_Metal.BP_M_Door_Metal_C.OnFailedToUnlock // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnLocked(); // Function BP_M_Door_Metal.BP_M_Door_Metal_C.OnLocked // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnUnlocked(); // Function BP_M_Door_Metal.BP_M_Door_Metal_C.OnUnlocked // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_M_Door_Metal.BP_M_Door_Metal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_M_Door_Metal(int32_t EntryPoint); // Function BP_M_Door_Metal.BP_M_Door_Metal_C.ExecuteUbergraph_BP_M_Door_Metal // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

