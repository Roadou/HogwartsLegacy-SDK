// UserDefinedStruct STR_AudioSpellTrigger.STR_AudioSpellTrigger
// Size: 0x23 (Inherited: 0x00)
struct FSTR_AudioSpellTrigger {
	struct USpellToolRecord* Spell_51_B7F9AC9246BB6E856A027BBE3E8575A4; // 0x00(0x08)
	struct FDialogueConversationReference AudioEvent_65_1173D74D4C3AB7F3356E1D81B254FA4E; // 0x08(0x10)
	bool IsSpell_54_C5148229431CA235FDD66BAE2E212908; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float Delay_57_2FEB0BC140EC2173DB0781B89EE8E2A6; // 0x1c(0x04)
	bool CoolDownOverride_64_E950C1234BE8F5C5FFB44AB96F96C1F7; // 0x20(0x01)
	bool DoOnce_60_28E3D2E94FB7793D6BF4598B1ECCB7CA; // 0x21(0x01)
	bool ClearOnComplete_62_0CE0D51E441FB20AFD29ADB798DD3768; // 0x22(0x01)
};

