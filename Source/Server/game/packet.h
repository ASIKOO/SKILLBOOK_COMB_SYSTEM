/// 1.
// Search
	HEADER_CG_LOGIN5_OPENID = 116, // OpenID : 클라이언트로부터 OpenID 인증키를 받는다.

// Add below
#if defined(__SKILLBOOK_COMB_SYSTEM__)
	HEADER_CG_SKILLBOOK_COMB = 151,
#endif

/// 2.
// Add to the bottom of the document above #pragma pack()
#if defined(__SKILLBOOK_COMB_SYSTEM__)
typedef struct SPacketCGSkillBookCombination
{
	BYTE bHeader;
	BYTE bAction;
	TItemPos CombItemGrid[SKILLBOOK_COMB_SLOT_MAX];
} TPacketCGSkillBookCombination;
#endif