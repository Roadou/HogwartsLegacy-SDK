// BlueprintGeneratedClass BP_Broom.BP_Broom_C
// Size: 0x3b1 (Inherited: 0x357)
struct ABP_Broom_C : ABP_Breakable_Persistent_C {
	char pad_357[0x1]; // 0x357(0x01)
	int32_t PropIndex; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x360(0x50)
	bool CompiledList; // 0x3b0(0x01)

	void UserConstructionScript(); // Function BP_Broom.BP_Broom_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

