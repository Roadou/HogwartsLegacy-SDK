// BlueprintGeneratedClass BP_DevilsSnareAmbient_Base.BP_DevilsSnareAmbient_Base_C
// Size: 0x28c (Inherited: 0x248)
struct ABP_DevilsSnareAmbient_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMeshRef; // 0x258(0x08)
	struct UMaterialInstanceDynamic* PanningDMI; // 0x260(0x08)
	float MinDist; // 0x268(0x04)
	float MaxDist; // 0x26c(0x04)
	float MinPanRate; // 0x270(0x04)
	float MaxPanRate; // 0x274(0x04)
	float CurrentAlpha; // 0x278(0x04)
	float AlphaSmoothRate; // 0x27c(0x04)
	float PanAbsolute; // 0x280(0x04)
	float MinWritheRate; // 0x284(0x04)
	float MaxWritheRate; // 0x288(0x04)

	void Approach(float Current, float Desired, float Rate, float DeltaTime, float& Value); // Function BP_DevilsSnareAmbient_Base.BP_DevilsSnareAmbient_Base_C.Approach // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DevilsSnareAmbient_Base.BP_DevilsSnareAmbient_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_DevilsSnareAmbient_Base.BP_DevilsSnareAmbient_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DevilsSnareAmbient_Base(int32_t EntryPoint); // Function BP_DevilsSnareAmbient_Base.BP_DevilsSnareAmbient_Base_C.ExecuteUbergraph_BP_DevilsSnareAmbient_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

