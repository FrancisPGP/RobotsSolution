/**
 * Project Untitled
 */
#pragma once
#include "pch.h"

using namespace System;

namespace RobotsModel {
    public ref class Dish {
    public:
        int Id;
        String^ Name;
        double Price;
        String^ Group;
    };
}