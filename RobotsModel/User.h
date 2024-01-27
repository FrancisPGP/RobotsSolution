/**
 * Project Untitled
 */
#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace RobotsModel {
    public ref class User {
    public:
        int Id;
        String^ Name;
        String^ LastName;
        String^ Email;
        String^ Username;
        String^ Password;
        String^ Type;
        String^ Status;
    };
}
