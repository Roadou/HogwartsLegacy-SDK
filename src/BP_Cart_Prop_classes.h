// BlueprintGeneratedClass BP_Cart_Prop.BP_Cart_Prop_C
// Size: 0x2b9 (Inherited: 0x248)
struct ABP_Cart_Prop_C : AActor {
	struct UStaticMeshComponent* Back_Wheels; // 0x248(0x08)
	struct UStaticMeshComponent* Back_Axle; // 0x250(0x08)
	struct UStaticMeshComponent* Front_Wheels; // 0x258(0x08)
	struct UStaticMeshComponent* Front_Spring_Left; // 0x260(0x08)
	struct UStaticMeshComponent* Front_Axel; // 0x268(0x08)
	struct UStaticMeshComponent* Front_Spring_Right; // 0x270(0x08)
	struct UStaticMeshComponent* Front_Steering; // 0x278(0x08)
	struct UStaticMeshComponent* Back_Spring_Left; // 0x280(0x08)
	struct UStaticMeshComponent* Back_Spring_Right; // 0x288(0x08)
	struct UChildActorComponent* CartBodyActor; // 0x290(0x08)
	struct USceneComponent* Scene; // 0x298(0x08)
	struct UChildActorComponent* TailgateActor; // 0x2a0(0x08)
	struct TArray<struct FNone> CartPrefabs; // 0x2a8(0x10)
	enum class E_CartType CartType; // 0x2b8(0x01)

	void TryFinishSetup(); // Function BP_Cart_Prop.BP_Cart_Prop_C.TryFinishSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupTailGate(); // Function BP_Cart_Prop.BP_Cart_Prop_C.SetupTailGate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Cart_Prop.BP_Cart_Prop_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

