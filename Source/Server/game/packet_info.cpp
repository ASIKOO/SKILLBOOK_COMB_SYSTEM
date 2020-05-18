/// 1.
// Search
	Set(HEADER_CG_STATE_CHECKER, sizeof(BYTE), "ServerStateCheck", false);

// Add below
#if defined(__SKILLBOOK_COMB_SYSTEM__)
	Set(HEADER_CG_SKILLBOOK_COMB, sizeof(TPacketCGSkillBookCombination), "SkillBookCombination", true);
#endif