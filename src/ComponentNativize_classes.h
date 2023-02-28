// Class ComponentNativize.MobilityOverrider
// Size: 0x28 (Inherited: 0x28)
struct UMobilityOverrider : UObject {

	void ComponentOverrideMobility(struct USceneComponent* SceneComponent, enum class EMobilityOverride mobilityOverride, enum class EMobilityOverride lightMobilityOverride, bool includeChildren); // Function ComponentNativize.MobilityOverrider.ComponentOverrideMobility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f04530
	void ActorOverrideMobility(struct AActor* Actor, enum class EMobilityOverride mobilityOverride, enum class EMobilityOverride lightMobilityOverride, bool includeChildren); // Function ComponentNativize.MobilityOverrider.ActorOverrideMobility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f04350
};

// Class ComponentNativize.NativeSplitterBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNativeSplitterBlueprintLibrary : UBlueprintFunctionLibrary {

	bool RequiresOverrideVertexColorsFixup(struct UStaticMeshComponent* StaticMeshComponent); // Function ComponentNativize.NativeSplitterBlueprintLibrary.RequiresOverrideVertexColorsFixup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f044a0
	bool RemoveInstanceVertexColorsFromLOD(struct UStaticMeshComponent* StaticMeshComponent, int32_t LODToRemoveColorsFrom); // Function ComponentNativize.NativeSplitterBlueprintLibrary.RemoveInstanceVertexColorsFromLOD // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f048f0
	bool RemoveInstanceVertexColors(struct UStaticMeshComponent* StaticMeshComponent); // Function ComponentNativize.NativeSplitterBlueprintLibrary.RemoveInstanceVertexColors // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f044a0
	bool FixupOverrideColorsIfNecessary(struct UStaticMeshComponent* StaticMeshComponent, bool bRebuildingStaticMesh); // Function ComponentNativize.NativeSplitterBlueprintLibrary.FixupOverrideColorsIfNecessary // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f04820
	bool CopyProperties(struct UActorComponent* SourceComponent, struct UActorComponent* TargetComponent); // Function ComponentNativize.NativeSplitterBlueprintLibrary.CopyProperties // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f04750
	bool CopyInstanceVertexColorsIfCompatible(struct UStaticMeshComponent* SourceComponent, struct UStaticMeshComponent* TargetComponent); // Function ComponentNativize.NativeSplitterBlueprintLibrary.CopyInstanceVertexColorsIfCompatible // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f04680
	bool CachePaintedDataIfNecessary(struct UStaticMeshComponent* StaticMeshComponent); // Function ComponentNativize.NativeSplitterBlueprintLibrary.CachePaintedDataIfNecessary // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f044a0
};

