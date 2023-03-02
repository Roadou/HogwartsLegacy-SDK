// BlueprintGeneratedClass BP_GM_CartTrackConverge.BP_GM_CartTrackConverge_C
// Size: 0x29d (Inherited: 0x272)
struct ABP_GM_CartTrackConverge_C : ABP_GM_BaseTrackSpline_C {
	char pad_272[0x6]; // 0x272(0x06)
	struct USplineComponent* SplineJunction; // 0x278(0x08)
	struct USphereComponent* StartTurnSphere; // 0x280(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x288(0x08)
	struct UStaticMeshComponent* SM_GobMine_SmallTrack_200L_A; // 0x290(0x08)
	float TRackSize; // 0x298(0x04)
	enum class E_CartTrackConvergeTypes TrackConvergeType; // 0x29c(0x01)

	void UserConstructionScript(); // Function BP_GM_CartTrackConverge.BP_GM_CartTrackConverge_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

