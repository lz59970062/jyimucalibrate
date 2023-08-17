
#include <Arduino.h>
void setup() {
  // Serial.begin(921600);
  // Serial1.begin(921600, SERIAL_8N1, 18, 17);//band
  //  Serial1.begin(921600, SERIAL_8N1, 16, 15);//car_atr
  Serial.begin(115200);
//   Serial1.begin(9600, SERIAL_8N1, 15, 16);//car_atr
//   uint8_t cmd_buff[]={0xff,0xaa,0,0,0};
//   uint8_t cmd_buff2[]={0xff,0xaa,0x04,6,0};
//    uint8_t cmd_buff3[]={0xff,0xaa,0x69,0x88,0xb5};
 
//  Serial1.write(cmd_buff3,5);
//   delay(10);
//   Serial1.write(cmd_buff2,5);
//   delay(10);
//   Serial1.write(cmd_buff3,5);
//   Serial1.write(cmd_buff,5);
//   delay(10);
  Serial1.begin(115200, SERIAL_8N1,18,17);//car_atr
  Serial2.begin(115200, SERIAL_8N1,41,42);//band
 
}

int s1_buff_len, s0_buff_len;
uint8_t s1_buff[128], s0_buff[128];
int i=0;
void loop() {
  // if (s1_buff_len=Serial1.available()) {
  //   // uint8_t inByte = Serial1.read();

  //   // Serial.write(inByte);
  //   Serial1.readBytes(s1_buff, s1_buff_len);
  //   Serial.write(s1_buff, s1_buff_len);
  // }
  // if (s0_buff_len=Serial.available()) {
  //   // uint8_t inByte = Serial.read();
  //   // Serial1.write(inByte);
  //   Serial.readBytes(s0_buff, s0_buff_len);
  //   Serial1.write(s0_buff, s0_buff_len);
  // }
  Serial1.write(i);
  Serial2.write(i);
  i++;
  delay(100);
  if (Serial1.available() ){
    Serial.print("Serial1:");
    Serial.println(Serial1.read());
  }
  if (Serial2.available() ){
    Serial.print("Serial2:");
    Serial.println(Serial2.read());
  }
}
