/// 1.
// Search
	void Roulette(LPCHARACTER ch, const char* c_pData);

// Add below
#if defined(__SKILLBOOK_COMB_SYSTEM__)
	bool SkillBookCombination(LPCHARACTER ch, TItemPos(&CombItemGrid)[SKILLBOOK_COMB_SLOT_MAX], BYTE bAction);
#endif