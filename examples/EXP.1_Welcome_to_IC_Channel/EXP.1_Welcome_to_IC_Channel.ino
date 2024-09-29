// 第一課 印出Welcome the IC Channel
// Serial為一個串列通訊使用Arduino板上的TX/RX去做通訊
// https://www.arduino.cc/en/reference/serial
// https://www.arduino.cc/en/serial/println
// print和print為打印 前者為打印不換行 後者是打印後換行



void setup() {
  
  Serial.begin(9600);                              // 打開Serial 設定鮑率 (傳輸速率)(每秒傳輸幾個符號)

}

void loop() {

  Serial.println("Welcome to the IC Channel.");    // 印出 Welcome to the IC Channel
  delay(1000);                                    // 延遲1s = 1000ms

}
