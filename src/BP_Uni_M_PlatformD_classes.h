// BlueprintGeneratedClass BP_Uni_M_PlatformD.BP_Uni_M_PlatformD_C
// Size: 0x2f8 (Inherited: 0x2b0)
struct ABP_Uni_M_PlatformD_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2b8(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x2c0(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint1; // 0x2c8(0x08)
	struct UStaticMeshComponent* SM_Cairn_AccioPullSwitch_Handle1; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_Cairn_AccioPullSwitch_HandleHolder1; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_Cairn_AccioPullSwitch_Handle; // 0x2e0(0x08)
	struct UStaticMeshComponent* SM_Cairn_AccioPullSwitch_HandleHolder; // 0x2e8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2f0(0x08)

	struct FName GetMainBone(); // Function BP_Uni_M_PlatformD.BP_Uni_M_PlatformD_C.GetMainBone // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UPrimitiveComponent* GetMainPrimitive(); // Function BP_Uni_M_PlatformD.BP_Uni_M_PlatformD_C.GetMainPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetBlueprint(struct AActor* Actor); // Function BP_Uni_M_PlatformD.BP_Uni_M_PlatformD_C.ResetBlueprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnReset(); // Function BP_Uni_M_PlatformD.BP_Uni_M_PlatformD_C.OnReset // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Uni_M_PlatformD.BP_Uni_M_PlatformD_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetupSfx(struct UAkComponent* AkComponent); // Function BP_Uni_M_PlatformD.BP_Uni_M_PlatformD_C.SetupSfx // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Uni_M_PlatformD(int32_t EntryPoint); // Function BP_Uni_M_PlatformD.BP_Uni_M_PlatformD_C.ExecuteUbergraph_BP_Uni_M_PlatformD // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

