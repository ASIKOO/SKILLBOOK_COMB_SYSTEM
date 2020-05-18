''' 1. '''
# Add
if app.ENABLE_SKILLBOOK_COMB_SYSTEM:
	import uiSkillBookCombination

''' 2. '''
# Search @ def __init__
		self.guildScoreBoardDict = {}
		self.equipmentDialogDict = {}

# Add below
		if app.ENABLE_SKILLBOOK_COMB_SYSTEM:
			self.wndSkillBookCombination = None

''' 3. '''
# Search
		self.wndMall = uiSafebox.MallWindow()
		wndChatLog = uiChat.ChatLogWindow()
		wndChatLog.BindInterface(self)
		self.wndChatLog = wndChatLog

# Add above
		if app.ENABLE_SKILLBOOK_COMB_SYSTEM:
			self.wndSkillBookCombination = uiSkillBookCombination.SkillBookCombinationWindow()

''' 4. '''
# Search
		self.wndCharacter.SetSkillToolTip(self.tooltipSkill)
		self.wndTaskBar.SetItemToolTip(self.tooltipItem)
		self.wndTaskBar.SetSkillToolTip(self.tooltipSkill)
		self.wndGuild.SetSkillToolTip(self.tooltipSkill)

# Add above
		if app.ENABLE_SKILLBOOK_COMB_SYSTEM:
			self.wndSkillBookCombination.SetInven(self.wndInventory)

''' 5. '''
# Search
		# ACCESSORY_REFINE_ADD_METIN_STONE
		if self.wndItemSelect:
			self.wndItemSelect.Destroy()
		# END_OF_ACCESSORY_REFINE_ADD_METIN_STONE

# Add below
		if app.ENABLE_SKILLBOOK_COMB_SYSTEM:
			self.wndSkillBookCombination.Destroy()
			del self.wndSkillBookCombination

''' 6. '''
# Search
	def CommandCloseSafebox(self):
		self.wndSafebox.CommandCloseSafebox()

# Add below
	if app.ENABLE_SKILLBOOK_COMB_SYSTEM:
		def OpenSkillbookCombinationDialog(self):
			if self.wndSkillBookCombination.IsShow():
				return

			if self.privateShopBuilder.IsShow():
				chat.AppendChat(chat.CHAT_TYPE_INFO, localeInfo.COMB_NOTICE_NOT_OPEN)
				return

			self.wndSkillBookCombination.Open()
			self.wndSkillBookCombination.Show()

			if not self.wndInventory.IsShow():
				self.wndInventory.Show()

''' 7. '''
# Search @ def HideAllWindows
		if self.wndGuild:
			self.wndGuild.Hide()

		if self.wndExpandedTaskBar:
			self.wndExpandedTaskBar.Hide()

# Add below
		if app.ENABLE_SKILLBOOK_COMB_SYSTEM:
			if self.wndSkillBookCombination:
				self.wndSkillBookCombination.Hide()

''' 8. '''
# Search @ def OpenPrivateShopInputNameDialog
			inputDialog = uiCommon.InputDialog()

# Add above
			if app.ENABLE_SKILLBOOK_COMB_SYSTEM:
				if self.wndSkillBookCombination.IsShow():
					chat.AppendChat(chat.CHAT_TYPE_INFO, localeInfo.COMB_NOTICE)
					return

''' 9. '''
# Search @ def OpenPrivateShopBuilder
			self.privateShopBuilder.Open(self.inputDialog.GetText())

# Add above
			if app.ENABLE_SKILLBOOK_COMB_SYSTEM:
				if self.wndSkillBookCombination.IsShow():
					chat.AppendChat(chat.CHAT_TYPE_INFO, localeInfo.COMB_NOTICE)
					return