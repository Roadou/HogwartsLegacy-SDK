// BlueprintGeneratedClass BP_MagicBroom.BP_MagicBroom_C
// Size: 0x299 (Inherited: 0x248)
struct ABP_MagicBroom_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_Broom_001_W; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float Timeline_1_NewTrack_0_1AF9727D4F2DCA21CD20DEA93B402107; // 0x268(0x04)
	enum class ETimelineDirection Timeline_1__Direction_1AF9727D4F2DCA21CD20DEA93B402107; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x270(0x08)
	float Timeline_0_NewTrack_0_7ABD1E46431F9CE9E1B7E0B1DDDED92D; // 0x278(0x04)
	enum class ETimelineDirection Timeline_0__Direction_7ABD1E46431F9CE9E1B7E0B1DDDED92D; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x280(0x08)
	bool NewVar_1; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	struct FVector NewVar_2; // 0x28c(0x0c)
	bool NewVar_3; // 0x298(0x01)

	void Timeline_0__FinishedFunc(); // Function BP_MagicBroom.BP_MagicBroom_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_MagicBroom.BP_MagicBroom_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__audio_event__EventFunc(); // Function BP_MagicBroom.BP_MagicBroom_C.Timeline_0__audio_event__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__BroomSweepParticle__EventFunc(); // Function BP_MagicBroom.BP_MagicBroom_C.Timeline_0__BroomSweepParticle__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_MagicBroom.BP_MagicBroom_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_MagicBroom.BP_MagicBroom_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_MagicBroom.BP_MagicBroom_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Reverse(); // Function BP_MagicBroom.BP_MagicBroom_C.Reverse // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Play(); // Function BP_MagicBroom.BP_MagicBroom_C.Play // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_MagicBroom.BP_MagicBroom_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Start(); // Function BP_MagicBroom.BP_MagicBroom_C.Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Return(); // Function BP_MagicBroom.BP_MagicBroom_C.Return // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MagicBroom(int32_t EntryPoint); // Function BP_MagicBroom.BP_MagicBroom_C.ExecuteUbergraph_BP_MagicBroom // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

