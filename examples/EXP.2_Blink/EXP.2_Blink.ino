// 第二課 讓LED閃爍
// 可以看到板上有3個LED 分別是TX(發送) / RX(接收) / L(單純LED)
// L設定在第13隻腳位 你可以利用它 輸出電壓 讓LED一閃一滅
// 英文版本 可在 上面File→Examples→01.Basics→Blink 找到
// https://www.arduino.cc/en/tutorial/blink



void setup() {
                                
  pinMode(LED_BUILTIN, OUTPUT); // 設定LED_BUILTIN為輸出
                                // pinMode腳位設定
                                // OUTPUT輸出 INPUT輸入
}

void loop() {
  
  digitalWrite(LED_BUILTIN, HIGH);   // 將電壓輸出為HIGH為5V LED亮
  delay(1000);                       // 延遲1秒
  digitalWrite(LED_BUILTIN, LOW);    // 將電壓輸出為LOW為0V LED不亮
  delay(1000);                       // 延遲1秒

}
