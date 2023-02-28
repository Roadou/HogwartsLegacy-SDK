// BlueprintGeneratedClass BP_SubSonic_Diffindo.BP_SubSonic_Diffindo_C
// Size: 0x54c (Inherited: 0x528)
struct ABP_SubSonic_Diffindo_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UNiagaraComponent* Niagara Diffindo Proj; // 0x530(0x08)
	struct UMaterialInstanceDynamic* MAT_Proj; // 0x538(0x08)
	struct FVector LOC_Target; // 0x540(0x0c)

	void ReceiveBeginPlay(); // Function BP_SubSonic_Diffindo.BP_SubSonic_Diffindo_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnFire(struct AActor* Target, struct FVector TargetLocation, struct FVector Velocity); // Function BP_SubSonic_Diffindo.BP_SubSonic_Diffindo_C.OnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_Diffindo(int32_t EntryPoint); // Function BP_SubSonic_Diffindo.BP_SubSonic_Diffindo_C.ExecuteUbergraph_BP_SubSonic_Diffindo // (Final|UbergraphFunction) // @ game+0x38a7480
};

