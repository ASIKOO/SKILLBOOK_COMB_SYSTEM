/// 1.
// Search
protected:
	bool CheckPacket(TPacketHeader* pRetHeader);

// Add above
#ifdef ENABLE_SKILLBOOK_COMB_SYSTEM
public:
	bool SendSkillBookCombinationPacket(TItemPos* pPos, BYTE bAction);
#endif