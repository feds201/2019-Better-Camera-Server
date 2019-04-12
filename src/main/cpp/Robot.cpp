/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

#include"frc/WPILib.h"
#include"cameraserver/CameraServer.h"

void Robot::RobotInit() {

  mjpegerver.SetSource(camera);  //Made MJPG server to host camera feed from roborio with more compression and a custom resolution
  mjpegerver.SetFPS(15);
  mjpegerver.SetResolution(480, 270);
  mjpegerver.SetCompression(70);
}

void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {
 
}

void Robot::AutonomousPeriodic() {
 
}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
