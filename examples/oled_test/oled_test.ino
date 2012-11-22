#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Xmega_SSD1306.h>


#if defined(__AVR_XMEGA__)
  #define OLED_CS 6
  #define OLED_RESET 4
  #define OLED_DC 5
#else
  #define OLED_CS 10
  #define OLED_RESET 9
  #define OLED_DC 8
#endif

Xmega_SSD1306 display(OLED_CS, OLED_RESET, OLED_DC);

void setup(){
  display.begin(SSD1306_SWITCHCAPVCC);
  
  display.clearDisplay();
  display.display();
}

void loop(){
  display.setTextColor(WHITE);
  
  for(float i = 00.00; i < 15.00; i += 00.01){
    display.setCursor(0, 0);
    
    if(i < 10.00){
      display.setTextSize(1);
      display.print(0);
      display.println(i);
      
      display.setTextSize(2);
      display.print(0);
      display.println(i);
      
      display.setTextSize(3);
      display.print(0);
      display.println(i);
    }else{
      display.setTextSize(1);
      display.println(i);
      
      display.setTextSize(2);
      display.println(i);
      
      display.setTextSize(3);
      display.println(i);
    }
    display.display();
    display.clearDisplay();
  }
}
