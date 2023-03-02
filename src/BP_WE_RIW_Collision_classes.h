// BlueprintGeneratedClass BP_WE_RIW_Collision.BP_WE_RIW_Collision_C
// Size: 0x278 (Inherited: 0x248)
struct ABP_WE_RIW_Collision_C : AActor {
	struct UBoxComponent* Pulling_Bar_Left_Collision; // 0x248(0x08)
	struct UBoxComponent* Pulling_Bar_Right_Collision; // 0x250(0x08)
	struct UBoxComponent* Cart_Collision; // 0x258(0x08)
	struct UBoxComponent* Collision_StopCart; // 0x260(0x08)
	struct UBoxComponent* Collision_SlowCart; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)

	void GetBarLeftCollision(struct UPrimitiveComponent*& Bar Left); // Function BP_WE_RIW_Collision.BP_WE_RIW_Collision_C.GetBarLeftCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetBarRightCollision(struct UPrimitiveComponent*& Bar Right); // Function BP_WE_RIW_Collision.BP_WE_RIW_Collision_C.GetBarRightCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCartMainCollision(struct UPrimitiveComponent*& Cart Main Collision); // Function BP_WE_RIW_Collision.BP_WE_RIW_Collision_C.GetCartMainCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCollisionStop(struct UPrimitiveComponent*& Stop Collision); // Function BP_WE_RIW_Collision.BP_WE_RIW_Collision_C.GetCollisionStop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCollisionSlow(struct UPrimitiveComponent*& SlowCollision); // Function BP_WE_RIW_Collision.BP_WE_RIW_Collision_C.GetCollisionSlow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

