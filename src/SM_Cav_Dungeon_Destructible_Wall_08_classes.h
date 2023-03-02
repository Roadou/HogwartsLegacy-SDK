// BlueprintGeneratedClass SM_Cav_Dungeon_Destructible_Wall_08.SM_Cav_Dungeon_Destructible_Wall_08_C
// Size: 0x3bc (Inherited: 0x371)
struct ASM_Cav_Dungeon_Destructible_Wall_08_C : ABP_LargeBreakableWallBase_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UDecalComponent* Moss07; // 0x380(0x08)
	struct UDecalComponent* Decal4; // 0x388(0x08)
	struct UDecalComponent* Decal2; // 0x390(0x08)
	struct UDecalComponent* Decal7; // 0x398(0x08)
	struct UDecalComponent* Decal5; // 0x3a0(0x08)
	struct UDecalComponent* Moss08; // 0x3a8(0x08)
	struct UDecalComponent* Moss09; // 0x3b0(0x08)
	float DamageDealt; // 0x3b8(0x04)

	void ReceiveBeginPlay(); // Function SM_Cav_Dungeon_Destructible_Wall_08.SM_Cav_Dungeon_Destructible_Wall_08_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SM_Cav_Dungeon_Destructible_Wall_08(int32_t EntryPoint); // Function SM_Cav_Dungeon_Destructible_Wall_08.SM_Cav_Dungeon_Destructible_Wall_08_C.ExecuteUbergraph_SM_Cav_Dungeon_Destructible_Wall_08 // (Final|UbergraphFunction) // @ game+0x38a7480
};

