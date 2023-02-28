// Class MultiFX2.MultiFX2Asset
// Size: 0x40 (Inherited: 0x30)
struct UMultiFX2Asset : UDataAsset {
	struct TArray<struct UMultiFX2_Base*> FX2; // 0x30(0x10)
};

// Class MultiFX2.MultiFX2SkelData
// Size: 0x38 (Inherited: 0x28)
struct UMultiFX2SkelData : UObject {
	struct TArray<struct USkeletalMesh*> ReferenceSkeletonArray; // 0x28(0x10)
};

// Class MultiFX2.MultiFX2Manager
// Size: 0x58 (Inherited: 0x28)
struct UMultiFX2Manager : UObject {
	struct TArray<struct FMultiFX2DataArray> FXDataArray; // 0x28(0x10)
	char pad_38[0x20]; // 0x38(0x20)

	void UpdateFX(); // Function MultiFX2.MultiFX2Manager.UpdateFX // (Final|Native|Private) // @ game+0x183aae0
	struct FMultiFX2Handle SpawnFXAsset(struct UMultiFX2Asset* FXAsset, struct UObject* Target, struct AActor* Instigator, struct FVector Location, struct FRotator Rotation, struct FName AttachPointName); // Function MultiFX2.MultiFX2Manager.SpawnFXAsset // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x183a8e0
	struct FMultiFX2Handle SpawnFXArray(struct TArray<struct FMultiFX2Var>& Var, struct UObject* Target, struct AActor* Instigator, struct FVector Location, struct FRotator Rotation, struct FName AttachPointName); // Function MultiFX2.MultiFX2Manager.SpawnFXArray // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x183a6d0
	struct FMultiFX2Handle SpawnFX(struct FMultiFX2Var& Var, struct UObject* Target, struct AActor* Instigator, struct FVector Location, struct FRotator Rotation, struct FName AttachPointName); // Function MultiFX2.MultiFX2Manager.SpawnFX // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x183a4d0
	void SetRotation(struct FMultiFX2Handle& InHandle, struct FRotator& InRotation); // Function MultiFX2.MultiFX2Manager.SetRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x183a3f0
	void SetLocation(struct FMultiFX2Handle& InHandle, struct FVector& InLocation); // Function MultiFX2.MultiFX2Manager.SetLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x183a310
	void SetFootprintLifetimeScale(float Scale); // Function MultiFX2.MultiFX2Manager.SetFootprintLifetimeScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x183a290
	void SetCustomTimeDilation(struct FMultiFX2Handle& InHandle, float Dilation); // Function MultiFX2.MultiFX2Manager.SetCustomTimeDilation // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x183a1b0
	bool IsLooping(struct FMultiFX2Handle& InHandle); // Function MultiFX2.MultiFX2Manager.IsLooping // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x183a120
	bool IsActive(struct FMultiFX2Handle& InHandle); // Function MultiFX2.MultiFX2Manager.IsActive // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x183a090
	void DestroyFXHandle(struct FMultiFX2Handle& InHandle, bool bImmediate); // Function MultiFX2.MultiFX2Manager.DestroyFXHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1839fb0
};

// Class MultiFX2.MultiFX2_Base
// Size: 0x28 (Inherited: 0x28)
struct UMultiFX2_Base : UObject {
};

// Class MultiFX2.MultiFX2_Filtered
// Size: 0x68 (Inherited: 0x28)
struct UMultiFX2_Filtered : UMultiFX2_Base {
	struct TArray<struct UFXFilter*> Filters; // 0x28(0x10)
	struct TArray<struct UFXAdjustments*> Adjustments; // 0x38(0x10)
	struct TArray<struct UFXUpdate*> Updates; // 0x48(0x10)
	struct TArray<struct UFXEnd*> Ends; // 0x58(0x10)
};

// Class MultiFX2.FXFilter
// Size: 0x30 (Inherited: 0x28)
struct UFXFilter : UObject {
	bool bIsNot; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MultiFX2.FXAdjustments
// Size: 0x28 (Inherited: 0x28)
struct UFXAdjustments : UObject {
};

// Class MultiFX2.FXUpdate
// Size: 0x28 (Inherited: 0x28)
struct UFXUpdate : UObject {
};

// Class MultiFX2.FXEnd
// Size: 0x28 (Inherited: 0x28)
struct UFXEnd : UObject {
};

