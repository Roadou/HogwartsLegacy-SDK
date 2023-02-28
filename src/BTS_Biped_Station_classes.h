// BlueprintGeneratedClass BTS_Biped_Station.BTS_Biped_Station_C
// Size: 0x129 (Inherited: 0xf8)
struct UBTS_Biped_Station_C : UBTService_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	bool InteractionInitiated; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FTimerHandle ButtslideSurfaceTimer; // 0x108(0x08)
	bool IsMoving; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FVector WorldDirection; // 0x114(0x0c)
	float SlideForwardSpeed; // 0x120(0x04)
	float FrictionOverride; // 0x124(0x04)
	bool RestoreIKState; // 0x128(0x01)

	void SetContexts(bool Flag); // Function BTS_Biped_Station.BTS_Biped_Station_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ServiceEnd(struct AActor* OwnerActor); // Function BTS_Biped_Station.BTS_Biped_Station_C.ServiceEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ServiceBegin(struct AActor* OwnerActor); // Function BTS_Biped_Station.BTS_Biped_Station_C.ServiceBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_Biped_Station(int32_t EntryPoint); // Function BTS_Biped_Station.BTS_Biped_Station_C.ExecuteUbergraph_BTS_Biped_Station // (Final|UbergraphFunction) // @ game+0x38a7480
};

