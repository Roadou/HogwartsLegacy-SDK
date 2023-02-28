// BlueprintGeneratedClass BP_GroundFog.BP_GroundFog_C
// Size: 0x338 (Inherited: 0x248)
struct ABP_GroundFog_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* FogPlayerOverlapVolume; // 0x250(0x08)
	struct UBillboardComponent* Billboard; // 0x258(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	bool Enabled; // 0x270(0x01)
	bool Author Fog - TURN OFF WHEN FINISHED; // 0x271(0x01)
	bool Use Sphere Shape; // 0x272(0x01)
	bool Enable Player Interaction; // 0x273(0x01)
	enum class E_GroundFog Fog Preset; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct TMap<enum class E_GroundFog, struct FSTR_GroundFog> Fog Type Presets; // 0x278(0x50)
	float Fog Density Multiplier; // 0x2c8(0x04)
	bool Override Minimum Fog Density; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	float Minimum Fog Density; // 0x2d0(0x04)
	bool Use Manual Settings; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct FSTR_GroundFog Maunal Settings; // 0x2d8(0x4c)
	float Cull Distance; // 0x324(0x04)
	float Volume Fog Buffer Depth; // 0x328(0x04)
	float Min Density; // 0x32c(0x04)
	struct UMaterialInstanceDynamic* Dynamic Material; // 0x330(0x08)

	void GetFogMaterial(struct UMaterialInterface*& Material); // Function BP_GroundFog.BP_GroundFog_C.GetFogMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_GroundFog.BP_GroundFog_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Turn off Fog past a distance(); // Function BP_GroundFog.BP_GroundFog_C.Turn off Fog past a distance // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GroundFog.BP_GroundFog_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_GroundFog.BP_GroundFog_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_GroundFog.BP_GroundFog_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GroundFog(int32_t EntryPoint); // Function BP_GroundFog.BP_GroundFog_C.ExecuteUbergraph_BP_GroundFog // (Final|UbergraphFunction) // @ game+0x38a7480
};

