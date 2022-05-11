#include <FastLED.h>

#define LED_PIN     5
#define NUM_LEDS    3

CRGB leds[NUM_LEDS];

void setup() {

  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);

  
}

void loop() {
  

 
  leds[0] = CRGB(255, 0, 0);
  FastLED.show();
  delay(300);
  leds[0] = CRGB(0, 0, 0);
  FastLED.show();
 



  leds[1] = CRGB(227, 139, 0);
  FastLED.show();
  delay(500); 
  leds[1] = CRGB(0, 0, 0);
  FastLED.show();


   
  leds[2] = CRGB(0, 255, 0);
  FastLED.show();
  delay(500);
  leds[2] = CRGB(0, 0, 0);
  FastLED.show();








 

}
