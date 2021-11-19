#include <Keyboard.h>
void setup() {
  Keyboard.begin();
  delay(1000);
  Keyboard.end();
}
void loop()
{
  Keyboard.press(KEY_DELETE);
  delay(100);
  Keyboard.releaseAll();
  while(20);
}
