#include <Arduino.h>
#include <Servo.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Uttam Singh
 * @date 2026-02-20
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

Servo myservo;

int trigpin = 9;
int echopin = 10;

void setup() {
    myservo.attach(3);
    pinMode(trigpin, OUTPUT);
    pinMode(echopin, INPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(trigpin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigpin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigpin, LOW);
    long duration = pulseIn(echopin, HIGH);
    long distance = duration*0.0343/2;

}

