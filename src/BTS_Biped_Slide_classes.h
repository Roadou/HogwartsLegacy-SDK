// BlueprintGeneratedClass BTS_Biped_Slide.BTS_Biped_Slide_C
// Size: 0x111 (Inherited: 0xf8)
struct UBTS_Biped_Slide_C : UBTService_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	float FrictionOverride; // 0x100(0x04)
	struct FVector LastDirection; // 0x104(0x0c)
	enum class EPhysicalSurface CurrentSurfaceType; // 0x110(0x01)

	void OnLoaded_064020B847E32A364958D9B53D4D396C(struct UObject* Loaded); // Function BTS_Biped_Slide.BTS_Biped_Slide_C.OnLoaded_064020B847E32A364958D9B53D4D396C // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_Slide.BTS_Biped_Slide_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ServiceBegin(struct AActor* OwnerActor); // Function BTS_Biped_Slide.BTS_Biped_Slide_C.ServiceBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ServiceEnd(struct AActor* OwnerActor); // Function BTS_Biped_Slide.BTS_Biped_Slide_C.ServiceEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTS_Biped_Slide.BTS_Biped_Slide_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnComponentHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BTS_Biped_Slide.BTS_Biped_Slide_C.OnComponentHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_Biped_Slide(int32_t EntryPoint); // Function BTS_Biped_Slide.BTS_Biped_Slide_C.ExecuteUbergraph_BTS_Biped_Slide // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

