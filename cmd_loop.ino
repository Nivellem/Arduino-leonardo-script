#include <Keyboard.h>
void setup() {//init
  Keyboard.begin();//Start keyboard communication 
  delay(3000);//Delay
  Keyboard.end();
}
void loop()
{
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("cmd");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}
