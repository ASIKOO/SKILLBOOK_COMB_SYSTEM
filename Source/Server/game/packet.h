/// 1.
// Search
	HEADER_CG_LOGIN5_OPENID = 116, // OpenID : Ŭ���̾�Ʈ�κ��� OpenID ����Ű�� �޴´�.

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