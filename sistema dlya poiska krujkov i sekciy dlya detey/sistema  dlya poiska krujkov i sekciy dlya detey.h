
// sistema  dlya poiska krujkov i sekciy dlya detey.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CsistemadlyapoiskakrujkovisekciydlyadeteyApp:
// Сведения о реализации этого класса: sistema  dlya poiska krujkov i sekciy dlya detey.cpp
//

class CsistemadlyapoiskakrujkovisekciydlyadeteyApp : public CWinApp
{
public:
	CsistemadlyapoiskakrujkovisekciydlyadeteyApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CsistemadlyapoiskakrujkovisekciydlyadeteyApp theApp;
