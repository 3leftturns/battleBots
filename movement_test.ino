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

    motorForward(2000);
    motorLeft(1000);

}

void motorForward(int duration) {
    leftMotor.write(45);
    rightMotor.write(134);
    delay(duration);
    leftMotor.write(0);
    rightMotor.write(0);
}

void motorReverse(int duration) {
    leftMotor.write(135);
    rightMotor.write(45);
    delay(duration);
    leftMotor.write(0);
    rightMotor.write(0);
}

void motorLeft(int duration) {
    leftMotor.write(45);
    rightMotor.write(45);
    delay(duration);
    leftMotor.write(0);
    rightMotor.write(0);
}

void motorRight(int duration) {
    leftMotor.write(135);
    rightMotor.write(135);
        delay(duration);
    leftMotor.write(0);
    rightMotor.write(0);
}

void turretLeft(int duration) {

}

void turretRight(int duration) {
    
}

//Non-Timed functions
void motorStop() {
    leftMotor.write(90);
    rightMotor.write(90);
}

void turretCenter() {
    frontTurret.write(90);   
}
