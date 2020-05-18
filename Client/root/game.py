''' 1. '''
# Search
		self.serverCommander = stringCommander.Analyzer()
		for serverCommandItem in serverCommandList.items():
			self.serverCommander.SAFE_RegisterCallBack(
				serverCommandItem[0], serverCommandItem[1]
			)

# Add above
		if app.ENABLE_SKILLBOOK_COMB_SYSTEM:
			serverCommandList["OpenSkillbookCombinationDialog"] = self.OpenSkillbookCombinationDialog

''' 2. '''
# Search
	def AskSafeboxPassword(self):
		self.interface.AskSafeboxPassword()

# Add below
	if app.ENABLE_SKILLBOOK_COMB_SYSTEM:
		def OpenSkillbookCombinationDialog(self):
			self.interface.OpenSkillbookCombinationDialog()