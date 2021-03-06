#include <Arduino.h>

int E1 = 10;      // 1번(A) 모터 Enable
int E2 = 11;      // 2번(B) 모터 Enable
int M1 = 12;      // 1번(A) 모터 PWM
int M2 = 13;      // 2번(B) 모터 PWM
int LED = 3;      // LED for testing photoresistor

int value;

void setup() {
  pinMode(M1, OUTPUT);      // 출력핀 설정
  pinMode(M2, OUTPUT);
}

// void loop() {
//   int sensor = analogRead(A0);
//   if(sensor > 1000){
//     digitalWrite(LED, HIGH);
//     analogWrite(E1, 0);
//     analogWrite(E2, 0);
//     delay(10);
//     while(sensor >= 1000 && sensor <= 1023){
//       delay(100);
//       sensor = analogRead(A0);
//     }
//   } else {
//     digitalWrite(LED, LOW);
//     for(value = 0; value <= 255; value += 5) {
//       digitalWrite(M1, LOW);
//       digitalWrite(M2, HIGH);
//       analogWrite(E1, value);
//       analogWrite(E2, value);
//       delay(10);
//       while(sensor >= 0 && sensor <= 1000){
//         delay(100);
//         sensor = analogRead(A0);
//       }
//     }
//   }
// }
void loop()
{
  //  for(value = 0; value <= 255; value+=5)   // PWM 속도 0 ~ 255까지 5씩 증가
  //  {
  //     digitalWrite(M1, HIGH);
  //     digitalWrite(M2, LOW);
  //     analogWrite(E1, value);
  //     analogWrite(E2, value);
  //     delay(30);
  //  }
  //  delay(1000);   // 1000ms = 1초 대기
  digitalWrite(E1, LOW);
  digitalWrite(E2, LOW);
  // for(value = 0; value <= 255; value+=5) {
  //   digitalWrite(M1, LOW);
  //   digitalWrite(M2, HIGH);
  //   analogWrite(E1, value);
  //   analogWrite(E2, value);
  //   delay(30);
  // }
  digitalWrite(M1, LOW);
  digitalWrite(M2, HIGH);
  analogWrite(E1, 255);
  analogWrite(E2, 255);
  delay(1000);
}
