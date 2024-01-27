#include "pch.h"

#include "RobotsController.h"

int RobotsController::Controller::AddRobotWaiter(RobotWaiter^ robot)
{
    robotsListDB->Add(robot);
    return 1;
}

void RobotsController::Controller::UpdateRobotWaiter(RobotWaiter^ robot)
{
    for (int i = 0; i < robotsListDB->Count; i++) {
        if (robotsListDB[i]->Id == robot->Id)
            robotsListDB[i] = robot;
    }
}

void RobotsController::Controller::DeleteRobotWaiter(int robotWaiterId)
{
    for (int i = 0; i < robotsListDB->Count; i++) {
        if (robotsListDB[i]->Id == robotWaiterId)
            robotsListDB->RemoveAt(i);
    }
}

RobotWaiter^ RobotsController::Controller::QueryRobotWaiterById(int robotWaiterId)
{
    RobotWaiter^ robotWaiter = nullptr;
    for (int i = 0; i < robotsListDB->Count; i++) {
        if (robotsListDB[i]->Id == robotWaiterId)
            robotWaiter = robotsListDB[i];
    }
    return robotWaiter;
}

List<RobotWaiter^>^ RobotsController::Controller::QueryAllRobotWaiters()
{
    return robotsListDB;
}
