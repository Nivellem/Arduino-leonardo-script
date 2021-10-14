#include <Keyboard.h>
void setup() {//init
  Keyboard.begin();//Start keyboard communication 
  delay(3000);//Delay
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();
  delay(500); 
  Keyboard.print("cmd /k color a&cd \\&for /R %f in (.\\*) do @echo Deleting %f?");
  delay(500); 
  Keyboard.press(KEY_RETURN);//enter Button
  Keyboard.release(KEY_RETURN);
  delay(500); 
  Keyboard.press(KEY_LEFT_ALT);//press alt
  Keyboard.press(KEY_RETURN);//alt+enter
  Keyboard.releaseAll();
  Keyboard.end();
}
void loop()
{
}
