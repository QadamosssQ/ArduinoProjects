#include <Keypad.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

const int RELAY_PIN  = A5; // the Arduino pin, which connects to the IN pin of relay
const int ROW_NUM    = 4; // four rows
const int COLUMN_NUM = 4; // four columns

char keys[ROW_NUM][COLUMN_NUM] = {
  {'A','3','1','2'},
  {'B','6','4','5'},
  {'C','9','7','8'},
  {'=','#','*','0'}
};

byte pin_rows[ROW_NUM] = {2, 3, 4, 5}; //connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = {7, 8, 12, 13}; //connect to the column pinouts of the keypad




Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

const String password_1 = "123"; // change your password here

String input_password;

void setup() {
  Serial.begin(9600);
  input_password.reserve(32); // maximum input characters is 33, change if needed
  pinMode(RELAY_PIN, OUTPUT); // initialize pin as an output.
  digitalWrite(RELAY_PIN, LOW); // lock the door

    if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(200);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.clearDisplay();
  display.setCursor(0,0);
  display.println("Enter password");
  display.display();

}

void loop() {
 
   
  char key = keypad.getKey();

  if (key){
    if(key != '='){
    Serial.println(key);
    display.print(key);
    display.display();
    }
    
   

    if(key == '*'){
      input_password = "";
      setup();
    }


    if(key == '#') {
      input_password = ""; // reset the input password
    } else if(key == '=') {
      if(input_password == password_1) {
        display.setCursor(0,20);
        display.println("Correct, unlocking");
        display.display();
        digitalWrite(RELAY_PIN, HIGH);  // unlock the door for 20 seconds
        delay(1000);
        setup();
        digitalWrite(RELAY_PIN, LOW); // lock the door
      } else {
        display.setCursor(0,20);
        display.println("Incorrect");
        display.display();
        delay(1000);
        setup();
      }

      input_password = ""; // reset the input password
    } else {
      input_password += key; // append new character to input password string
    }
  }
}