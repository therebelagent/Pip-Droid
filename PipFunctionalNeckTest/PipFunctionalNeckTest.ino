//
//  PIP Functional Neck & Head Knob Test firmware for Arduino Nano v 3.0.
//  Created by Diego J. Arévalo.
//  https://github.com/therebelagent/PIP-Droid
//  2024 v 1.1.0
//

#include "ServoEasing.hpp"

ServoEasing HeadKnobServo;
ServoEasing PanServo;
ServoEasing TiltServo;

int const PAN_SERVO_PIN = 2;
int const PAN_STARTUP_DEGREE_ANGLE_POSITION = 87;
int const PAN_RIGHT_DEGREE_ANGLE_LIMIT = 10;
int const PAN_LEFT_DEGREE_ANGLE_LIMIT = 170;
int const PAN_SLOWEST_SPEED_LIMIT = 200;
int const PAN_FASTEST_SPEED_LIMIT = 300;

int const TILT_SERVO_PIN = 3;
int const TILT_RIGHT_DEGREE_ANGLE_LIMIT = 95;
int const TILT_LEFT_DEGREE_ANGLE_LIMIT = 110;
int const TILT_SLOWEST_SPEED_LIMIT = 25;
int const TILT_FASTEST_SPEED_LIMIT = 35;

int const HEAD_KNOB_SERVO_PIN = 4;
int const HEAD_KNOB_STARTUP_DEGREE_ANGLE_POSITION = 90;
int const HEAD_KNOB_RIGHT_DEGREE_ANGLE_LIMIT = 60;
int const HEAD_KNOB_LEFT_DEGREE_ANGLE_LIMIT = 120;
int const HEAD_KNOB_SLOWEST_SPEED_LIMIT = 100;
int const HEAD_KNOB_FASTEST_SPEED_LIMIT = 200;

void setup()
{
  HeadKnobServo.attach(HEAD_KNOB_SERVO_PIN);
  PanServo.attach(PAN_SERVO_PIN, PAN_STARTUP_DEGREE_ANGLE_POSITION);
  TiltServo.attach(TILT_SERVO_PIN);
}

void loop()
{
  playAnimation();
}

void playAnimation()
{
  delay(1000);
  playHeadKnobAnimation();
  playLeftAnimation();
  playBowAnimation();
  playRightAnimation();
  playBowAnimation();
  playCenterAnimation();
  playHeadKnobAnimation();
  playForthAnimation();
  playTwistAnimation();
  playCenterAnimation();
  playHeadKnobAnimation();
  playBackAnimation();
  playLeftAnimation();
  playCenterAnimation();
}

void playTwistAnimation()
{
  playLeftAnimation();
  playRightAnimation();
}

void playCenterAnimation()
{
  PanServo.easeTo(PAN_STARTUP_DEGREE_ANGLE_POSITION, 100);
}

void playLeftAnimation()
{
  PanServo.easeTo(PAN_LEFT_DEGREE_ANGLE_LIMIT, 100);
}

void playRightAnimation()
{
  PanServo.easeTo(PAN_RIGHT_DEGREE_ANGLE_LIMIT, 100);
}

void playBowAnimation()
{
  TiltServo.easeTo(TILT_LEFT_DEGREE_ANGLE_LIMIT, 50);
  TiltServo.easeTo(TILT_RIGHT_DEGREE_ANGLE_LIMIT, 50);
}

void playForthAnimation()
{
  TiltServo.easeTo(TILT_LEFT_DEGREE_ANGLE_LIMIT, 50);
}

void playBackAnimation()
{
  TiltServo.easeTo(TILT_RIGHT_DEGREE_ANGLE_LIMIT, 50);
}

void playPanTwistAnimation()
{
  int targetDegree = random(PAN_RIGHT_DEGREE_ANGLE_LIMIT, PAN_LEFT_DEGREE_ANGLE_LIMIT);
  int degreesPerSecond = random(PAN_SLOWEST_SPEED_LIMIT, PAN_FASTEST_SPEED_LIMIT);
  PanServo.easeTo(targetDegree, degreesPerSecond);
}

void playTiltTwistAnimation()
{
  int targetDegree = random(TILT_RIGHT_DEGREE_ANGLE_LIMIT, TILT_LEFT_DEGREE_ANGLE_LIMIT);
  int degreesPerSecond = random(TILT_SLOWEST_SPEED_LIMIT, TILT_FASTEST_SPEED_LIMIT);
  TiltServo.easeTo(targetDegree, degreesPerSecond);
}

void playHeadKnobAnimation()
{
  int targetDegree = random(HEAD_KNOB_RIGHT_DEGREE_ANGLE_LIMIT, HEAD_KNOB_STARTUP_DEGREE_ANGLE_POSITION);
  int degreesPerSecond = random(HEAD_KNOB_SLOWEST_SPEED_LIMIT, HEAD_KNOB_FASTEST_SPEED_LIMIT);
  HeadKnobServo.easeTo(targetDegree, degreesPerSecond);
  targetDegree = random(HEAD_KNOB_STARTUP_DEGREE_ANGLE_POSITION, HEAD_KNOB_LEFT_DEGREE_ANGLE_LIMIT);
  HeadKnobServo.easeTo(targetDegree, degreesPerSecond);
}