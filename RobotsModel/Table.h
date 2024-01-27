/**
 * Project Untitled
 */
#pragma once

using namespace System;

namespace RobotsModel {
    public ref class Table {
    public:
        int Id;
        int Capacity;
        String^ Status;
        bool IsCleaned;
        bool IsAttended;
        int DinersNumber;
    };
}
