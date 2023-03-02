// BlueprintGeneratedClass BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C
// Size: 0x5b0 (Inherited: 0x540)
struct ABP_WE_GhostChase_ghost_C : AAmbientGhost_Character {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UObjectStateComponent* ObjectState; // 0x548(0x08)
	struct UFacialComponent* FacialComponent; // 0x550(0x08)
	struct UChildActorComponent* DBCharacter; // 0x558(0x08)
	struct UCameraComponent* Camera; // 0x560(0x08)
	struct USpringArmComponent* SpringArm; // 0x568(0x08)
	struct UAkComponent* SoundLocation; // 0x570(0x08)
	float Movespeedmodifier_NewTrack_0_16C0474D4E70ACCB14EFC3B75002BE44; // 0x578(0x04)
	enum class ETimelineDirection Movespeedmodifier__Direction_16C0474D4E70ACCB14EFC3B75002BE44; // 0x57c(0x01)
	char pad_57D[0x3]; // 0x57d(0x03)
	struct UTimelineComponent* Movespeedmodifier; // 0x580(0x08)
	struct FName Character registry ID; // 0x588(0x08)
	int32_t GhostID; // 0x590(0x04)
	float Base TravelSpeed; // 0x594(0x04)
	struct TArray<struct UStaticMesh*> Held item meshes; // 0x598(0x10)
	struct ABP_DB_Lightweight_Character_C* DBCharacterRef; // 0x5a8(0x08)

	void Spawn Chaser held item(); // Function BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C.Spawn Chaser held item // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Anim BP(); // Function BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C.Set Anim BP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Movespeedmodifier__FinishedFunc(); // Function BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C.Movespeedmodifier__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Movespeedmodifier__UpdateFunc(); // Function BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C.Movespeedmodifier__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void BeginGhostMovementEvent(); // Function BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C.BeginGhostMovementEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GhostDestroyed(struct UObject* Caller); // Function BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C.GhostDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void EnteredOuterRadius(); // Function BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C.EnteredOuterRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EnteredInnerRadius(); // Function BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C.EnteredInnerRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExitedOuterRadius(); // Function BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C.ExitedOuterRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_GhostChase_ghost(int32_t EntryPoint); // Function BP_WE_GhostChase_ghost.BP_WE_GhostChase_ghost_C.ExecuteUbergraph_BP_WE_GhostChase_ghost // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

