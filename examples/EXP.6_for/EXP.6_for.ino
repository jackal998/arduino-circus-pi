// 第六課 for 迴圈
// 本次會用到電阻和LED 請按照接線圖連接
// https://www.arduino.cc/en/Reference/For



int LedPin = 10; // LED連接到腳位10

void setup() {
  
}

void loop() {
  {
    for (int i=0; i <= 255; i++){      // for是一個迴圈 當不滿足條件時在迴圈內循環
                                       // 一開始把 暫存器值i設為0
                                       // 當i小於等於255時
                                       // i會++ 等於 i會+1      
      analogWrite(LedPin,i);           // led輸出i值
      delay(10);                       // 延遲10秒
    }                                  // 你會發現Led慢慢的亮起
  }
}
