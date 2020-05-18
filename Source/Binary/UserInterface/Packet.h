/// 1.
// Search
	HEADER_CG_LOGIN5_OPENID = 116, // OpenID : ����� ���� ����Ű�� ������ ����.

// Add below
#ifdef ENABLE_SKILLBOOK_COMB_SYSTEM
	HEADER_CG_SKILLBOOK_COMB = 151,
#endif

/// 2.
// Add to the bottom of the document above #pragma pack(pop)
#if defined(ENABLE_SKILLBOOK_COMB_SYSTEM)
typedef struct SPacketCGSkillBookCombination
{
	BYTE bHeader;
	BYTE bAction;
	TItemPos CombItemGrid[SKILLBOOK_COMB_SLOT_MAX];
} TPacketCGSkillBookCombination;
#endif