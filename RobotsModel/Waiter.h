/**
 * Project Untitled
 */
#pragma once
#include "Employee.h"

using namespace System;
using namespace System::Collections::Generic;

namespace RobotsModel {
    public ref class Waiter : public Employee {
    public:
        String^ ServiceArea;
    };
}
