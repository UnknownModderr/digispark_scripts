#include "DigiKeyboard.h"

//This shit script basically just loads up the website below which is a fake windows 10 update site
//and makes it fullscreen so it looks like the PC needed an update and it will never finish.

void setup() {
  //fuck off
}

void loop() {
  DigiKeyboard.delay(2000); 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("https://fakeupdate.net/win10ue/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  for(;;){ }
}
