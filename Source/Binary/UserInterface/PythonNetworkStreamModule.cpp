/// 1.
// Search
void initnet()

// Add above
#ifdef ENABLE_SKILLBOOK_COMB_SYSTEM
PyObject* netSendSkillBookCombinationPacket(PyObject* poSelf, PyObject* poArgs)
{
	TItemPos CombItemPos[SKILLBOOK_COMB_SLOT_MAX];
	PyObject* pDic;
	if (!PyTuple_GetObject(poArgs, 0, &pDic))
		return Py_BuildException();

	BYTE bAction;
	if (!PyTuple_GetByte(poArgs, 1, &bAction))
		return Py_BuildException();

	int pos = 0;
	PyObject* key, * value;
	int size = PyDict_Size(pDic);

	while (PyDict_Next(pDic, &pos, &key, &value))
	{
		int i = PyInt_AsLong(key);
		if (i > SKILLBOOK_COMB_SLOT_MAX)
			return Py_BuildException();

		if (!PyTuple_GetByte(value, 0, &CombItemPos[i].window_type)
			|| !PyTuple_GetInteger(value, 1, &CombItemPos[i].cell))
		{
			return Py_BuildException();
		}
	}

	CPythonNetworkStream& rns = CPythonNetworkStream::Instance();
	rns.SendSkillBookCombinationPacket(CombItemPos, bAction);

	return Py_BuildNone();
}
#endif

/// 2.
// Search
		{ NULL, NULL, NULL },

// Add above
#if defined(ENABLE_SKILLBOOK_COMB_SYSTEM)
		{ "SendSkillBookCombinationPacket", netSendSkillBookCombinationPacket, METH_VARARGS },
#endif