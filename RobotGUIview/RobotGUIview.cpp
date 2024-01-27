#include "pch.h"
#include "RobotsMainForm.h"

using namespace System;
using namespace System::Windows::Forms;

int Main(array<System::String ^> ^args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    RobotGUIview::RobotsMainForm form;
    Application::Run();

    return 0;
}
