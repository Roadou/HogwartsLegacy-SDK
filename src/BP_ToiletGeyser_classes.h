// BlueprintGeneratedClass BP_ToiletGeyser.BP_ToiletGeyser_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_ToiletGeyser_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_ToiletGeyser; // 0x250(0x08)
	struct UNiagaraComponent* VFX_NS_Bathroom_ToiletWaterGeyser; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	float StartTime; // 0x270(0x04)
	float TimeBetweenStartles; // 0x274(0x04)
	struct UNiagaraComponent* Handle; // 0x278(0x08)

	void BndEvt__BP_ToiletGeyser_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_ToiletGeyser.BP_ToiletGeyser_C.BndEvt__BP_ToiletGeyser_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_ToiletGeyser_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_ToiletGeyser.BP_ToiletGeyser_C.BndEvt__BP_ToiletGeyser_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ToiletGeyser(int32_t EntryPoint); // Function BP_ToiletGeyser.BP_ToiletGeyser_C.ExecuteUbergraph_BP_ToiletGeyser // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

