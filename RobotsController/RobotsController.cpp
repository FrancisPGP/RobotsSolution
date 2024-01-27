#include "pch.h"

#include "RobotsController.h"

int RobotsController::Controller::AddRobotWaiter(RobotWaiter^ robot) {
    //robotsListDB:representa ala base de datos del robot
    robotsListDB->Add(robot);
    return 1;
}

void RobotsController::Controller::UpdateRobotWaiter(RobotWaiter^ robot) {
    for (int i = 0; i < robotsListDB->Count; i++) {
        if (robotsListDB[i]->Id == robot->Id) {
            robotsListDB[i] = robot;
            return;
        }
    }
}

void RobotsController::Controller::DeleteRobotWaiter(int robotWaiterId) {
    for (int i = 0; i < robotsListDB->Count; i++) {
        if (robotsListDB[i]->Id == robotWaiterId) {
            robotsListDB->RemoveAt(i);
            return;//a penas haya eliminado termina
        }
    }
}

RobotWaiter^ RobotsController::Controller::QueryRobotWaiterById(int robotWaiterId) {
    RobotWaiter^ robotWaiter = nullptr;
    for (int i = 0; i < robotsListDB->Count; i++) {
        if (robotsListDB[i]->Id == robotWaiterId) {
            robotWaiter = robotsListDB[i];
            return robotWaiter;
        }
        //esta es otra forma de hacerlo: break y luego return
    }
    return robotWaiter;
}

List<RobotWaiter^>^ RobotsController::Controller::QueryAllRobotWaiters() {
    return robotsListDB;
}
