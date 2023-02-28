// Class NiagaraHelpers.NiagaraDataInterfaceAkEvent
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraDataInterfaceAkEvent : UNiagaraDataInterface {
	struct UAkAudioEvent* AkAudioEvent; // 0x38(0x08)
	struct FName EventName; // 0x40(0x08)
	struct FName AttachPointName; // 0x48(0x08)
};

// Class NiagaraHelpers.NiagaraDataInterfaceAkRTPC
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceAkRTPC : UNiagaraDataInterface {
	struct TArray<struct FName> RTPCs; // 0x38(0x10)
};

// Class NiagaraHelpers.NiagaraDataInterfaceAkEventPerParticle
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceAkEventPerParticle : UNiagaraDataInterface {
	struct TArray<struct FNiagaraDataInterfaceAkEventInfo> Events; // 0x38(0x10)
};

// Class NiagaraHelpers.NiagaraDataInterfaceInsideAndWind
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceInsideAndWind : UNiagaraDataInterface {
};

// Class NiagaraHelpers.NiagaraHelpers
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraHelpers : UBlueprintFunctionLibrary {

	void SpawnSystemOnStaticMeshes(struct AActor* Actor, struct UNiagaraSystem* NiagaraSystem, struct FNiagaraSystemSpawnMultiStaticInfo SpawnInfo, struct FNiagaraHelpersPrimFilter Filter, struct TArray<struct UNiagaraComponent*>& NiagaraComponents); // Function NiagaraHelpers.NiagaraHelpers.SpawnSystemOnStaticMeshes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d39a20
	void SpawnSystemOnSkeletalMeshes(struct AActor* Actor, struct UNiagaraSystem* NiagaraSystem, struct FNiagaraSystemSpawnMultiSkeletalInfo SpawnInfo, struct FNiagaraHelpersPrimFilter Filter, struct TArray<struct UNiagaraComponent*>& NiagaraComponents); // Function NiagaraHelpers.NiagaraHelpers.SpawnSystemOnSkeletalMeshes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d39670
	void SpawnSystemOnPrimitives(struct AActor* Actor, struct UNiagaraSystem* NiagaraSystem, struct FNiagaraSystemSpawnAttachedInfo SpawnInfo, struct FNiagaraHelpersPrimFilter Filter, struct TArray<struct UNiagaraComponent*>& NiagaraComponents); // Function NiagaraHelpers.NiagaraHelpers.SpawnSystemOnPrimitives // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d39340
	void SpawnInWorld(struct UObject* WorldContextObject, struct UNiagaraSystem* NiagaraSystem, struct FNiagaraSystemSpawnInfo SpawnInfo, struct UNiagaraComponent*& NiagaraComponent); // Function NiagaraHelpers.NiagaraHelpers.SpawnInWorld // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d38fc0
	void SpawnAttachedActor(struct AActor* Actor, struct UNiagaraSystem* NiagaraSystem, struct FNiagaraSystemSpawnAttachedPointInfo SpawnInfo, struct UNiagaraComponent*& NiagaraComponent); // Function NiagaraHelpers.NiagaraHelpers.SpawnAttachedActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d38890
	void SpawnAttached(struct USceneComponent* SceneComponent, struct UNiagaraSystem* NiagaraSystem, struct FNiagaraSystemSpawnAttachedPointInfo SpawnInfo, struct UNiagaraComponent*& NiagaraComponent); // Function NiagaraHelpers.NiagaraHelpers.SpawnAttached // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d38600
	void NPCSetParameterVector(struct UNiagaraParameterCollectionInstance* npci, struct FString ParamName, struct FVector Value); // Function NiagaraHelpers.NiagaraHelpers.NPCSetParameterVector // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1d38470
	void NPCSetParameterFloat(struct UNiagaraParameterCollectionInstance* npci, struct FString ParamName, float Value); // Function NiagaraHelpers.NiagaraHelpers.NPCSetParameterFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d38300
	void NPCSetParameterColor(struct UNiagaraParameterCollectionInstance* npci, struct FString ParamName, struct FLinearColor Value); // Function NiagaraHelpers.NiagaraHelpers.NPCSetParameterColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1d38190
	struct FNiagaraHelpersPrimFilter MakePrimFilterPrimitives(enum class ENiagaraHelpersPrimRule Rule, struct TArray<struct UPrimitiveComponent*> Primitives, enum class ENiagaraHelpersPrimMatchMode MatchMode); // Function NiagaraHelpers.NiagaraHelpers.MakePrimFilterPrimitives // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d375a0
	struct FNiagaraHelpersPrimFilter MakePrimFilterPrimitive(enum class ENiagaraHelpersPrimRule Rule, struct UPrimitiveComponent* Primitive, enum class ENiagaraHelpersPrimMatchMode MatchMode); // Function NiagaraHelpers.NiagaraHelpers.MakePrimFilterPrimitive // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d373f0
	struct FNiagaraHelpersPrimFilter MakePrimFilterNames(enum class ENiagaraHelpersPrimRule Rule, struct TArray<struct FName> Primitives, enum class ENiagaraHelpersPrimMatchMode MatchMode); // Function NiagaraHelpers.NiagaraHelpers.MakePrimFilterNames // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d371d0
	struct FNiagaraHelpersPrimFilter MakePrimFilterName(enum class ENiagaraHelpersPrimRule Rule, struct FName Primitive, enum class ENiagaraHelpersPrimMatchMode MatchMode); // Function NiagaraHelpers.NiagaraHelpers.MakePrimFilterName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d37040
	void GetEmitterNames(struct UNiagaraSystem* NiagaraSystem, struct TArray<struct FName>& emitterNames, bool includeHidden); // Function NiagaraHelpers.NiagaraHelpers.GetEmitterNames // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d36f10
	void ComputeComponentBoundsMeasure(struct TArray<struct USceneComponent*> Components, enum class ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower); // Function NiagaraHelpers.NiagaraHelpers.ComputeComponentBoundsMeasure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d36d60
	void ComputeActorStaticMeshBoundsMeasure(struct AActor* Actor, enum class ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower); // Function NiagaraHelpers.NiagaraHelpers.ComputeActorStaticMeshBoundsMeasure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d36c00
	void ComputeActorSkeletalMeshBoundsMeasure(struct AActor* Actor, enum class ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower); // Function NiagaraHelpers.NiagaraHelpers.ComputeActorSkeletalMeshBoundsMeasure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d36aa0
	void ComputeActorPrimitiveBoundsMeasure(struct AActor* Actor, enum class ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower); // Function NiagaraHelpers.NiagaraHelpers.ComputeActorPrimitiveBoundsMeasure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d36940
	void ComputeActorMeshBoundsMeasure(struct AActor* Actor, enum class ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower); // Function NiagaraHelpers.NiagaraHelpers.ComputeActorMeshBoundsMeasure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d367e0
	void ActorFindSocketOnComponent(struct AActor* Actor, struct FName SocketName, struct USceneComponent*& ComponentWithSocket, bool bDeepSearchComponents); // Function NiagaraHelpers.NiagaraHelpers.ActorFindSocketOnComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d36680
	void ActorFindBoneOrSocketOnComponent(struct AActor* Actor, struct FName BoneOrSocketName, struct USceneComponent*& ComponentWithBoneOrSocket, int32_t& BoneIndex, bool bDeepSearchComponents); // Function NiagaraHelpers.NiagaraHelpers.ActorFindBoneOrSocketOnComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d364c0
	void ActorFindBoneOnComponent(struct AActor* Actor, struct FName BoneName, struct USkinnedMeshComponent*& ComponentWithBone, int32_t& BoneIndex, bool bDeepSearchComponents); // Function NiagaraHelpers.NiagaraHelpers.ActorFindBoneOnComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d36300
	void ActorBestDefaultAttachComponent(struct AActor* Actor, struct USceneComponent*& AttachComponent); // Function NiagaraHelpers.NiagaraHelpers.ActorBestDefaultAttachComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d36230
};

// Class NiagaraHelpers.Interface_NiagaraHelpersInitializer
// Size: 0x28 (Inherited: 0x28)
struct UInterface_NiagaraHelpersInitializer : UInterface {
};

// Class NiagaraHelpers.NiagaraHelpersFullVariableListCacheEntry
// Size: 0x2b0 (Inherited: 0x28)
struct UNiagaraHelpersFullVariableListCacheEntry : UObject {
	struct UNiagaraSystem* System; // 0x28(0x08)
	struct FNiagaraHelpersFullVariableList FullVariableList; // 0x30(0x270)
	struct FDateTime CacheTime; // 0x2a0(0x08)
	bool bHaveSetupVariables; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
};

// Class NiagaraHelpers.NiagaraHelpersFullVariableListCacheEntryStatic
// Size: 0x2b0 (Inherited: 0x2b0)
struct UNiagaraHelpersFullVariableListCacheEntryStatic : UNiagaraHelpersFullVariableListCacheEntry {
};

// Class NiagaraHelpers.NiagaraHelpersFullVariableListCacheEntryDynamic
// Size: 0x2c0 (Inherited: 0x2b0)
struct UNiagaraHelpersFullVariableListCacheEntryDynamic : UNiagaraHelpersFullVariableListCacheEntry {
	struct UNiagaraComponent* ProbeComponent; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void OnFinished(); // Function NiagaraHelpers.NiagaraHelpersFullVariableListCacheEntryDynamic.OnFinished // (Final|Native|Protected) // @ game+0x1d385e0
};

// Class NiagaraHelpers.NiagaraSystemWithVars
// Size: 0xb0 (Inherited: 0x30)
struct UNiagaraSystemWithVars : UDataAsset {
	char pad_30[0x8]; // 0x30(0x08)
	struct UNiagaraSystem* NiagaraSystem; // 0x38(0x08)
	struct FNiagaraHelpersInitializers Overrides; // 0x40(0x70)

	void SpawnInWorldWithVars(struct UObject* WorldContextObject, struct FNiagaraSystemSpawnInfo SpawnInfo, struct UNiagaraComponent*& NiagaraComponent); // Function NiagaraHelpers.NiagaraSystemWithVars.SpawnInWorldWithVars // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d391a0
	void SpawnAttachedWithVars(struct USceneComponent* SceneComponent, struct FNiagaraSystemSpawnAttachedPointInfo SpawnInfo, struct UNiagaraComponent*& NiagaraComponent); // Function NiagaraHelpers.NiagaraSystemWithVars.SpawnAttachedWithVars // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d38d70
	void SpawnAttachedActorWithVars(struct AActor* Actor, struct FNiagaraSystemSpawnAttachedPointInfo SpawnInfo, struct UNiagaraComponent*& NiagaraComponent); // Function NiagaraHelpers.NiagaraSystemWithVars.SpawnAttachedActorWithVars // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d38b20
	void RefreshDefaults(); // Function NiagaraHelpers.NiagaraSystemWithVars.RefreshDefaults // (Final|Native|Public) // @ game+0x1074730
	void MultiSpawnOnStaticMeshesWithVars(struct AActor* Actor, struct FNiagaraSystemSpawnMultiStaticInfo SpawnInfo, struct FNiagaraHelpersPrimFilter Filter, struct TArray<struct UNiagaraComponent*>& NiagaraComponents); // Function NiagaraHelpers.NiagaraSystemWithVars.MultiSpawnOnStaticMeshesWithVars // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d37e20
	void MultiSpawnOnSkeletalMeshesWithVars(struct AActor* Actor, struct FNiagaraSystemSpawnMultiSkeletalInfo SpawnInfo, struct FNiagaraHelpersPrimFilter Filter, struct TArray<struct UNiagaraComponent*>& NiagaraComponents); // Function NiagaraHelpers.NiagaraSystemWithVars.MultiSpawnOnSkeletalMeshesWithVars // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d37ab0
	void MultiSpawnOnPrimitivesWithVars(struct AActor* Actor, struct FNiagaraSystemSpawnAttachedInfo SpawnInfo, struct FNiagaraHelpersPrimFilter Filter, struct TArray<struct UNiagaraComponent*>& NiagaraComponents); // Function NiagaraHelpers.NiagaraSystemWithVars.MultiSpawnOnPrimitivesWithVars // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d377c0
	void ClearOverrides(); // Function NiagaraHelpers.NiagaraSystemWithVars.ClearOverrides // (Final|Native|Public) // @ game+0x1074730
};

