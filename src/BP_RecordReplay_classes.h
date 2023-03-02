// BlueprintGeneratedClass BP_RecordReplay.BP_RecordReplay_C
// Size: 0x2f8 (Inherited: 0x248)
struct ABP_RecordReplay_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	float Damping_NewTrack_1_D313840D4F6E81CD3A8B8B82FA8969D2; // 0x258(0x04)
	enum class ETimelineDirection Damping__Direction_D313840D4F6E81CD3A8B8B82FA8969D2; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct UTimelineComponent* Damping; // 0x260(0x08)
	float Scale_NewTrack_0_DE9C55FF46CEC0D5EE41E3816BDD4886; // 0x268(0x04)
	enum class ETimelineDirection Scale__Direction_DE9C55FF46CEC0D5EE41E3816BDD4886; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Scale; // 0x270(0x08)
	float Timeline_0_NewTrack_1_9DF120B84CEE1C1BE8CDD49E5B7806D2; // 0x278(0x04)
	enum class ETimelineDirection Timeline_0__Direction_9DF120B84CEE1C1BE8CDD49E5B7806D2; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x280(0x08)
	struct FMulticastInlineDelegate Alpha; // 0x288(0x10)
	struct UStaticMeshComponent* Target; // 0x298(0x08)
	struct UParticleSystemComponent* Emitter; // 0x2a0(0x08)
	struct TArray<struct FTransform> TransformKeyframes; // 0x2a8(0x10)
	int32_t CurrentStep; // 0x2b8(0x04)
	float RecordTime; // 0x2bc(0x04)
	bool AutoRewind; // 0x2c0(0x01)
	bool PlayForward; // 0x2c1(0x01)
	char pad_2C2[0x2]; // 0x2c2(0x02)
	float MevementStep; // 0x2c4(0x04)
	struct FVector StartScale; // 0x2c8(0x0c)
	struct FVector EndScale; // 0x2d4(0x0c)
	bool Busy; // 0x2e0(0x01)
	bool Invert; // 0x2e1(0x01)
	char pad_2E2[0x2]; // 0x2e2(0x02)
	float RangeA; // 0x2e4(0x04)
	float RangeB; // 0x2e8(0x04)
	float ScaleTarget; // 0x2ec(0x04)
	bool AllowBumpDrurringMotion ; // 0x2f0(0x01)
	bool Damp; // 0x2f1(0x01)
	char pad_2F2[0x2]; // 0x2f2(0x02)
	float RewindTime; // 0x2f4(0x04)

	void SetTransform(float Value); // Function BP_RecordReplay.BP_RecordReplay_C.SetTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_RecordReplay.BP_RecordReplay_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_RecordReplay.BP_RecordReplay_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Scale__FinishedFunc(); // Function BP_RecordReplay.BP_RecordReplay_C.Scale__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Scale__UpdateFunc(); // Function BP_RecordReplay.BP_RecordReplay_C.Scale__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Damping__FinishedFunc(); // Function BP_RecordReplay.BP_RecordReplay_C.Damping__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Damping__UpdateFunc(); // Function BP_RecordReplay.BP_RecordReplay_C.Damping__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Damping__NewTrack_0__EventFunc(); // Function BP_RecordReplay.BP_RecordReplay_C.Damping__NewTrack_0__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Begin(); // Function BP_RecordReplay.BP_RecordReplay_C.Begin // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_RecordReplay.BP_RecordReplay_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Movement(float MOVPercentage); // Function BP_RecordReplay.BP_RecordReplay_C.Movement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_1(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_RecordReplay.BP_RecordReplay_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Play(); // Function BP_RecordReplay.BP_RecordReplay_C.Play // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_RecordReplay(int32_t EntryPoint); // Function BP_RecordReplay.BP_RecordReplay_C.ExecuteUbergraph_BP_RecordReplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Alpha__DelegateSignature(float Alpha); // Function BP_RecordReplay.BP_RecordReplay_C.Alpha__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

