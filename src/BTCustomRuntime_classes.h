// Class BTCustomRuntime.BTService_AvaAITree
// Size: 0xd0 (Inherited: 0x98)
struct UBTService_AvaAITree : UBTService_BlueprintBase {
	char pad_98[0x38]; // 0x98(0x38)

	void ServiceEnd(struct AActor* OwnerActor); // Function BTCustomRuntime.BTService_AvaAITree.ServiceEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ServiceBegin(struct AActor* OwnerActor); // Function BTCustomRuntime.BTService_AvaAITree.ServiceBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void LeafNodeSwitcher(struct FGameplayTag InLeafNodeTag); // Function BTCustomRuntime.BTService_AvaAITree.LeafNodeSwitcher // (Native|Event|Public|BlueprintEvent) // @ game+0x5d2d000
	struct FGameplayTag GetLastLeafNode(); // Function BTCustomRuntime.BTService_AvaAITree.GetLastLeafNode // (Native|Event|Public|BlueprintEvent) // @ game+0x5d2cd50
	struct UBlackboardComponent* GetBlackboardComponent(); // Function BTCustomRuntime.BTService_AvaAITree.GetBlackboardComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x5d2cc90
	struct UAnimInstance* GetAnimInstance(); // Function BTCustomRuntime.BTService_AvaAITree.GetAnimInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x5d2cc30
	struct AActor* GetActorOwner(); // Function BTCustomRuntime.BTService_AvaAITree.GetActorOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x330f470
	struct FGameplayTag GetActiveLeafNodeTag(); // Function BTCustomRuntime.BTService_AvaAITree.GetActiveLeafNodeTag // (Final|Native|Public|BlueprintCallable) // @ game+0x5d2cbf0
	struct FName GetActiveLeafNodeName(); // Function BTCustomRuntime.BTService_AvaAITree.GetActiveLeafNodeName // (Final|Native|Public|BlueprintCallable) // @ game+0x5d2cbb0
	void Consume(); // Function BTCustomRuntime.BTService_AvaAITree.Consume // (Native|Event|Public|BlueprintEvent) // @ game+0x4f4b220
	void BroadcastAction(struct FBTCustomAction ActionName, enum class EBTCustomActionType ActionType, struct FVariantMapHandle VarMapHandle, bool bDestroyVarMap); // Function BTCustomRuntime.BTService_AvaAITree.BroadcastAction // (Native|Event|Public|BlueprintEvent) // @ game+0x5d2c4d0
};

// Class BTCustomRuntime.AnimNotify_BroadcastBTCustomAction
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_BroadcastBTCustomAction : UAnimNotify {
	struct FBTCustomAction BTCustomAction; // 0x38(0x0c)
	enum class EBTCustomActionType BTCustomActionType; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class BTCustomRuntime.BTAvaAITree_Interface
// Size: 0x28 (Inherited: 0x28)
struct UBTAvaAITree_Interface : UInterface {

	void SetManagedContext(struct FInputContextWithType InContext, bool bFlag); // Function BTCustomRuntime.BTAvaAITree_Interface.SetManagedContext // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LeafNodeSwitcher(struct FGameplayTag InLeafNodeTag); // Function BTCustomRuntime.BTAvaAITree_Interface.LeafNodeSwitcher // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool GetManagedContext(struct FInputContextWithType InContext); // Function BTCustomRuntime.BTAvaAITree_Interface.GetManagedContext // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FGameplayTag GetLastLeafNode(); // Function BTCustomRuntime.BTAvaAITree_Interface.GetLastLeafNode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Consume(); // Function BTCustomRuntime.BTAvaAITree_Interface.Consume // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BroadcastAction(struct FBTCustomAction ActionName, enum class EBTCustomActionType ActionType, struct FVariantMapHandle VarMapHandle, bool bDestroyVarMap); // Function BTCustomRuntime.BTAvaAITree_Interface.BroadcastAction // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

// Class BTCustomRuntime.BTComposite_AvaAITree
// Size: 0x98 (Inherited: 0x90)
struct UBTComposite_AvaAITree : UBTCompositeNode {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class BTCustomRuntime.BTComposite_Repeater
// Size: 0x98 (Inherited: 0x90)
struct UBTComposite_Repeater : UBTCompositeNode {
	struct FName m_leafNodeBBKey; // 0x90(0x08)
};

// Class BTCustomRuntime.BTComposite_RepeatUntilSuccess
// Size: 0x98 (Inherited: 0x90)
struct UBTComposite_RepeatUntilSuccess : UBTCompositeNode {
	struct FName m_leafNodeBBKey; // 0x90(0x08)
};

// Class BTCustomRuntime.BTCustomActionDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UBTCustomActionDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBTCustomBlueprintActionDelegateBinding> ActionDelegateBindings; // 0x28(0x10)
};

// Class BTCustomRuntime.BTCustomBPFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBTCustomBPFunctionLibrary : UBlueprintFunctionLibrary {

	void EnableBTCustomAction(struct UObject* InputReceiver, struct UBTCustomComponent* InputComponent); // Function BTCustomRuntime.BTCustomBPFunctionLibrary.EnableBTCustomAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d2ca40
	void DisableBTCustomAction(struct UObject* InputReceiver, struct UBTCustomComponent* InputComponent); // Function BTCustomRuntime.BTCustomBPFunctionLibrary.DisableBTCustomAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d2c980
};

// Class BTCustomRuntime.BTCustomComponent
// Size: 0x390 (Inherited: 0x2b0)
struct UBTCustomComponent : UBehaviorTreeComponent {
	struct UBehaviorTree* BehaviorTree; // 0x2b0(0x08)
	struct FString GameplayTagPrefix; // 0x2b8(0x10)
	bool bManageGameLogicBoolVars; // 0x2c8(0x01)
	char pad_2C9[0xf]; // 0x2c9(0x0f)
	struct FMulticastInlineDelegate LeafNodeSwitchedDelegate; // 0x2d8(0x10)
	struct FGameplayTag LeafNodeTag; // 0x2e8(0x08)
	struct FGameplayTag LastLeafNodeTag; // 0x2f0(0x08)
	struct UBTTaskNode* LastTaskNode; // 0x2f8(0x08)
	bool bLockLeafNodeSwitcher; // 0x300(0x01)
	bool bLeafNodeSwitcherQueued; // 0x301(0x01)
	char pad_302[0x2]; // 0x302(0x02)
	struct FGameplayTag LeafNodeTagDuringLock; // 0x304(0x08)
	bool bSubtree; // 0x30c(0x01)
	char pad_30D[0x33]; // 0x30d(0x33)
	struct TMap<struct FName, struct FNameToType> ActionNameToTypeMap; // 0x340(0x50)

	void OnCharacterLoadComplete(struct AActor* Actor); // Function BTCustomRuntime.BTCustomComponent.OnCharacterLoadComplete // (Final|Native|Public) // @ game+0x5d2d120
	void LeafNodeSwitcher(struct FGameplayTag InLeafNodeTag); // Function BTCustomRuntime.BTCustomComponent.LeafNodeSwitcher // (Final|Native|Public|BlueprintCallable) // @ game+0x5d2cf70
	struct FGameplayTag GetGameplayTagFromActiveLeafNode(); // Function BTCustomRuntime.BTCustomComponent.GetGameplayTagFromActiveLeafNode // (Final|Native|Public|BlueprintCallable) // @ game+0x5d2cce0
	struct FVariantMapHandle BroadcastAction_Actor(struct AActor* OwnerActor, struct FBTCustomAction ActionName, enum class EBTCustomActionType ActionType, struct FVariantMapHandle VarMapHandle, bool bDestroyVarMap); // Function BTCustomRuntime.BTCustomComponent.BroadcastAction_Actor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d2c7d0
	struct FVariantMapHandle BroadcastAction(struct FBTCustomAction ActionName, enum class EBTCustomActionType ActionType, struct FVariantMapHandle VarMapHandle, bool bDestroyVarMap); // Function BTCustomRuntime.BTCustomComponent.BroadcastAction // (Final|Native|Public|BlueprintCallable) // @ game+0x5d2c330
};

// Class BTCustomRuntime.BTCustomGameSettings
// Size: 0x38 (Inherited: 0x28)
struct UBTCustomGameSettings : UObject {
	struct TArray<struct FName> Actions; // 0x28(0x10)

	struct UBTCustomGameSettings* GetInputSettings(); // Function BTCustomRuntime.BTCustomGameSettings.GetInputSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5d2cd20
	void GetActionNames(struct TArray<struct FName>& ActionNames); // Function BTCustomRuntime.BTCustomGameSettings.GetActionNames // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d2cb00
};

// Class BTCustomRuntime.BTService_AvaAITree_Input
// Size: 0xf8 (Inherited: 0xd0)
struct UBTService_AvaAITree_Input : UBTService_AvaAITree {
	struct TArray<struct FName_GameLogicVarBool> GameLogicBoolVars; // 0xd0(0x10)
	char pad_E0[0x18]; // 0xe0(0x18)

	void SetManagedContext(struct FInputContextWithType InContext, bool bFlag); // Function BTCustomRuntime.BTService_AvaAITree_Input.SetManagedContext // (Native|Event|Public|BlueprintEvent) // @ game+0x5d2d1f0
	void PlayerInputSoonToBeRemoved(); // Function BTCustomRuntime.BTService_AvaAITree_Input.PlayerInputSoonToBeRemoved // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PlayerInputComponentCreated(struct UInputComponent* InputComponent); // Function BTCustomRuntime.BTService_AvaAITree_Input.PlayerInputComponentCreated // (Native|Public) // @ game+0x5882c30
	void PlayerInputComponentAboutToBeDestroyed(); // Function BTCustomRuntime.BTService_AvaAITree_Input.PlayerInputComponentAboutToBeDestroyed // (Native|Public) // @ game+0x5d2d1b0
	bool GetManagedContext(struct FInputContextWithType InContext); // Function BTCustomRuntime.BTService_AvaAITree_Input.GetManagedContext // (Native|Event|Public|BlueprintEvent) // @ game+0x5d2cdd0
};

// Class BTCustomRuntime.BTTask_AvaAITree
// Size: 0xd0 (Inherited: 0xa8)
struct UBTTask_AvaAITree : UBTTask_BlueprintBase {
	char pad_A8[0x28]; // 0xa8(0x28)

	void LeafNodeSwitcher(struct FGameplayTag LeafNodeTag); // Function BTCustomRuntime.BTTask_AvaAITree.LeafNodeSwitcher // (Native|Event|Public|BlueprintEvent) // @ game+0x5d2d090
	void LeafNodeSwitched(); // Function BTCustomRuntime.BTTask_AvaAITree.LeafNodeSwitched // (Final|Native|Public) // @ game+0x5d2cf50
	struct FGameplayTag GetLastLeafNode(); // Function BTCustomRuntime.BTTask_AvaAITree.GetLastLeafNode // (Native|Event|Public|BlueprintEvent) // @ game+0x5d2cd90
	struct UBlackboardComponent* GetBlackboardComponent(); // Function BTCustomRuntime.BTTask_AvaAITree.GetBlackboardComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x5d2cc90
	struct UAnimInstance* GetAnimInstance(); // Function BTCustomRuntime.BTTask_AvaAITree.GetAnimInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x5d2cc60
	struct AActor* GetActorOwner(); // Function BTCustomRuntime.BTTask_AvaAITree.GetActorOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x330f470
	void ExitTask(struct AActor* OwnerActor); // Function BTCustomRuntime.BTTask_AvaAITree.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Consume(); // Function BTCustomRuntime.BTTask_AvaAITree.Consume // (Native|Event|Public|BlueprintEvent) // @ game+0x4f4b200
	void BroadcastAction(struct FBTCustomAction ActionName, enum class EBTCustomActionType ActionType, struct FVariantMapHandle VarMapHandle, bool bDestroyVarMap); // Function BTCustomRuntime.BTTask_AvaAITree.BroadcastAction // (Native|Event|Public|BlueprintEvent) // @ game+0x5d2c650
};

// Class BTCustomRuntime.BTTask_AvaAITree_Input
// Size: 0x150 (Inherited: 0xd0)
struct UBTTask_AvaAITree_Input : UBTTask_AvaAITree {
	struct TArray<struct FName_GameLogicVarBool> GameLogicBoolVars; // 0xd0(0x10)
	struct TArray<struct FBTCustomAction> CustomActions; // 0xe0(0x10)
	struct FFacialAnimation FacialAnimation; // 0xf0(0x30)
	enum class EManagedFacialAnimationPriority FacialAnimationPriority; // 0x120(0x01)
	char pad_121[0x2f]; // 0x121(0x2f)

	void SetManagedContext(struct FInputContextWithType InContext, bool bFlag); // Function BTCustomRuntime.BTTask_AvaAITree_Input.SetManagedContext // (Native|Event|Public|BlueprintEvent) // @ game+0x5d2d2e0
	void PlayerInputComponentCreated(struct UInputComponent* InputComponent); // Function BTCustomRuntime.BTTask_AvaAITree_Input.PlayerInputComponentCreated // (Native|Public) // @ game+0x587ea40
	void PlayerInputComponentAboutToBeDestroyed(); // Function BTCustomRuntime.BTTask_AvaAITree_Input.PlayerInputComponentAboutToBeDestroyed // (Native|Public) // @ game+0x5d2d1d0
	bool GetManagedContext(struct FInputContextWithType InContext); // Function BTCustomRuntime.BTTask_AvaAITree_Input.GetManagedContext // (Native|Event|Public|BlueprintEvent) // @ game+0x5d2ce90
};

