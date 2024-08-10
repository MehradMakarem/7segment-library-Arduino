#include "segment.h"
void setup(){
  Serial.begin(9600);
  segmentsetup(2,3,4,5,6,7,8,9)//a,b,c,d,e,f,g,DP
  Serial.println("OK_");
}
void loop(){
  while(Serial.available() == 0);
  char ch1 = Serial.readString();
  Serial.println(ch1);
  segment(ch1);
  delay(3000);
  segmentclear();
  Serial.println("OK.");
}