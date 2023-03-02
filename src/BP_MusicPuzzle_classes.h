// BlueprintGeneratedClass BP_MusicPuzzle.BP_MusicPuzzle_C
// Size: 0x44a (Inherited: 0x248)
struct ABP_MusicPuzzle_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UDecalComponent* Decal; // 0x250(0x08)
	struct UAkComponent* BP_COM_38_BarrelPiano_PlayNote; // 0x258(0x08)
	struct UStaticMeshComponent* E3; // 0x260(0x08)
	struct UStaticMeshComponent* G3; // 0x268(0x08)
	struct UStaticMeshComponent* B3; // 0x270(0x08)
	struct UStaticMeshComponent* D4; // 0x278(0x08)
	struct UStaticMeshComponent* FSharp4; // 0x280(0x08)
	struct UStaticMeshComponent* E4; // 0x288(0x08)
	struct UStaticMeshComponent* CSharp4; // 0x290(0x08)
	struct UStaticMeshComponent* A3; // 0x298(0x08)
	struct UStaticMeshComponent* FSharp3; // 0x2a0(0x08)
	struct USceneComponent* Staff; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_HM_TScrolls_Sign_Anchor_E3; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_HM_TScrolls_Sign_Anchor_F4; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_HM_TScrolls_Sign_Anchor_D4; // 0x2c0(0x08)
	struct UStaticMeshComponent* SM_HM_TScrolls_Sign_Anchor_B3; // 0x2c8(0x08)
	struct UStaticMeshComponent* SM_HM_TScrolls_Sign_Anchor_G3; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_BCProps_Tentpole; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_BCProps_Tentpole_E4; // 0x2e0(0x08)
	struct UStaticMeshComponent* SM_BCProps_Tentpole_C4; // 0x2e8(0x08)
	struct UStaticMeshComponent* SM_BCProps_Tentpole_A3; // 0x2f0(0x08)
	struct UStaticMeshComponent* SM_BCProps_Tentpole_F3; // 0x2f8(0x08)
	struct USceneComponent* SharedRoot; // 0x300(0x08)
	struct FString NotePlayed; // 0x308(0x10)
	struct TArray<struct FSTR_Note> Song; // 0x318(0x10)
	struct TArray<struct FString> NotesPlayed; // 0x328(0x10)
	bool bSongPlaying; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	int32_t PlaceInSong; // 0x33c(0x04)
	struct FMulticastInlineDelegate SongComplete; // 0x340(0x10)
	struct TArray<struct FString> Sequence; // 0x350(0x10)
	int32_t Index; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct ABP_MusicManager_C*> MusicBPs; // 0x368(0x10)
	struct TArray<struct FString> SongNotes; // 0x378(0x10)
	struct TArray<float> SongTiming; // 0x388(0x10)
	struct TArray<struct FString> PossibleNotes; // 0x398(0x10)
	struct TArray<struct UStaticMeshComponent*> NoteMeshes; // 0x3a8(0x10)
	struct TArray<struct AActor*> Target; // 0x3b8(0x10)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct FTransform StaffLocation; // 0x3d0(0x30)
	struct FMulticastInlineDelegate OnBellRung; // 0x400(0x10)
	struct TArray<struct UDecalComponent*> NoteDecals; // 0x410(0x10)
	struct FDialogueConversationReference SuccessVOToPlay; // 0x420(0x10)
	struct FDialogueConversationReference FailureVOToPlay; // 0x430(0x10)
	struct FDatabaseMissionList ActiveMissionNameToCheck; // 0x440(0x08)
	bool SpokeSuccess; // 0x448(0x01)
	bool Test; // 0x449(0x01)

	void Play Character VO(struct FDialogueConversationReference DialogueEventName, bool Success, bool& MissionActive); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.Play Character VO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Place Note(struct FString Note); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.Place Note // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BellHit(struct FString Note); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.BellHit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NextNote(); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.NextNote // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MusicPuzzle(int32_t EntryPoint); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.ExecuteUbergraph_BP_MusicPuzzle // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnBellRung__DelegateSignature(); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.OnBellRung__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SongComplete__DelegateSignature(); // Function BP_MusicPuzzle.BP_MusicPuzzle_C.SongComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

