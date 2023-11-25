//local
#include "include/SmartDashboard.h"
#include "Code_Gen_Model_ert_rtw\Code_Gen_Model.h"

void SmartDashboard::UpdateSDValues(){
        // frc::SmartDashboard::PutNumber("Raw_Drive_X", Code_Gen_Model_U.Drive_Joystick_X);
        // frc::SmartDashboard::PutNumber("Raw_Drive_Y", Code_Gen_Model_U.Drive_Joystick_Y);

        frc::SmartDashboard::PutNumber("FL_Steer_Module_Angle (adjusted)", Code_Gen_Model_B.FL_Steer_Module_Angle);
        frc::SmartDashboard::PutNumber("FR_Steer_Module_Angle (adjusted)", Code_Gen_Model_B.FR_Steer_Module_Angle);
        frc::SmartDashboard::PutNumber("BL_Steer_Module_Angle (adjusted)", Code_Gen_Model_B.BL_Steer_Module_Angle);
        frc::SmartDashboard::PutNumber("BR_Steer_Module_Angle (adjusted)", Code_Gen_Model_B.BR_Steer_Module_Angle);

        frc::SmartDashboard::PutNumber("FL_Drive_Motor_Speed", Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed);
        frc::SmartDashboard::PutNumber("FR_Drive_Motor_Speed", Code_Gen_Model_U.FrontRight_Drive_Motor_Speed);
        frc::SmartDashboard::PutNumber("BL_Drive_Motor_Speed", Code_Gen_Model_U.BackLeft_Drive_Motor_Speed);
        frc::SmartDashboard::PutNumber("BR_Drive_Motor_Speed", Code_Gen_Model_U.BackRight_Drive_Motor_Speed);

        frc::SmartDashboard::PutNumber("FL_Drive_Motor_Rev", Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev);
        frc::SmartDashboard::PutNumber("FR_Drive_Motor_Rev", Code_Gen_Model_U.FrontRight_Drive_Motor_Rev);
        frc::SmartDashboard::PutNumber("BL_Drive_Motor_Rev", Code_Gen_Model_U.BackLeft_Drive_Motor_Rev);
        frc::SmartDashboard::PutNumber("BR_Drive_Motor_Rev", Code_Gen_Model_U.BackRight_Drive_Motor_Rev);

        frc::SmartDashboard::PutNumber("Odometry_X_global_est_m", Code_Gen_Model_B.Odometry_X_global_est_m);
        frc::SmartDashboard::PutNumber("Odometry_Y_global_est_m", Code_Gen_Model_B.Odometry_Y_global_est_m);
        frc::SmartDashboard::PutNumber("Odometry_X_global_est_ft", Code_Gen_Model_B.Odometry_X_global_est_ft);
        frc::SmartDashboard::PutNumber("Odometry_Y_global_est_ft", Code_Gen_Model_B.Odometry_Y_global_est_ft);
        frc::SmartDashboard::PutNumber("Odometry_X_global_TEAR_ft", Code_Gen_Model_B.Odometry_X_global_TEAR_ft);
        frc::SmartDashboard::PutNumber("Odometry_Y_global_TEAR_ft", Code_Gen_Model_B.Odometry_Y_global_TEAR_ft);

        // frc::SmartDashboard::PutNumber("FL_Steer_DC", Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle);
        // frc::SmartDashboard::PutNumber("FR_Steer_DC", Code_Gen_Model_Y.FrontRight_Steer_DutyCycle);
        // frc::SmartDashboard::PutNumber("BL_Steer_DC", Code_Gen_Model_Y.BackLeft_Steer_DutyCycle);
        // frc::SmartDashboard::PutNumber("BR_Steer_DC", Code_Gen_Model_Y.BackRight_Steer_DutyCycle);

        frc::SmartDashboard::PutNumber("FL_Drive_DC", Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle);
        frc::SmartDashboard::PutNumber("FR_Drive_DC", Code_Gen_Model_Y.FrontRight_Drive_DutyCycle);
        frc::SmartDashboard::PutNumber("BL_Drive_DC", Code_Gen_Model_Y.BackLeft_Drive_DutyCycle);
        frc::SmartDashboard::PutNumber("BR_Drive_DC", Code_Gen_Model_Y.BackRight_Drive_DutyCycle);

        frc::SmartDashboard::PutNumber("Gyro_Angle", Code_Gen_Model_U.Gyro_Angle);
        frc::SmartDashboard::PutNumber("Gyro_Angle_Adjusted", Code_Gen_Model_B.Gyro_Angle_Adjusted);

        frc::SmartDashboard::PutNumber("Steering_Abs_Cmd", Code_Gen_Model_B.Steering_Abs_Cmd);
        frc::SmartDashboard::PutNumber("Steering_Rel_Cmd", Code_Gen_Model_B.Steering_Rel_Cmd);
        frc::SmartDashboard::PutNumber("Steering_Localized_PID", Code_Gen_Model_B.Steering_Localized_PID);
        frc::SmartDashboard::PutNumber("Steering_Localized_Cmd", Code_Gen_Model_B.Steering_Localized_Cmd);
        frc::SmartDashboard::PutNumber("Translation_Angle", Code_Gen_Model_B.Translation_Angle);
        frc::SmartDashboard::PutNumber("Translation_Speed", Code_Gen_Model_B.Translation_Speed);

        frc::SmartDashboard::PutBoolean("Is_Absolute_Translation", Code_Gen_Model_B.Is_Absolute_Translation);
        frc::SmartDashboard::PutBoolean("Is_Absolute_Steering", Code_Gen_Model_B.Is_Absolute_Steering);

        frc::SmartDashboard::PutNumber("FL_Desired_Wheel_Speed", Code_Gen_Model_B.FL_Desired_Wheel_Speed);
        frc::SmartDashboard::PutNumber("FL_Desired_Module_Angle", Code_Gen_Model_B.FL_Desired_Module_Angle);
        frc::SmartDashboard::PutNumber("FR_Desired_Wheel_Speed", Code_Gen_Model_B.FR_Desired_Wheel_Speed);
        frc::SmartDashboard::PutNumber("FR_Desired_Module_Angle", Code_Gen_Model_B.FR_Desired_Module_Angle);

        frc::SmartDashboard::PutNumber("BL_Desired_Wheel_Speed", Code_Gen_Model_B.BL_Desired_Wheel_Speed);
        frc::SmartDashboard::PutNumber("BL_Desired_Module_Angle", Code_Gen_Model_B.BL_Desired_Module_Angle);
        frc::SmartDashboard::PutNumber("BR_Desired_Wheel_Speed", Code_Gen_Model_B.BR_Desired_Wheel_Speed);
        frc::SmartDashboard::PutNumber("BR_Desired_Module_Angle", Code_Gen_Model_B.BR_Desired_Module_Angle);

        // frc::SmartDashboard::PutNumber("Translation_Angle", Code_Gen_Model_B.Translation_Angle);
        // frc::SmartDashboard::PutNumber("Steering_Localized_Cmd", Code_Gen_Model_B.Steering_Localized_Cmd);
        // frc::SmartDashboard::PutNumber("Translation_Steering_Cmd", Code_Gen_Model_B.Translation_Steering_Cmd);

        // frc::SmartDashboard::PutBoolean("Is_Absolute_Translation", Code_Gen_Model_U.Is_Absolute_Translation);
        // frc::SmartDashboard::PutBoolean("Is_Absolute_Steering", Code_Gen_Model_U.Is_Absolute_Steering);
        // frc::SmartDashboard::PutBoolean("Is_Boost_Trigger_Pulled", Code_Gen_Model_U.Is_Boost_Trigger_Pulled);
        
        frc::SmartDashboard::UpdateValues();
}
void SmartDashboard::PollSDValues() {
        // VARIABLE = frc::SmartDashboard::GetNumber("VARIABLE", SAFEDEFAULT_VALUE);
        // Drive_Motor_Control_Sign_Change_Deadband = frc::SmartDashboard::GetNumber("Drive_Motor_Control_Sign_Change_Deadband", 1500);        
        // Boost_Trigger_Increasing_Limit = frc::SmartDashboard::GetNumber("Boost_Trigger_Increasing_Limit", 0);
        // Boost_Trigger_Decreasing_Limit = frc::SmartDashboard::GetNumber("Boost_Trigger_Decreasing_Limit", 0);
        // Translation_Speed_Rate_Limit_Inc = frc::SmartDashboard::GetNumber("Translation_Speed_Rate_Limit_Inc", 0);
        // Translation_Speed_Rate_Limit_Dec = frc::SmartDashboard::GetNumber("Translation_Speed_Rate_Limit_Dec", 0);
        Odometry_X_Y_TEAR = frc::SmartDashboard::GetNumber("Odometry_X_Y_TEAR", false);

}
void SmartDashboard::InitPolledSDValues() {
        // frc::SmartDashboard::PutNumber("VARIABLE", VARIABLE);
        // frc::SmartDashboard::PutNumber("Drive_Motor_Control_Sign_Change_Deadband", Drive_Motor_Control_Sign_Change_Deadband);        
        // frc::SmartDashboard::PutNumber("Boost_Trigger_Increasing_Limit", Boost_Trigger_Increasing_Limit);
        // frc::SmartDashboard::PutNumber("Boost_Trigger_Decreasing_Limit", Boost_Trigger_Decreasing_Limit);
        // frc::SmartDashboard::PutNumber("Translation_Speed_Rate_Limit_Inc", Translation_Speed_Rate_Limit_Inc);
        // frc::SmartDashboard::PutNumber("Translation_Speed_Rate_Limit_Dec", Translation_Speed_Rate_Limit_Dec);
        frc::SmartDashboard::PutNumber("Odometry_X_Y_TEAR", false);
}