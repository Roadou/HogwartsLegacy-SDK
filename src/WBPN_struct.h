// Enum WBPN.EWBPNOAuthPrefer
enum class EWBPNOAuthPrefer : uint8 {
	NONE = 0,
	SIGNIN = 1,
	REGISTER = 2,
	EWBPNOAuthPrefer_MAX = 3
};

// Enum WBPN.EWBPNPlatformLinkType
enum class EWBPNPlatformLinkType : uint8 {
	WBPN_PLATFORM_INVALID = 0,
	WBPN_PLATFORM_DISCORD = 1,
	WBPN_PLATFORM_EPIC = 2,
	WBPN_PLATFORM_MAX = 3
};

// Enum WBPN.EFriendInvitationState
enum class EFriendInvitationState : uint8 {
	FRIEND_INVITE_STATE_OPEN = 0,
	FRIEND_INVITE_STATE_ACCEPTED = 1,
	FRIEND_INVITE_STATE_CANCELLED = 2,
	FRIEND_INVITE_STATE_DECLINED = 3,
	FRIEND_INVITE_STATE_MAX = 4
};

// ScriptStruct WBPN.WBPNAccountContactDetails
// Size: 0x68 (Inherited: 0x00)
struct FWBPNAccountContactDetails {
	struct FString m_ownerId; // 0x00(0x10)
	struct FString m_contactId; // 0x10(0x10)
	bool m_blocked; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FWBPNAccountDisplayDetails m_account; // 0x28(0x40)
};

// ScriptStruct WBPN.WBPNAccountDisplayDetails
// Size: 0x40 (Inherited: 0x00)
struct FWBPNAccountDisplayDetails {
	struct FString m_accountId; // 0x00(0x10)
	struct FString m_username; // 0x10(0x10)
	struct FWBPNAvatarDetails m_avatar; // 0x20(0x20)
};

// ScriptStruct WBPN.WBPNAvatarDetails
// Size: 0x20 (Inherited: 0x00)
struct FWBPNAvatarDetails {
	struct FString m_name; // 0x00(0x10)
	struct FString m_imageUrl; // 0x10(0x10)
};

// ScriptStruct WBPN.WBPNAccountLookupData
// Size: 0x58 (Inherited: 0x00)
struct FWBPNAccountLookupData {
	struct FString m_id; // 0x00(0x10)
	struct FString m_publicId; // 0x10(0x10)
	struct FString m_username; // 0x20(0x10)
	struct FWBPNAvatarDetails m_avatar; // 0x30(0x20)
	struct FDateTime m_lastLogin; // 0x50(0x08)
};

// ScriptStruct WBPN.WBPNAccount
// Size: 0x80 (Inherited: 0x00)
struct FWBPNAccount {
	struct FString m_id; // 0x00(0x10)
	struct FDateTime m_createdAt; // 0x10(0x08)
	struct FDateTime m_updatedAt; // 0x18(0x08)
	struct FString m_publicId; // 0x20(0x10)
	bool m_isComplete; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString m_username; // 0x38(0x10)
	struct FString m_locale; // 0x48(0x10)
	struct FWBPNAvatarDetails m_avatar; // 0x58(0x20)
	struct FDateTime m_lastLogin; // 0x78(0x08)
};

// ScriptStruct WBPN.WBPNData
// Size: 0x28 (Inherited: 0x00)
struct FWBPNData {
	bool m_isLoggedIn; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString m_deviceFlowVerificationUrl; // 0x08(0x10)
	struct FString m_deviceFlowCode; // 0x18(0x10)
};

// ScriptStruct WBPN.WBPNPaginatedFriendInvitations
// Size: 0x20 (Inherited: 0x00)
struct FWBPNPaginatedFriendInvitations {
	int32_t m_total; // 0x00(0x04)
	int32_t m_page; // 0x04(0x04)
	int32_t m_pageSize; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FWBPNFriendInvitationDetails> m_invitations; // 0x10(0x10)
};

// ScriptStruct WBPN.WBPNFriendInvitationDetails
// Size: 0x78 (Inherited: 0x00)
struct FWBPNFriendInvitationDetails {
	struct FString m_id; // 0x00(0x10)
	struct FString m_sentFrom; // 0x10(0x10)
	struct FString m_sentTo; // 0x20(0x10)
	enum class EFriendInvitationState m_state; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FWBPNAccountDisplayDetails m_account; // 0x38(0x40)
};

// ScriptStruct WBPN.WBPNFriendInvitation
// Size: 0x38 (Inherited: 0x00)
struct FWBPNFriendInvitation {
	struct FDateTime m_createdAt; // 0x00(0x08)
	struct FDateTime m_updatedAt; // 0x08(0x08)
	struct FString m_sentFrom; // 0x10(0x10)
	struct FString m_sentTo; // 0x20(0x10)
	enum class EFriendInvitationState m_state; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct WBPN.WBPNPaginatedFriendDetails
// Size: 0x20 (Inherited: 0x00)
struct FWBPNPaginatedFriendDetails {
	int32_t m_total; // 0x00(0x04)
	int32_t m_page; // 0x04(0x04)
	int32_t m_pageSize; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FWBPNFriendDetails> m_friends; // 0x10(0x10)
};

// ScriptStruct WBPN.WBPNFriendDetails
// Size: 0x48 (Inherited: 0x00)
struct FWBPNFriendDetails {
	struct FWBPNAccountDisplayDetails m_account; // 0x00(0x40)
	struct FDateTime m_createdAt; // 0x40(0x08)
};

// ScriptStruct WBPN.WBPNGenerateDeviceTokenResponse
// Size: 0x40 (Inherited: 0x00)
struct FWBPNGenerateDeviceTokenResponse {
	struct FString m_url; // 0x00(0x10)
	struct FString m_code; // 0x10(0x10)
	struct FString m_deviceToken; // 0x20(0x10)
	float m_pollInterval; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FDateTime m_expiresAt; // 0x38(0x08)
};

// ScriptStruct WBPN.WBPNLoginResponse
// Size: 0xb8 (Inherited: 0x00)
struct FWBPNLoginResponse {
	struct FString m_accessToken; // 0x00(0x10)
	int32_t m_expiresIn; // 0x10(0x04)
	bool m_mfaRequired; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString m_refreshToken; // 0x18(0x10)
	int32_t m_refreshExpiresIn; // 0x28(0x04)
	char pad_2C[0x8c]; // 0x2c(0x8c)
};

// ScriptStruct WBPN.WBPNWizardingWorldLinkData
// Size: 0x50 (Inherited: 0x00)
struct FWBPNWizardingWorldLinkData {
	struct FString m_Source; // 0x00(0x10)
	struct FString m_iss; // 0x10(0x10)
	struct FString m_groupHash; // 0x20(0x10)
	struct FString m_groupLink; // 0x30(0x10)
	struct TArray<struct FWBPNWizardingWorldLinkAttributeData> m_attributes; // 0x40(0x10)
};

// ScriptStruct WBPN.WBPNWizardingWorldLinkAttributeData
// Size: 0x40 (Inherited: 0x00)
struct FWBPNWizardingWorldLinkAttributeData {
	struct FString m_keyname; // 0x00(0x10)
	struct FString m_value; // 0x10(0x10)
	struct FString m_iss; // 0x20(0x10)
	struct FString m_issuerKeynameHash; // 0x30(0x10)
};

// ScriptStruct WBPN.WBPNWizardingWorldAttributeListData
// Size: 0x10 (Inherited: 0x00)
struct FWBPNWizardingWorldAttributeListData {
	struct TArray<struct FWBPNWizardingWorldAttributeData> m_attributes; // 0x00(0x10)
};

// ScriptStruct WBPN.WBPNWizardingWorldAttributeData
// Size: 0x30 (Inherited: 0x00)
struct FWBPNWizardingWorldAttributeData {
	struct FString m_keyname; // 0x00(0x10)
	struct FString m_value; // 0x10(0x10)
	struct FString m_issuer; // 0x20(0x10)
};

// ScriptStruct WBPN.WBPNWizardingWorldData
// Size: 0x50 (Inherited: 0x00)
struct FWBPNWizardingWorldData {
	struct FString m_sourceUserId; // 0x00(0x10)
	struct FString m_Source; // 0x10(0x10)
	struct FString m_issuer; // 0x20(0x10)
	struct FString m_groupHash; // 0x30(0x10)
	struct TArray<struct FWBPNWizardingWorldLinkedAccountData> m_linkedAccounts; // 0x40(0x10)
};

// ScriptStruct WBPN.WBPNWizardingWorldLinkedAccountData
// Size: 0x48 (Inherited: 0x00)
struct FWBPNWizardingWorldLinkedAccountData {
	struct FString m_Source; // 0x00(0x10)
	struct FString m_iss; // 0x10(0x10)
	bool m_isParent; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString m_groupHash; // 0x28(0x10)
	struct FString m_groupLink; // 0x38(0x10)
};

