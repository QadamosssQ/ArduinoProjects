
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>
 
#define TFT_CS        10
#define TFT_RST        9 
#define TFT_DC         8

#define joyX A0
#define joyY A1


Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

bool right=false;
bool left=false;
bool up=false;
bool down=false;

int ix = 120;
int iy = 160;

int btn=2;


void setup()
{
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
  tft.init(240, 320);  
   
  tft.invertDisplay(false);
  tft.fillScreen(ST77XX_BLACK);

}
 



void loop()
{

  if(digitalRead(btn)==LOW)
  {

    tft.fillScreen(ST77XX_BLACK);
  }

 
int xValue = analogRead(joyX);
int yValue = analogRead(joyY);







  if(xValue>950){
    right=true;
    left=false;
    up=false;
    down=false;
    ix+=2;
    circle(ix,iy);

  }else if(xValue<50){
    right=false;
    left=true;
    up=false;
    down=false;
    ix-=2;
    circle(ix,iy);

  }else if(yValue<50){
    right=false;
    left=false;
    up=true;
    down=false;
    iy-=2;
    circle(ix,iy);

  }else if(yValue>950){
    right=false;
    left=false;
    up=false;
    down=true;
    iy+=2;
    circle(ix,iy);
  } 



  
  if(ix>=tft.width() || ix<=1 || iy>=tft.height() || iy<=1  ){

    int ix = 120;
    int iy = 160;
  }

  
}



 void circle(int a, int b)
 {
    tft.fillCircle(a, b, 5, ST77XX_YELLOW);
    delay(100);

 }
























