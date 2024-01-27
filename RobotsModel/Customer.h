/**
 * Project Untitled
 */
#pragma once

using namespace System;

namespace RobotsModel {
    public ref class Customer {
    public:
        property int Id;
        property String^ Nombre;
        property String^ DocumentNumber;
        property String^ DocumentType;
        property bool BabyChairRequired;
        property int CustomerPoints;
    };
}
