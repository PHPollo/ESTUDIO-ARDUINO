//LIBRERIAS ================================================



//VARIABLES ================================================
// PINES:
// Boton
const int PIN_button = 4;

// Led
const int PIN_led = 19;


// VALORES:
int value_button;



//CONFIGURACIONES ===========================================
void setup() {
  //Inicializar la comunicación entre la ESP32 con la computadora.
  Serial.begin(115200);

  //Asignar rol en los pines (Entrada (INPUT/INPUT_PULLUP) o Salida (OUTPUT)).
  pinMode(PIN_button, INPUT_PULLUP);  //Uso de INPUT_PULLUP para evitar valores flotantes (valores incorrectos)
  pinMode(PIN_led, OUTPUT);
}



//COMPORTAMIENTO ============================================
void loop() {
  //Leer el valor del pin del boton.
  value_button = digitalRead(PIN_button);
  Serial.println(value_button);
  
  //Dependiendo de la señal (0 o 1) encendera el led.
  if(value_button == LOW) {
    
    digitalWrite(PIN_led, HIGH);  //Encender
  }
  else {
    digitalWrite(PIN_led, LOW);   //Apagar
  }

  //Pausar un momento.
  delay(20);
}



//ANOTACIONES ===============================================
/*
Materiales requeridos para la prueba:
  - 1 ESP32-WROOM
  - 6 Cables
  - 1 Resistencia
  - 1 Boton (Pulsador táctil/tact switch):
  - 1 Led

Sobre el boton (pulsador táctil/tact switch):
Para utilizar un botón pulsador, se conecta una de sus terminales
a energía positiva (3.3V) o a GND, y otra a un pin de entrada de 
la ESP32. Mediante pinMode(pin, INPUT) o INPUT_PULLUP, la ESP32 
puede leer el estado del botón usando digitalRead(), obteniendo un 
valor 0 o 1 dependiendo de si el botón está presionado o no.

VERSIÓN CORREGIDA POR CHAT GPT.
*/
