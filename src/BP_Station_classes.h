// BlueprintGeneratedClass BP_Station.BP_Station_C
// Size: 0x371 (Inherited: 0x368)
struct ABP_Station_C : AStation {
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x368(0x08)
	bool PreviewMeshesVisble; // 0x370(0x01)

	void Create + Attach Skel Mesh Component(struct TSoftObjectPtr<UAnimSequence> AnimPose, struct TSoftObjectPtr<USceneComponent> ParentProp, struct FName SocketName, struct TSoftObjectPtr<USkeletalMesh> SkelMesh, float AnimTime (Sec), struct USkeletalMeshComponent*& SkelMeshComponent); // Function BP_Station.BP_Station_C.Create + Attach Skel Mesh Component // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

