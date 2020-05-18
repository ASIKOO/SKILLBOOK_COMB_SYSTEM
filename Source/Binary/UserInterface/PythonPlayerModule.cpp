/// 1.
// Add to the bottom of the document above }
#if defined(ENABLE_SKILLBOOK_COMB_SYSTEM)
	PyModule_AddIntConstant(poModule, "SKILLBOOK_COMB_SLOT_MAX", c_SkillBook_Comb_Size);
#endif