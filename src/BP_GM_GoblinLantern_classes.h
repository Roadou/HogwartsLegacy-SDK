// BlueprintGeneratedClass BP_GM_GoblinLantern.BP_GM_GoblinLantern_C
// Size: 0x2e4 (Inherited: 0x248)
struct ABP_GM_GoblinLantern_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* CandleLantern_ChildActor; // 0x250(0x08)
	struct UStaticMeshComponent* SM_BCProps_RopeKnot_A; // 0x258(0x08)
	struct UStaticMeshComponent* SM_GobMine_WallLantern_B; // 0x260(0x08)
	struct UStaticMeshComponent* SM_BCProps_RopeKnot_A1; // 0x268(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x270(0x08)
	struct UCableComponent* Cable; // 0x278(0x08)
	bool bStartSwinging; // 0x280(0x01)
	bool StartLit; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	float Intensity; // 0x284(0x04)
	float Attenuation Radius; // 0x288(0x04)
	bool Cast Shadow; // 0x28c(0x01)
	bool Spot Light On; // 0x28d(0x01)
	char pad_28E[0x2]; // 0x28e(0x02)
	float Intensity SL; // 0x290(0x04)
	float Attenuation Radius SL; // 0x294(0x04)
	float Outer Cone Angle; // 0x298(0x04)
	float Inner Cone Angle; // 0x29c(0x04)
	struct FVector Offset SL; // 0x2a0(0x0c)
	struct FVector Offset; // 0x2ac(0x0c)
	struct FRotator Rotation SL; // 0x2b8(0x0c)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct ANone* CandleLantern; // 0x2c8(0x08)
	float RopeLength; // 0x2d0(0x04)
	float Light Temperature; // 0x2d4(0x04)
	float Volumetric Scattering; // 0x2d8(0x04)
	struct FRandomStream Stream; // 0x2dc(0x08)

	void UserConstructionScript(); // Function BP_GM_GoblinLantern.BP_GM_GoblinLantern_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GM_GoblinLantern.BP_GM_GoblinLantern_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_GoblinLantern(int32_t EntryPoint); // Function BP_GM_GoblinLantern.BP_GM_GoblinLantern_C.ExecuteUbergraph_BP_GM_GoblinLantern // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

