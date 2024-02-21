// calibrate function
void calibrate(){
    imu_reset(INTERIA_PORT);
    motor_move_relative(BACK_LEFT_MOTOR, 1000, 60);
    motor_move_relative(FRONT_LEFT_MOTOR, 1000, 60);
    motor_move_relative(BACK_RIGHT_MOTOR, -1000, 60);
    motor_move_relative(FRONT_RIGHT_MOTOR, -1000, 60);
    delay(10000);

    double t;

    // syntax motor_move_realative(PORT, tick* ANGLE, SPEED)

    t = 1000/imu_get_heading(INTERIA_PORT);
    controller_print(CONTROLLER_MASTER, 0, 0, "%.3f", t);
}

//==================================================================================================
// move forward function
rotation_reset_position(drivetrainSensor);
rotation_reset(drivetrainSensor);
while(rotation_get_position(drivetrainSensor) < [motor movemnt in centi-degrees]*[amount of rotation]){
    motor_move(FRONT_LEFT_MOTOR, 100);
    motor_move(FRONT_RIGHT_MOTOR, 100);
    motor_move(BACK_RIGHT_MOTOR, 100);
    motor_move(BACK_LEFT_MOTOR, 100);
}
motor_brake(FRONT_LEFT_MOTOR);
motor_brake(FRONT_RIGHT_MOTOR);
motor_brake(BACK_RIGHT_MOTOR);
motor_brake(BACK_LEFT_MOTOR);

//=====================================================================================================
//turn function
motor_move_relative(BACK_RIGHT_MOTOR, tick*90, -127);
motor_move_relative(BACK_LEFT_MOTOR, tick*90, 127);
motor_move_relative(FRONT_LEFT_MOTOR, tick*90, 127);
motor_move_relative(FRONT_RIGHT_MOTOR, tick*90, -127);
delay(5000);
motor_brake(BACK_RIGHT_MOTOR);
motor_brake(BACK_LEFT_MOTOR);
motor_brake(FRONT_RIGHT_MOTOR);
motor_brake(FRONT_LEFT_MOTOR);
