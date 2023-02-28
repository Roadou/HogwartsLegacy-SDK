// BlueprintGeneratedClass BP_FastTravel.BP_FastTravel_C
// Size: 0x582 (Inherited: 0x391)
struct ABP_FastTravel_C : AUI_BP_FastTravelLocation_C {
	char pad_391[0x7]; // 0x391(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UChildActorComponent* BP_FastTravel_Default; // 0x3a0(0x08)
	struct UNiagaraComponent* VFX_NS_Floo_ChimneySmoke_Green; // 0x3a8(0x08)
	struct UNiagaraComponent* VFX_NS_Floo_Fire_Ambient; // 0x3b0(0x08)
	struct UChildActorComponent* BP_FastTravel_Plaque; // 0x3b8(0x08)
	struct UChildActorComponent* BP_FastTravel_PillarBowlFoot; // 0x3c0(0x08)
	struct UBoxComponent* UnlockCollision; // 0x3c8(0x08)
	struct UChildActorComponent* BP_FastTravel_Marker; // 0x3d0(0x08)
	struct FString Fast Travel Name; // 0x3d8(0x10)
	struct TArray<struct ABP_FastTravel_C*> Fast Travel Points on This Tile; // 0x3e8(0x10)
	struct FString Fast Travel Point Identity; // 0x3f8(0x10)
	bool Smoke Off; // 0x408(0x01)
	bool Double Smoke; // 0x409(0x01)
	enum class E_AVA_FastTravel_GeoList Geo Selection; // 0x40a(0x01)
	bool Show DB Name; // 0x40b(0x01)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct FTransform Plaque Transform; // 0x410(0x30)
	struct FTransform ChimneyTransform; // 0x440(0x30)
	struct FTransform Plaque On Wall; // 0x470(0x30)
	struct FTransform Unused; // 0x4a0(0x30)
	struct FTransform PlayerSpawn Loc; // 0x4d0(0x30)
	struct FTransform InteractLocation; // 0x500(0x30)
	struct UAkComponent* AK_BP_FastTravel; // 0x530(0x08)
	char pad_538[0x8]; // 0x538(0x08)
	struct FTransform HUDMarkerLocation; // 0x540(0x30)
	bool bSuppressPlaqueDialogue; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct UNiagaraSystem* Niagara System; // 0x578(0x08)
	bool New Visibility; // 0x580(0x01)
	bool Chimney Geo Off; // 0x581(0x01)

	struct FName GetUniqueBeaconId(); // Function BP_FastTravel.BP_FastTravel_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdatePlaqueDialogueSuppressed(bool bShouldBeSuppressed); // Function BP_FastTravel.BP_FastTravel_C.UpdatePlaqueDialogueSuppressed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_FastTravel.BP_FastTravel_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FastTravel.BP_FastTravel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Bothies Place Componnts(); // Function BP_FastTravel.BP_FastTravel_C.Bothies Place Componnts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Activate(bool ACTIVE); // Function BP_FastTravel.BP_FastTravel_C.Activate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Test Flames Smoke Toggle(); // Function BP_FastTravel.BP_FastTravel_C.Test Flames Smoke Toggle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Pillars Place Componnts(); // Function BP_FastTravel.BP_FastTravel_C.Pillars Place Componnts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hogwarts Place Componnts(); // Function BP_FastTravel.BP_FastTravel_C.Hogwarts Place Componnts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Chimney Place Componnts(); // Function BP_FastTravel.BP_FastTravel_C.Chimney Place Componnts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Perceived_Interact(struct UObject* Caller); // Function BP_FastTravel.BP_FastTravel_C.Perceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NoLongerPerceived_Interact(struct UObject* Caller); // Function BP_FastTravel.BP_FastTravel_C.NoLongerPerceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Interact and  Match HUD Marker(); // Function BP_FastTravel.BP_FastTravel_C.Set Interact and  Match HUD Marker // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hogwarts Update Plaque Rotation(); // Function BP_FastTravel.BP_FastTravel_C.Hogwarts Update Plaque Rotation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FT Plaqe and Bowl Transform(); // Function BP_FastTravel.BP_FastTravel_C.FT Plaqe and Bowl Transform // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FastTravel(int32_t EntryPoint); // Function BP_FastTravel.BP_FastTravel_C.ExecuteUbergraph_BP_FastTravel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

