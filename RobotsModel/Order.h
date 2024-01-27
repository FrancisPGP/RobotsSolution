/**
 * Project Untitled
 */
#pragma once
using namespace System;

namespace RobotsModel {
    public ref class Order {
    public:
        int Id;
        String^ Status;
        DateTime^ InitDateTime;
        DateTime^ EndDateTime;
    };
}
