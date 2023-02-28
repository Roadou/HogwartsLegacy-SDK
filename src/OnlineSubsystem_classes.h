// Class OnlineSubsystem.NamedInterfaces
// Size: 0x60 (Inherited: 0x28)
struct UNamedInterfaces : UObject {
	struct TArray<struct FNamedInterface> NamedInterfaces; // 0x28(0x10)
	struct TArray<struct FNamedInterfaceDef> NamedInterfaceDefs; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)
};

// Class OnlineSubsystem.TurnBasedMatchInterface
// Size: 0x28 (Inherited: 0x28)
struct UTurnBasedMatchInterface : UInterface {

	void OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnMatchEnded(struct FString Match); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
};

