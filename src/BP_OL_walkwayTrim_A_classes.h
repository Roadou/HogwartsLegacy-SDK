// BlueprintGeneratedClass BP_OL_walkwayTrim_A.BP_OL_walkwayTrim_A_C
// Size: 0x291 (Inherited: 0x248)
struct ABP_OL_walkwayTrim_A_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USplineComponent* Spline; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float SectionLength; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct UStaticMesh* Static Mesh 01; // 0x268(0x08)
	struct UStaticMesh* Static Mesh 02; // 0x270(0x08)
	struct UStaticMesh* Static Mesh 03; // 0x278(0x08)
	struct UStaticMesh* Static Mesh 04; // 0x280(0x08)
	struct FRandomStream Random Seed; // 0x288(0x08)
	bool Random Meshes; // 0x290(0x01)

	void UserConstructionScript(); // Function BP_OL_walkwayTrim_A.BP_OL_walkwayTrim_A_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_OL_walkwayTrim_A.BP_OL_walkwayTrim_A_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_walkwayTrim_A(int32_t EntryPoint); // Function BP_OL_walkwayTrim_A.BP_OL_walkwayTrim_A_C.ExecuteUbergraph_BP_OL_walkwayTrim_A // (Final|UbergraphFunction) // @ game+0x38a7480
};

