// BlueprintGeneratedClass BP_OPP_Crate.BP_OPP_Crate_C
// Size: 0x2c0 (Inherited: 0x2b0)
struct ABP_OPP_Crate_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UStaticMeshComponent* Obj; // 0x2b8(0x08)

	void OnHitByOppugnoImpact(struct AActor* Instigator, struct AActor* Object); // Function BP_OPP_Crate.BP_OPP_Crate_C.OnHitByOppugnoImpact // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoEnd(struct AActor* Instigator); // Function BP_OPP_Crate.BP_OPP_Crate_C.OnOppugnoEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoHold(struct AActor* Instigator); // Function BP_OPP_Crate.BP_OPP_Crate_C.OnOppugnoHold // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoImpact(struct AActor* Instigator, struct AActor* Target, struct AActor* HitObject); // Function BP_OPP_Crate.BP_OPP_Crate_C.OnOppugnoImpact // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoThrow(struct AActor* Instigator, struct AActor* Target, struct FVector Velocity); // Function BP_OPP_Crate.BP_OPP_Crate_C.OnOppugnoThrow // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoPull(struct AActor* Instigator); // Function BP_OPP_Crate.BP_OPP_Crate_C.OnOppugnoPull // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OPP_Crate(int32_t EntryPoint); // Function BP_OPP_Crate.BP_OPP_Crate_C.ExecuteUbergraph_BP_OPP_Crate // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

