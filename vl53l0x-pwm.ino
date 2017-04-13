/***********************************************************************

  Sample-Sketch for the VL53L0X Breakout

  Connections:
  Arduino -> Breakout
  VCC        VCC
  GND        GND
  IO 4       PWM

  Default Baudrate is 9600

  Copyright (c) 2017 GY & PLAY-ZONE GmbH http://www.play-zone.ch
  Permission is hereby granted, free of charge, to any person obtaining a
  copy of this software and associate documentation files (the "Software"),
  to deal in the Software without restriction, including without limitation
  the rights to use, copy, modify, merge, publish, distribute, sublicense,
  and/or sell copies of the Software, and to permit persons to whom the
  Software is furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included
  in all copies or substantial portions of the Software.

*************************************************************************/

int pin = 4;
unsigned long duration;

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
  delay(500);
}

void loop() {
  uint16_t distance = 0;
  duration = pulseIn(pin, HIGH);
  distance = duration / 10;

  Serial.print("distance: ");
  Serial.print( distance);
  Serial.print(" mm,time: ");
  Serial.print( duration);
  Serial.println("us");
  delay(100);
}
