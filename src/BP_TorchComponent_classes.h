// BlueprintGeneratedClass BP_TorchComponent.BP_TorchComponent_C
// Size: 0x1a8 (Inherited: 0x178)
struct UBP_TorchComponent_C : UTorchComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)
	float TimelineProgress; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FMulticastInlineDelegate OnLit; // 0x188(0x10)
	struct FMulticastInlineDelegate OnExtinguished; // 0x198(0x10)

	void TorchConstruction(struct USphereComponent* Propagate Sphere, struct UAkComponent* Ak_Fire_Burning_Loop, struct UPointLightComponent* PointLight, struct UAnimatedLightComponent* AnimatedLight, struct TArray<struct UNiagaraComponent*>& FireParticles, struct TArray<struct UMaterialBillboardComponent*>& FireBillboards); // Function BP_TorchComponent.BP_TorchComponent_C.TorchConstruction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayLightSound(); // Function BP_TorchComponent.BP_TorchComponent_C.PlayLightSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AllowLightSound(); // Function BP_TorchComponent.BP_TorchComponent_C.AllowLightSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Attempt to Set on Fire(); // Function BP_TorchComponent.BP_TorchComponent_C.Attempt to Set on Fire // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PropagateOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_TorchComponent.BP_TorchComponent_C.PropagateOverlapBegin // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PropagateOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_TorchComponent.BP_TorchComponent_C.PropagateOverlapEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Attempt to Apply Wetness(); // Function BP_TorchComponent.BP_TorchComponent_C.Attempt to Apply Wetness // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Attempt to Freeze(); // Function BP_TorchComponent.BP_TorchComponent_C.Attempt to Freeze // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Proximity Light(struct AActor* Other Actor); // Function BP_TorchComponent.BP_TorchComponent_C.Proximity Light // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequentialLight(); // Function BP_TorchComponent.BP_TorchComponent_C.SequentialLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_TorchComponent.BP_TorchComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void IntensityInterp(); // Function BP_TorchComponent.BP_TorchComponent_C.IntensityInterp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndLight(); // Function BP_TorchComponent.BP_TorchComponent_C.EndLight // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExtinguishLight(); // Function BP_TorchComponent.BP_TorchComponent_C.ExtinguishLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnterLightTickRange(struct ULightComponent* LightComponent); // Function BP_TorchComponent.BP_TorchComponent_C.OnEnterLightTickRange // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitLightTickRange(struct ULightComponent* LightComponent); // Function BP_TorchComponent.BP_TorchComponent_C.OnExitLightTickRange // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TorchComponent(int32_t EntryPoint); // Function BP_TorchComponent.BP_TorchComponent_C.ExecuteUbergraph_BP_TorchComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnExtinguished__DelegateSignature(); // Function BP_TorchComponent.BP_TorchComponent_C.OnExtinguished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLit__DelegateSignature(); // Function BP_TorchComponent.BP_TorchComponent_C.OnLit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

