#include <Servo.h>

//Se definen las dos variables que se usaran para los servomotores
Servo servo1;
Servo servo2;

//se inicializan los dos ejes para que empiece de 90 grados
int eje1 = 90;
int eje2 = 90;

void setup() {
  //se declaran los pines donde estaran los servomotores
  servo1.attach(7);
  servo2.attach(6);

  //se inicializan los servomotores a 90 grados
  servo1.write(90);
  servo2.write(90);
 
}
void loop() {
  
  //condiciones para el servo 1

  //primera condicion que permite incrementar y sobreescribir el servo1 cuando el eje1 este por debajo de 180 grados 
  if (analogRead(0) < 200 && eje1 < 180) {
    eje1++;
    servo1.write(eje1);
  }

  //segunda condicion que permite decrementar y sobreescribir el servo1 cuando el eje1 sea mayor a cero
  if (analogRead(0) > 700 && eje1 > 0) {
    eje1--;
    servo1.write(eje1);
  }

  //condiciones para el servo 2
  
  //primera condicion que permite incrementar y sobreescribir el servo2 cuando el eje2 este por debajo de 180 grados 
  if (analogRead(1) < 200 && eje2 < 180) {
    eje2++;
    servo2.write(eje2);
  }
  
  //segunda condicion que permite decrementar y sobreescribir el servo2 cuando el eje2 sea mayor a cero
  if (analogRead(1) > 700 && eje2 > 0) {
    eje2--;
    servo2.write(eje2);
  }

  //permite para la ejecucion a 15 milisegundos
  delay(15);
}
