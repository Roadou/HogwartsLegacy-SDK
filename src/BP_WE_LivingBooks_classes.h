// BlueprintGeneratedClass BP_WE_LivingBooks.BP_WE_LivingBooks_C
// Size: 0x2f0 (Inherited: 0x280)
struct ABP_WE_LivingBooks_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UBoxComponent* EventTrigger; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct USceneComponent* StudentSpawnMarker; // 0x298(0x08)
	float BookFadeOutTime_Forced; // 0x2a0(0x04)
	float NaturalTimeout; // 0x2a4(0x04)
	struct AFocusTrigger* FocusTrigger; // 0x2a8(0x08)
	struct ABP_Station_C* StationRef; // 0x2b0(0x08)
	struct ABP_Prop_LivingBook_C* BookPropRef; // 0x2b8(0x08)
	bool TriggerSockets; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	struct FObjectFadeParamsSpeedDuration BookFadeOut; // 0x2c4(0x0c)
	float LoopDuration; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UScheduledEntity* StudentRef; // 0x2d8(0x08)
	struct ABP_Prop_LivingBook_C* BookRef; // 0x2e0(0x08)
	struct AWorldEventActor* StationRelease; // 0x2e8(0x08)

	void SpawnStudentHobo(enum class HouseIds InHouse, enum class EGenderEnum In Gender, struct TArray<struct FString>& ValidVoiceIDs, struct UScheduledEntity*& Output_Get); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.SpawnStudentHobo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyEnd_564B2908447C076E0C51CBB4331936A3(struct FName NotifyName); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnNotifyEnd_564B2908447C076E0C51CBB4331936A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyBegin_564B2908447C076E0C51CBB4331936A3(struct FName NotifyName); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnNotifyBegin_564B2908447C076E0C51CBB4331936A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInterrupted_564B2908447C076E0C51CBB4331936A3(struct FName NotifyName); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnInterrupted_564B2908447C076E0C51CBB4331936A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBlendOut_564B2908447C076E0C51CBB4331936A3(struct FName NotifyName); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnBlendOut_564B2908447C076E0C51CBB4331936A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCompleted_564B2908447C076E0C51CBB4331936A3(struct FName NotifyName); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnCompleted_564B2908447C076E0C51CBB4331936A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyEnd_144841E348CAC45D796EDC8A85315743(struct FName NotifyName); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnNotifyEnd_144841E348CAC45D796EDC8A85315743 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyBegin_144841E348CAC45D796EDC8A85315743(struct FName NotifyName); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnNotifyBegin_144841E348CAC45D796EDC8A85315743 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInterrupted_144841E348CAC45D796EDC8A85315743(struct FName NotifyName); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnInterrupted_144841E348CAC45D796EDC8A85315743 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBlendOut_144841E348CAC45D796EDC8A85315743(struct FName NotifyName); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnBlendOut_144841E348CAC45D796EDC8A85315743 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCompleted_144841E348CAC45D796EDC8A85315743(struct FName NotifyName); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnCompleted_144841E348CAC45D796EDC8A85315743 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LivingBookAnimate(); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.LivingBookAnimate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFXSpawn(); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.VFXSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFXDestroy(); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.VFXDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StudentLeftStation(); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.StudentLeftStation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFleshCreated(struct AActor* Actor, struct UScheduledEntity* ScheduledEntity); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnFleshCreated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnTriggerNaturalTimeout(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnTriggerNaturalTimeout // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartStudentReaction(); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.StartStudentReaction // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoopEnd(); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.OnLoopEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayReactVO(); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.PlayReactVO // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_LivingBooks(int32_t EntryPoint); // Function BP_WE_LivingBooks.BP_WE_LivingBooks_C.ExecuteUbergraph_BP_WE_LivingBooks // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

