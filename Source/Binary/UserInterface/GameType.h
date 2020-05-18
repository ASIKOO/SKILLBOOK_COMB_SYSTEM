/// 1.
// Search
enum EDragonSoulStepTypes
{
	DRAGON_SOUL_STEP_LOWEST,
	DRAGON_SOUL_STEP_LOW,
	DRAGON_SOUL_STEP_MID,
	DRAGON_SOUL_STEP_HIGH,
	DRAGON_SOUL_STEP_HIGHEST,
	DRAGON_SOUL_STEP_MAX,
};

// Add below
#if defined(ENABLE_SKILLBOOK_COMB_SYSTEM)
const DWORD c_SkillBook_Comb_Size = 10;
enum ESkillBookComb
{
	SKILLBOOK_COMB_SLOT_MAX = c_SkillBook_Comb_Size
};
#endif