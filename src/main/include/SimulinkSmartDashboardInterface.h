// This file has been auto generated from a Matlab script
// Do not manually edit since changes will be lost
#include <frc/smartdashboard/SmartDashboard.h>
#include <networktables/NetworkTable.h>
#include <networktables/RawTopic.h>
#include <networktables/NetworkTableInstance.h>
#include "Code_Gen_Model_ert_rtw\Code_Gen_Model.h"
 
class SimulinkSmartDashboardInterface {
    public:
        void InitSmartDashboardInterface();
        void SmartDashboardCallback();
    private:
        // Parameters
        nt::NetworkTableEntry __Boost_Trigger_Decreasing_Limit__Entry;
        nt::NetworkTableEntry __Boost_Trigger_High_Speed__Entry;
        nt::NetworkTableEntry __Boost_Trigger_Increasing_Limit__Entry;
        nt::NetworkTableEntry __Boost_Trigger_Low_Speed__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_D__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_D_FilterCoeff__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_D_LL__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_D_UL__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_FF__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_I__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_I_LL__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_I_UL__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_P__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_Sign_Change_Deadband__Entry;
        nt::NetworkTableEntry __Odometry_Desired_X__Entry;
        nt::NetworkTableEntry __Odometry_Desired_Y__Entry;
        nt::NetworkTableEntry __Odometry_Reset_IC__Entry;
        nt::NetworkTableEntry __Odometry_X_Y_TEAR__Entry;
        nt::NetworkTableEntry __Spline_Capture_Radius__Entry;
        nt::NetworkTableEntry __Spline_Last_Pose_Distance_to_Velocity_Gain__Entry;
        nt::NetworkTableEntry __Spline_Lookahead_Dist__Entry;
        nt::NetworkTableEntry __Spline_Max_Centripital_Acceleration__Entry;
        nt::NetworkTableEntry __Spline_Pose_Num_Before_End_Reduce_Speed__Entry;
        nt::NetworkTableEntry __Spline_Velocity_Multiplier_TEST__Entry;
        nt::NetworkTableEntry __Steering_Abs_Deadband_Range__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_D__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_D_FilterCoeff__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_D_LL__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_D_UL__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_Deadzone__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_I__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_I_LL__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_I_UL__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_P__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_Total_LL__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_Total_UL__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd_Approach_Zero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd_Approach_Zero_Final_Thresh__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd_NonZero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd_NonZero_Final_Scale_Factor__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd_Rate_Limit_Dec__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd_Rate_Limit_Inc__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_D__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_D_FilterCoeff__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_D_LL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_D_UL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_I__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_I_LL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_I_UL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_P__Entry;
        nt::NetworkTableEntry __Steering_Relative_Gain__Entry;
        nt::NetworkTableEntry __Translation_Speed_Approach_Zero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Translation_Speed_Approach_Zero_Final_Thresh__Entry;
        nt::NetworkTableEntry __Translation_Speed_NonZero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Translation_Speed_NonZero_Final_Scale_Factor__Entry;
        nt::NetworkTableEntry __Translation_Speed_Rate_Limit_Inc__Entry;
 
        // Inports
        nt::NetworkTableEntry __GameState__Entry;
        nt::NetworkTableEntry __Steer_Joystick_X__Entry;
        nt::NetworkTableEntry __Steer_Joystick_Y__Entry;
        nt::NetworkTableEntry __Drive_Joystick_X__Entry;
        nt::NetworkTableEntry __Drive_Joystick_Y__Entry;
        nt::NetworkTableEntry __Is_Boost_Trigger_Pulled__Entry;
        nt::NetworkTableEntry __Gyro_Angle__Entry;
        nt::NetworkTableEntry __FrontLeft_Drive_Motor_Speed__Entry;
        nt::NetworkTableEntry __FrontRight_Drive_Motor_Speed__Entry;
        nt::NetworkTableEntry __BackLeft_Drive_Motor_Speed__Entry;
        nt::NetworkTableEntry __BackRight_Drive_Motor_Speed__Entry;
        nt::NetworkTableEntry __FrontLeft_Steer_Rev__Entry;
        nt::NetworkTableEntry __FrontRight_Steer_Rev__Entry;
        nt::NetworkTableEntry __BackLeft_Steer_Rev__Entry;
        nt::NetworkTableEntry __BackRight_Steer_Rev__Entry;
        nt::NetworkTableEntry __FrontLeft_Turn_Offset__Entry;
        nt::NetworkTableEntry __FrontRight_Turn_Offset__Entry;
        nt::NetworkTableEntry __BackLeft_Turn_Offset__Entry;
        nt::NetworkTableEntry __BackRight_Turn_Offset__Entry;
        nt::NetworkTableEntry __Is_Absolute_Steering__Entry;
        nt::NetworkTableEntry __Is_Absolute_Translation__Entry;
        nt::NetworkTableEntry __FrontLeft_Drive_Motor_Rev__Entry;
        nt::NetworkTableEntry __FrontRight_Drive_Motor_Rev__Entry;
        nt::NetworkTableEntry __BackLeft_Drive_Motor_Rev__Entry;
        nt::NetworkTableEntry __BackRight_Drive_Motor_Rev__Entry;
        // Outports
        nt::NetworkTableEntry __FrontLeft_Drive_DutyCycle__Entry;
        nt::NetworkTableEntry __FrontLeft_Steer_DutyCycle__Entry;
        nt::NetworkTableEntry __FrontRight_Drive_DutyCycle__Entry;
        nt::NetworkTableEntry __FrontRight_Steer_DutyCycle__Entry;
        nt::NetworkTableEntry __BackLeft_Drive_DutyCycle__Entry;
        nt::NetworkTableEntry __BackLeft_Steer_DutyCycle__Entry;
        nt::NetworkTableEntry __BackRight_Drive_DutyCycle__Entry;
        nt::NetworkTableEntry __BackRight_Steer_DutyCycle__Entry;
 
        // Test Points
        nt::NetworkTableEntry __FL_Steer_Module_Angle__Entry;
        nt::NetworkTableEntry __FR_Steer_Module_Angle__Entry;
        nt::NetworkTableEntry __BL_Steer_Module_Angle__Entry;
        nt::NetworkTableEntry __BR_Steer_Module_Angle__Entry;
        nt::NetworkTableEntry __Odom_Position_X_global__Entry;
        nt::NetworkTableEntry __Odom_Position_Y_global__Entry;
        nt::NetworkTableEntry __Spline_Num_Poses__Entry;
        nt::NetworkTableEntry __Steering_Abs_Cmd__Entry;
        nt::NetworkTableEntry __Steering_Rel_Cmd__Entry;
        nt::NetworkTableEntry __Translation_Speed__Entry;
        nt::NetworkTableEntry __Translation_Angle__Entry;
        nt::NetworkTableEntry __Translation_Speed_SPF__Entry;
        nt::NetworkTableEntry __Translation_Speed_RL__Entry;
        nt::NetworkTableEntry __Translation_Angle_SPF__Entry;
        nt::NetworkTableEntry __Translation_Steering_Cmd__Entry;
        nt::NetworkTableEntry __Steering_Rel_Cmd_SPF__Entry;
        nt::NetworkTableEntry __Steering_Abs_Cmd_SPF__Entry;
        nt::NetworkTableEntry __Gyro_Angle_Adjustment_SPF__Entry;
        nt::NetworkTableEntry __Steering_Localized_PID__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd__Entry;
        nt::NetworkTableEntry __Switch1__Entry;
        nt::NetworkTableEntry __Switch1_m__Entry;
        nt::NetworkTableEntry __Switch1_o__Entry;
        nt::NetworkTableEntry __Switch1_p__Entry;
        nt::NetworkTableEntry __BR_Desired_Wheel_Speed__Entry;
        nt::NetworkTableEntry __BR_Desired_Module_Angle__Entry;
        nt::NetworkTableEntry __FL_Desired_Wheel_Speed__Entry;
        nt::NetworkTableEntry __FL_Desired_Module_Angle__Entry;
        nt::NetworkTableEntry __FR_Desired_Wheel_Speed__Entry;
        nt::NetworkTableEntry __FR_Desired_Module_Angle__Entry;
        nt::NetworkTableEntry __BL_Desired_Wheel_Speed__Entry;
        nt::NetworkTableEntry __BL_Desired_Module_Angle__Entry;
        nt::NetworkTableEntry __Odometry_Y_global_est_ft__Entry;
        nt::NetworkTableEntry __Odometry_Y_global_TEAR_ft__Entry;
        nt::NetworkTableEntry __Odometry_X_global_est_ft__Entry;
        nt::NetworkTableEntry __Odometry_X_global_TEAR_ft__Entry;
        nt::NetworkTableEntry __Spline_Index__Entry;
        nt::NetworkTableEntry __Spline_Target_Y__Entry;
        nt::NetworkTableEntry __Spline_Target_X__Entry;
        nt::NetworkTableEntry __WhileIterator__Entry;
        nt::NetworkTableEntry __Spline_Enable__Entry;
        nt::NetworkTableEntry __Is_Absolute_Translation_SPF__Entry;
        nt::NetworkTableEntry __Is_Absolute_Steering_SPF__Entry;
        nt::NetworkTableEntry __Robot_Reached_Destination__Entry;
        nt::NetworkTableEntry __Spline_Out_Of_Bounds__Entry;
};