    Servo leftMotor;
    Servo rightMotor;
    Servo frontTurret;

void setup() {

    leftMotor.attach(D0);
    rightMotor.attach(D1);
    frontTurret.attach(D2);
    

}

void loop() {
//Robot control goes here
//call functions below to move robot
motorForward();
delay(3000);
motorLeft();
delay(1000);


}

void motorForward() {
    leftMotor.write(45);
    rightMotor.write(135);
}

void motorReverse() {
    leftMotor.write(135);
    rightMotor.write(45);
}

void motorLeft() {
    leftMotor.write(45);
    rightMotor.write(45);
}

void motorRight() {
    leftMotor.write(135);
    rightMotor.write(135);
}

void motorStop() {
    leftMotor.write(90);
    rightMotor.write(90);
}

void turretCenter() {
    frontTurret.write(90);
    
}
