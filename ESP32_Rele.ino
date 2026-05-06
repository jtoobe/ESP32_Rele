void setup() {
  // Inicializo el pin digital LED_BUILTIN como output.
  pinMode(23, OUTPUT);
}

// La funcion Loop se ejecuta hasta que se corta la alimentacion
void loop() {

  digitalWrite(32, HIGH);   // activa el rele  (HIGH es el nivel de salida)
  
  delay(1000);                       // espera un segundo (1000 milisegundos)
  
  digitalWrite(32, LOW);    // desactiva el poniendo la salida en LOW
  
  delay(1000);                       // espera un segundo (1000 milisegundos)
  
}
