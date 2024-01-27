#include "pch.h"
#include "RobotsMainForm.h"

using namespace System;
using namespace System::Windows::Forms;

int Main(array<System::String ^> ^args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    RobotsGUIview::RobotsMainForm form;
    Application::Run(% form);
    return 0;
}
