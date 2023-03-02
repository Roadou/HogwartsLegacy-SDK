// BlueprintGeneratedClass BP_GlowBugSwarm.BP_GlowBugSwarm_C
// Size: 0x888 (Inherited: 0x6f8)
struct ABP_GlowBugSwarm_C : ABP_InstancedFlock_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f8(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x700(0x10)
	struct FFlockingParametersAdjustable IdleParams; // 0x710(0x5c)
	struct FFlockingParametersAdjustable CapturedParams; // 0x76c(0x5c)
	struct FFlockingParametersAdjustable ActivatingTargetParams; // 0x7c8(0x5c)
	struct FFlockingParametersAdjustable RetreatParams; // 0x824(0x5c)
	enum class BP_GlowBugSwarm_State Current State; // 0x880(0x01)
	char pad_881[0x3]; // 0x881(0x03)
	float StateBlendTimeSeconds; // 0x884(0x04)

	void Show State(enum class BP_GlowBugSwarm_State Swarm State, bool Enabled); // Function BP_GlowBugSwarm.BP_GlowBugSwarm_C.Show State // (Private|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GlowBugSwarm.BP_GlowBugSwarm_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SpeedChange(enum class BP_GlowBugSwarm_State NewState); // Function BP_GlowBugSwarm.BP_GlowBugSwarm_C.SpeedChange // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GlowBugSwarm(int32_t EntryPoint); // Function BP_GlowBugSwarm.BP_GlowBugSwarm_C.ExecuteUbergraph_BP_GlowBugSwarm // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void NewEventDispatcher_0__DelegateSignature(); // Function BP_GlowBugSwarm.BP_GlowBugSwarm_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

