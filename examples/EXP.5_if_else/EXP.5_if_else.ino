// 第五課 if else 假如 否則
// 本次會用到電阻和按鈕 請按照接線圖連接
// 可以把腳位連接到 數位腳 2-13  
// https://www.arduino.cc/en/Reference/Else

int button1 = 2;      // 按鈕連接到腳位2        
int val = 0;         //　暫存器val 數值為0



void setup() {   
pinMode(LED_BUILTIN, OUTPUT);           //LED 輸出
pinMode(2, INPUT);                      //按鈕 輸入
}

void loop() {
  val = digitalRead(button1);           //數位讀取Button值後放入val暫存器     

  if(val == HIGH)                       //假設val值為HIGH時               
  {
    digitalWrite(LED_BUILTIN,HIGH);    //點亮LED燈
  }
  else                                 //否則
  {
    digitalWrite(LED_BUILTIN,LOW);     //關閉LED燈
  } 

}
