/**
 * Project Untitled
 */
#pragma once
#include "Employee.h"

using namespace System;

namespace RobotsModel {
    public ref class Chef : public Employee {
    public:
        property String^ Specialization;
    };
}
