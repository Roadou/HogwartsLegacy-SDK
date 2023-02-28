// BlueprintGeneratedClass FL_Brooms.FL_Brooms_C
// Size: 0x28 (Inherited: 0x28)
struct UFL_Brooms_C : UBlueprintFunctionLibrary {

	void IsPlayerWalking(struct UObject* Biped Player, struct UObject* __WorldContext, bool& IsWalking?); // Function FL_Brooms.FL_Brooms_C.IsPlayerWalking // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetPlayerBroom(struct AActor* Caller, struct UObject* __WorldContext, struct AFlyingBroom*& Player Broom); // Function FL_Brooms.FL_Brooms_C.GetPlayerBroom // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PutPlayerOnBroom(struct AActor* InActor, struct AFlyingBroom* InBroomCapsule, struct AFlyingBroom* InBroomProp, enum class EBroomMountType MountType, struct UObject* __WorldContext); // Function FL_Brooms.FL_Brooms_C.PutPlayerOnBroom // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

