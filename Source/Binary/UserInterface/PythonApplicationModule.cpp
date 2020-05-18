/// 1.
// Add
#ifdef ENABLE_SKILLBOOK_COMB_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_SKILLBOOK_COMB_SYSTEM", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_SKILLBOOK_COMB_SYSTEM", 0);
#endif