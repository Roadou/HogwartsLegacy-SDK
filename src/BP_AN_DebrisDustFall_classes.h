// BlueprintGeneratedClass BP_AN_DebrisDustFall.BP_AN_DebrisDustFall_C
// Size: 0xcc (Inherited: 0x38)
struct UBP_AN_DebrisDustFall_C : UAnimNotify {
	struct FName SocketName; // 0x38(0x08)
	struct FVector SocketOffset; // 0x40(0x0c)
	struct FRotator SocketRotation; // 0x4c(0x0c)
	struct UStaticMesh* EmissionMesh; // 0x58(0x08)
	struct UNiagaraSystem* VFX_NS_DebrisDustFall; // 0x60(0x08)
	bool InitialBurst; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FLinearColor DustColor; // 0x6c(0x10)
	struct FVector EmissionArea; // 0x7c(0x0c)
	float EmissionRateDust; // 0x88(0x04)
	float EmissionRateRocks; // 0x8c(0x04)
	float EmissionRateScale; // 0x90(0x04)
	float GravityScaleDust; // 0x94(0x04)
	float LifetimeScale; // 0x98(0x04)
	float LimitedLoops; // 0x9c(0x04)
	float LoopDelay; // 0xa0(0x04)
	float LoopLength; // 0xa4(0x04)
	float RockGravityMultiply; // 0xa8(0x04)
	float RockRotationScale; // 0xac(0x04)
	float RockScale; // 0xb0(0x04)
	float RockScaleVariation; // 0xb4(0x04)
	float SystemIntensity; // 0xb8(0x04)
	float SystemOpacity; // 0xbc(0x04)
	float SystemScale; // 0xc0(0x04)
	float VelocityScale; // 0xc4(0x04)
	float VelocityScaleRocks; // 0xc8(0x04)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function BP_AN_DebrisDustFall.BP_AN_DebrisDustFall_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	struct FString GetNotifyName(); // Function BP_AN_DebrisDustFall.BP_AN_DebrisDustFall_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
};

