// BlueprintGeneratedClass BP_secretBookshelf2.BP_secretBookshelf2_C
// Size: 0x51c (Inherited: 0x4b0)
struct ABP_secretBookshelf2_C : ASceneRigActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UStaticMeshComponent* SM_HW_RT_SecretBookShelf; // 0x4b8(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x4c0(0x08)
	struct AActor* BookShelf_A; // 0x4c8(0x08)
	struct AActor* BookShelf_B; // 0x4d0(0x08)
	struct AActor* Trapdoor_A_left; // 0x4d8(0x08)
	struct AActor* Trapdoor_B_left; // 0x4e0(0x08)
	struct AActor* SceneRig_B; // 0x4e8(0x08)
	struct AActor* Trapdoor_A_right; // 0x4f0(0x08)
	struct AActor* Trapdoor_B_right; // 0x4f8(0x08)
	float Delay; // 0x500(0x04)
	struct FVector CalloutLocation; // 0x504(0x0c)
	struct FVector LookAtPoint; // 0x510(0x0c)

	void PlaySceneRig(struct USceneRigPlayer*& SceneRig); // Function BP_secretBookshelf2.BP_secretBookshelf2_C.PlaySceneRig // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_secretBookshelf2.BP_secretBookshelf2_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_secretBookshelf2.BP_secretBookshelf2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_secretBookshelf2.BP_secretBookshelf2_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_secretBookshelf2(int32_t EntryPoint); // Function BP_secretBookshelf2.BP_secretBookshelf2_C.ExecuteUbergraph_BP_secretBookshelf2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

