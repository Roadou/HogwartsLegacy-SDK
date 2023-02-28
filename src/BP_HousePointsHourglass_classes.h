// BlueprintGeneratedClass BP_HousePointsHourglass.BP_HousePointsHourglass_C
// Size: 0x358 (Inherited: 0x250)
struct ABP_HousePointsHourglass_C : AHousePointsHourglass {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UParticleSystemComponent* RavJewels; // 0x258(0x08)
	struct UParticleSystemComponent* SlythJewels; // 0x260(0x08)
	struct UParticleSystemComponent* GryffJewels; // 0x268(0x08)
	struct UParticleSystemComponent* HuffJewels; // 0x270(0x08)
	struct UStaticMeshComponent* GryffPoints; // 0x278(0x08)
	struct UStaticMeshComponent* SlyPoints; // 0x280(0x08)
	struct UStaticMeshComponent* RavPoints; // 0x288(0x08)
	struct UStaticMeshComponent* HuffPoints; // 0x290(0x08)
	struct USceneComponent* Scene; // 0x298(0x08)
	struct USceneComponent* SharedRoot; // 0x2a0(0x08)
	struct UStaticMeshComponent* StaticMeshComponent11; // 0x2a8(0x08)
	struct UStaticMeshComponent* StaticMeshComponent9; // 0x2b0(0x08)
	struct UStaticMeshComponent* StaticMeshComponent8; // 0x2b8(0x08)
	struct UStaticMeshComponent* StaticMeshComponent6; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticMeshComponent5; // 0x2c8(0x08)
	struct UStaticMeshComponent* StaticMeshComponent4; // 0x2d0(0x08)
	struct UStaticMeshComponent* StaticMeshComponent2; // 0x2d8(0x08)
	struct UStaticMeshComponent* StaticMeshComponent0; // 0x2e0(0x08)
	struct TArray<float> Points; // 0x2e8(0x10)
	struct TMap<struct FString, struct UStaticMeshComponent*> Houses; // 0x2f8(0x50)
	int32_t MaxPoints; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FTimerHandle HouseScoreTimerHandle; // 0x350(0x08)

	void ReceiveBeginPlay(); // Function BP_HousePointsHourglass.BP_HousePointsHourglass_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CheckScore(); // Function BP_HousePointsHourglass.BP_HousePointsHourglass_C.CheckScore // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndHouseCompetition(); // Function BP_HousePointsHourglass.BP_HousePointsHourglass_C.EndHouseCompetition // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HousePointsHourglass(int32_t EntryPoint); // Function BP_HousePointsHourglass.BP_HousePointsHourglass_C.ExecuteUbergraph_BP_HousePointsHourglass // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

