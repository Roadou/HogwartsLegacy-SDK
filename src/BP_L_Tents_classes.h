// BlueprintGeneratedClass BP_L_Tents.BP_L_Tents_C
// Size: 0x278 (Inherited: 0x250)
struct ABP_L_Tents_C : ATent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UChildActorComponent* ChildActor; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct TArray<struct TSoftClassPtr<UObject>> Meshes2; // 0x268(0x10)

	void UserConstructionScript(); // Function BP_L_Tents.BP_L_Tents_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTentMesh(); // Function BP_L_Tents.BP_L_Tents_C.SetTentMesh // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_L_Tents(int32_t EntryPoint); // Function BP_L_Tents.BP_L_Tents_C.ExecuteUbergraph_BP_L_Tents // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

