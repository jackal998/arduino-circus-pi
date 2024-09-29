// 第三課 讀取類比腳位的值
// 本次會用到可變電阻 請按照接線圖連接
// 可以把腳h位連接到 類比腳 A0-A5 (Analog) 
// 英文版本 可在 上面File→Examples→01.Basics→AnalogReadSerial 找到
// https://www.arduino.cc/en/Tutorial/AnalogReadSerial


int sensorVal;                //建立一個暫存器(儲存位置) 名稱為sensorVal 數值範圍為-32768~32767

void setup() {

  Serial.begin(9600);
 
}

void loop() {

  sensorVal = analogRead(A0); //analogRead讀取A0的值 放進 sensorVal裡面
  Serial.println(sensorVal);   //印出sensorVal
  delay(1000);

}
