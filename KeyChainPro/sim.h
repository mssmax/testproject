#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols

class CSimApp : public CWinApp
{
public:
	CSimApp();

	JET_ERR InitDatabase();
	void RegisterAutoRun();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CSimApp theApp;