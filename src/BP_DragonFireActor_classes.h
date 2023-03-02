// BlueprintGeneratedClass BP_DragonFireActor.BP_DragonFireActor_C
// Size: 0x450 (Inherited: 0x248)
struct ABP_DragonFireActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Origin; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct TArray<struct AMunitionType_Base*> MunitionArray; // 0x260(0x10)
	struct ASpellTool* LatestSpellTool; // 0x270(0x08)
	struct TArray<struct AActor*> HitActors; // 0x278(0x10)
	struct TArray<enum class EObjectTypeQuery> ObjectTypesToDetect; // 0x288(0x10)
	struct FHitResult CurHitResult; // 0x298(0x88)
	struct AActor* CurHitActor; // 0x320(0x08)
	struct AMunitionType_Base* CurMunition; // 0x328(0x08)
	struct FMunitionImpactData miData; // 0x330(0xf0)
	struct FGameplayTagContainer mtContainer; // 0x420(0x20)
	bool MunitionsDone; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct FTimerHandle MunitionTimer; // 0x448(0x08)

	void StopMunitions(); // Function BP_DragonFireActor.BP_DragonFireActor_C.StopMunitions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DragonFireActor.BP_DragonFireActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_DragonFireActor.BP_DragonFireActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void FireMunition(); // Function BP_DragonFireActor.BP_DragonFireActor_C.FireMunition // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MunitionDestroyed(struct AMunitionType_Base* MunitionInstance); // Function BP_DragonFireActor.BP_DragonFireActor_C.MunitionDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOverlap(struct AMunitionType_Base* MunitionInstance, struct FMunitionImpactData& MunitionImpactData); // Function BP_DragonFireActor.BP_DragonFireActor_C.OnOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveDestroyed(); // Function BP_DragonFireActor.BP_DragonFireActor_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DragonFireActor(int32_t EntryPoint); // Function BP_DragonFireActor.BP_DragonFireActor_C.ExecuteUbergraph_BP_DragonFireActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

