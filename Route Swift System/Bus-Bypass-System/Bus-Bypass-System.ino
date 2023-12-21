#include <Servo.h>
#define SERVO_PIN 8

Servo servoMotor;

const int irSensorPin = 2;
const int irSensorPin2 = 12;


void setup() {
  Serial.begin(9600);

  servoMotor.attach(SERVO_PIN);

  pinMode(irSensorPin, INPUT);
  pinMode(irSensorPin2, INPUT);
}

void loop() {
  
  int ir1 = digitalRead(irSensorPin);
  int ir2 = digitalRead(irSensorPin2);

  Serial.print("IR 1 = ");
  Serial.println(ir1);
  Serial.print("IR 2 = ");
  Serial.println(ir2);
  delay(500);

  if(ir1 == 0 and ir2 == 0){
    for (int pos = 160; pos >= 70; pos -= 1) {
      servoMotor.write(pos);
    }
  }
  if(ir1 == 1 or ir2 == 1){
    for (int pos = 70; pos <= 160; pos += 1) {
      servoMotor.write(pos);
    }
  }
}
