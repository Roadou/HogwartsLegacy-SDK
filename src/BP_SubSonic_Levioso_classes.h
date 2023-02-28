// BlueprintGeneratedClass BP_SubSonic_Levioso.BP_SubSonic_Levioso_C
// Size: 0x584 (Inherited: 0x528)
struct ABP_SubSonic_Levioso_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x530(0x08)
	struct USceneComponent* Scene; // 0x538(0x08)
	struct UNiagaraComponent* Niagara; // 0x540(0x08)
	struct AActor* Target; // 0x548(0x08)
	bool HasTarget; // 0x550(0x01)
	char pad_551[0x3]; // 0x551(0x03)
	struct FVector Velocity; // 0x554(0x0c)
	float Speed; // 0x560(0x04)
	float DistanceMin; // 0x564(0x04)
	float DistanceMax; // 0x568(0x04)
	struct FVector Direction; // 0x56c(0x0c)
	struct FVector Offset; // 0x578(0x0c)

	void Update Velocity(); // Function BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.Update Velocity // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveSphere(); // Function BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.MoveSphere // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Loop(); // Function BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.Loop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_Levioso(int32_t EntryPoint); // Function BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.ExecuteUbergraph_BP_SubSonic_Levioso // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

