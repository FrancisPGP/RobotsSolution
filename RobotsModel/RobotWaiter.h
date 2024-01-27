/**
 * Project Untitled
 */
#pragma once

#include "Point.h"

//#ifndef _ROBOTWAITER_H
//#define _ROBOTWAITER_H


using namespace System;

namespace RobotsModel {
    public ref class RobotWaiter {
    public:
        void Move();
    private:
        int id;
        String^ brand;
        String^ model;
        double loadCapacity;
        int batteryLevel;
        double speed;
        String^ status;
        array<Byte>^ photo;
        Point^ position;

    public:
        property int Id {
            int get() { return id; }
            void set(int value) { id = value; }
        }
        property String^ Brand {
            String^ get() { return brand; }
            void set(String^ value) { brand = value; }
        }
        property String^ Model {
            String^ get() { return model; }
            void set(String^ value) { model = value; }
        }
        property double LoadCapacity {
            double get() { return loadCapacity; }
            void set(double value) { loadCapacity = value; }
        }
        property int BatteryLevel {
            int get() { return batteryLevel; }
            void set(int value) { batteryLevel = value; }
        }
        property double Speed {
            double get() { return speed; }
            void set(double value) { speed = value; }
        }
        property String^ Status {
            String^ get() { return status; }
            void set(String^ value) { status = value; }
        }
        property array<Byte>^ Photo {
            array<Byte>^ get() { return photo; }
            void set(array<Byte>^ value) { photo = value; }
        }
        property Point^ Position {
            Point^ get() { return position; }
            void set(Point^ value) { position = value; }
        }
    };
}
//#endif //_ROBOTWAITER_H