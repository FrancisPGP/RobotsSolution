/**
 * Project Untitled
 */
#pragma once

#ifndef _POINT_H
#define _POINT_H

namespace RobotsModel {
    public ref class Point {
        private: 
            double x;
            double y;

        public:
            property double X {
                double get() { return x; }
                void set(double value) { x = value; }
            }
            property double Y {
                double get() { return y; }
                void set(double value) { y = value; }
            }
    };
}
#endif //_POINT_H