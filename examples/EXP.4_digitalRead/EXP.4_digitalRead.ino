// 第四課 讀取數位腳位的值
// 本次會用到電阻和按鈕 請按照接線圖連接
// 可以把腳位連接到 數位腳 2-13 
// 英文版本 可在 上面File→Examples→01.Basics→DigitalReadSerial 找到
//https://www.arduino.cc/en/Tutorial/DigitalReadSerial



int read1 = 2;                // 把腳位2設定名稱為read1
int sensorVal;                // 建議一個暫存器 名稱為sensorVal 數值範圍為-32768~32767

void setup() {

  Serial.begin(9600);
 
}

void loop() {

  sensorVal = digitalRead(2); // digitalRead讀取A0的值 放進 sensorVal裡面
  Serial.println(sensorVal);   // 印出sensorVal
  delay(500);

}
