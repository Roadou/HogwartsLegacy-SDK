// Class Progression.ProgressionComponent
// Size: 0x120 (Inherited: 0xc8)
struct UProgressionComponent : UActorComponent {
	struct UPT_Progression* m_progression; // 0xc8(0x08)
	char pad_D0[0x50]; // 0xd0(0x50)
};

// Class Progression.PT_Tree
// Size: 0x48 (Inherited: 0x30)
struct UPT_Tree : UDataAsset {
	struct FName m_upgradeName; // 0x30(0x08)
	struct TArray<struct UPT_Tree*> m_children; // 0x38(0x10)
};

// Class Progression.PT_Progression
// Size: 0x48 (Inherited: 0x30)
struct UPT_Progression : UDataAsset {
	struct UPT_Tree* m_tree; // 0x30(0x08)
	struct UDataTable* m_baseValues; // 0x38(0x08)
	struct UDataTable* m_upgrades; // 0x40(0x08)
};

