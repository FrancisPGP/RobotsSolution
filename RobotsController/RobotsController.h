#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace RobotsModel;

namespace RobotsController {
	public ref class Controller
	{
	private:
		//Miembro estático o variable de clase
		static List<RobotWaiter^>^ robotsListDB = gcnew List<RobotWaiter^>(); 

	public:
		static int AddRobotWaiter(RobotWaiter^ robot);
		static void UpdateRobotWaiter(RobotWaiter^ robot);
		static void DeleteRobotWaiter(int robotWaiterId);
		static RobotWaiter^ QueryRobotWaiterById(int robotWaiterId);
		static List<RobotWaiter^>^ QueryAllRobotWaiters();
	};
}
