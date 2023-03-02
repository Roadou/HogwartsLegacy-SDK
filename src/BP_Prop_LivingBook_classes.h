// BlueprintGeneratedClass BP_Prop_LivingBook.BP_Prop_LivingBook_C
// Size: 0x310 (Inherited: 0x280)
struct ABP_Prop_LivingBook_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAkComponent* Ak_audio_location; // 0x288(0x08)
	struct USkeletalMeshComponent* SK_WEA_LivingBooks_Book; // 0x290(0x08)
	struct USceneComponent* VFXMarker; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	struct USceneComponent* StudentSpawnMarker; // 0x2a8(0x08)
	struct TArray<struct UMaterialInterface*> BookMaterials; // 0x2b0(0x10)
	int32_t BookCategory; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UNiagaraComponent* PlayingParticleSystem; // 0x2c8(0x08)
	struct TArray<struct UNiagaraSystem*> BookVFX; // 0x2d0(0x10)
	int32_t CurrentVFXIndex; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<struct UAkAudioEvent*> PlaySFX; // 0x2e8(0x10)
	struct TArray<struct UAkAudioEvent*> StopSFX; // 0x2f8(0x10)
	struct FRandomStream Random Seed; // 0x308(0x08)

	void PickingBookCategory(); // Function BP_Prop_LivingBook.BP_Prop_LivingBook_C.PickingBookCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChooseVFXToSpawn(); // Function BP_Prop_LivingBook.BP_Prop_LivingBook_C.ChooseVFXToSpawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LivingBookAnimate(); // Function BP_Prop_LivingBook.BP_Prop_LivingBook_C.LivingBookAnimate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFXSpawn(); // Function BP_Prop_LivingBook.BP_Prop_LivingBook_C.VFXSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFXDestroy(); // Function BP_Prop_LivingBook.BP_Prop_LivingBook_C.VFXDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Prop_LivingBook.BP_Prop_LivingBook_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Prop_LivingBook.BP_Prop_LivingBook_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Prop_LivingBook(int32_t EntryPoint); // Function BP_Prop_LivingBook.BP_Prop_LivingBook_C.ExecuteUbergraph_BP_Prop_LivingBook // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

