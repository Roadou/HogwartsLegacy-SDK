// BlueprintGeneratedClass BP_Uni_M_Platform.BP_Uni_M_Platform_C
// Size: 0x2c0 (Inherited: 0x2b0)
struct ABP_Uni_M_Platform_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2b8(0x08)

	struct FName GetMainBone(); // Function BP_Uni_M_Platform.BP_Uni_M_Platform_C.GetMainBone // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UPrimitiveComponent* GetMainPrimitive(); // Function BP_Uni_M_Platform.BP_Uni_M_Platform_C.GetMainPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnReset(); // Function BP_Uni_M_Platform.BP_Uni_M_Platform_C.OnReset // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetupSfx(struct UAkComponent* AkComponent); // Function BP_Uni_M_Platform.BP_Uni_M_Platform_C.SetupSfx // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Uni_M_Platform(int32_t EntryPoint); // Function BP_Uni_M_Platform.BP_Uni_M_Platform_C.ExecuteUbergraph_BP_Uni_M_Platform // (Final|UbergraphFunction) // @ game+0x38a7480
};

