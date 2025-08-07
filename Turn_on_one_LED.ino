//Asignación de valor PIN
const int pinLed = 17;

//Configuración del de trabajo modo en el PIN
void setup() {
  pinMode(pinLed, OUTPUT);

}

//Elavoración de comportamiento iterativo de la ESP32
void loop() {
  digitalWrite(pinLed, HIGH);
  delay(1000);
  digitalWrite(pinLed, LOW);
  delay(1000);
}

/*
MATERIALES PARA LA PRUEBA:
  *1 ESP32-WROOM
  *2 a 3 Cables
  *1 Resistencia
  *1 Led

ANOTACIONES:
  CODIGO:
  - Se les puede asignar como constante numerico el PIN con el cual se esta trabajando
  - Recordar que setup tiene como uno de sus uso la configuración del modo de trabajo en el PIN (INPUT, OUTPUT, etc)
  - Recordar que loop será el espacio de codigo que configurara el comportamiento de la ESP32 a la hora de su funcionamiento al verlo en el enzamble
  - Poner siempre ; en cada linea de codigo

  ENZAMBLE:
  - El PIN GND corresponde a la conexión negativa(-)
  - Los PINES numericos representan a conxiones positivas(+)
  - La parte larga del LED se concta a la conexión positiva(+), mientras que la más corta corresponde a la negativa(-)
  

NOTA:
  - Si no funciona el sistema enzamblado utilizando el GND y n°17 requerira revisar si la energía en primer lugar llega al led
*/
