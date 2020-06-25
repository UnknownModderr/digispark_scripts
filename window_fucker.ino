#include "DigiKeyboard.h"

//This shit script basically constantly spams ALT+F4 and CTRL+W to close all open windows

void setup() {
  //fuck off
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
}
