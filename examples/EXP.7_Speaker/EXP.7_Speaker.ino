// 第七課 Speaker 讓喇叭震動 發聲
// 聲音是經由物體震動而產生 經過介質(水、空氣)的傳播到我們的耳中
// 聲音的頻率為 Hz(赫茲)
// 我們利用腳位輸出頻率到喇叭 讓喇叭發出聲音
// 本次只會用到喇叭 正腳接到9 負腳接地
// https://www.arduino.cc/en/Tutorial/ToneMelody

#define  c     261       // define(定義) 去定義 c 這個音的頻率
#define  d     294      
#define  e     329   
#define  f     349    
#define  g     392   
#define  a     440   
#define  b     493   
#define  C     523    
#define rest   0        // 用 0 Hz 當作休止符

int melody[] = { c, d, e, f, g, a, b, C, rest};                   // 旋律暫存器 放入多個數值 melody[0]=c 、 meldy[1]為d為1以此類推
int beats[] = { 500, 500, 500, 500, 500, 500, 500, 500, 500};     // 聲音的長短 

int Speaker = 9;                                                  // 喇叭接到腳位9

void setup() {
  
  pinMode(Speaker, OUTPUT);                                       // 喇叭設定為輸出
  
}

void loop() {


  for (int i=0; i<=8; i++) {                                      // 迴圈 初始i=0 當i小於等於8 i+1
    tone(Speaker,melody[i],beats[i]);                             // 使用 tone指令發聲 tone(接腳,頻率,時間長短)
     delay(500);                                                  // 延遲0.5s
  }
  }

