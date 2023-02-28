// BlueprintGeneratedClass UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C
// Size: 0x321 (Inherited: 0x268)
struct AUI_BP_CompendiumModelSpawner_C : ACompendiumModelSpawner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UChildActorComponent* Thestral; // 0x270(0x08)
	struct UChildActorComponent* Onyx; // 0x278(0x08)
	struct UChildActorComponent* Highwing; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct AActor* CompendiumActor; // 0x290(0x08)
	struct FMulticastInlineDelegate MeshLoadComplete; // 0x298(0x10)
	struct FString CurrentActorID; // 0x2a8(0x10)
	struct TMap<struct FString, struct UChildActorComponent*> PreloadedModelMap; // 0x2b8(0x50)
	struct FRotator InitialRotation; // 0x308(0x0c)
	char pad_314[0x4]; // 0x314(0x04)
	struct UChildActorComponent* CurrentMount; // 0x318(0x08)
	bool DesiredVisibility; // 0x320(0x01)

	void ResetRotation(); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.ResetRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockActorInPlace(struct AActor* Actor); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.LockActorInPlace // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideCompendiumActor(); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.HideCompendiumActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NormalizeActorScale(); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.NormalizeActorScale // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnActor(struct FString ActorId); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.SpawnActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowCompendiumActor(struct FString ActorId); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.ShowCompendiumActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ActorMeshLoadComplete(); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.ActorMeshLoadComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BP_OnModelClassLoaded(struct FString ItemName); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.BP_OnModelClassLoaded // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnCharacterLoadComplete(struct AActor* Actor); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.OnCharacterLoadComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BP_LODsLoaded(); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.BP_LODsLoaded // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CompendiumModelSpawner(int32_t EntryPoint); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.ExecuteUbergraph_UI_BP_CompendiumModelSpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void MeshLoadComplete__DelegateSignature(); // Function UI_BP_CompendiumModelSpawner.UI_BP_CompendiumModelSpawner_C.MeshLoadComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

