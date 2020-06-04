/// 1.
// Add to the bottom of the document
#ifdef ENABLE_SKILLBOOK_COMB_SYSTEM
bool CPythonNetworkStream::SendSkillBookCombinationPacket(TItemPos* pPos, BYTE bAction)
{
	TPacketCGSkillBookCombination SkillBookCombCGPacket;
	SkillBookCombCGPacket.bHeader = HEADER_CG_SKILLBOOK_COMB;
	SkillBookCombCGPacket.bAction = bAction;
	memcpy(SkillBookCombCGPacket.CombItemGrid, pPos, sizeof(TItemPos) * SKILLBOOK_COMB_SLOT_MAX);

	if (!Send(sizeof(SkillBookCombCGPacket), &SkillBookCombCGPacket))
		return false;

	return SendSequece();
}
#endif
