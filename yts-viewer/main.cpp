#include <Windows.h>
#include "main.h"
#pragma comment( lib, "urlmon.lib" )

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
INT WINAPI WinMain( HINSTANCE, HINSTANCE, LPSTR, INT ) {
	Application::EnableVisualStyles();
	Application::Run( gcnew ytsviewer::main() );
	return FALSE;
}