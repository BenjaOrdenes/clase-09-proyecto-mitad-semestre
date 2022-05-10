// ej_01_melodia
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19
// traduccion a español de ejemplo Arduino
// 02. Digital -  toneMelody

// incluir archivo en otra pestaña
#include "notas.h"

// declarar arreglo de enteros
// para melodia de 8 notas
int melodia1[] = {
NOTA_SOL4, NOTA_SOL4, NOTA_SOL4, NOTA_RES4, NOTA_LAS4, NOTA_SOL4, NOTA_RES4,
NOTA_LAS4, NOTA_SOL4, NOTA_RE5, NOTA_RE5, NOTA_RE5, NOTA_RE5, NOTA_LAS4,
NOTA_FAS4, NOTA_RES4, NOTA_LAS4, NOTA_SOL4, NOTA_SOL5, NOTA_SOL4, NOTA_SOL4
};
int duraciones1[] = {
  4, 4, 4, 6, 16, 4, 6, 16, 2, 4, 4, 4, 6, 16, 4, 6, 16, 2, 4, 6, 16
};
int melodia2[] = {
   NOTA_LA4, 0, NOTA_RE5, 0, NOTA_LA4, 0, NOTA_RE5, 0, NOTA_LA4, 0, NOTA_RE5, 0, NOTA_LA4,
  0, 0, NOTA_SOLS4, NOTA_LA4, 0, NOTA_LA4, NOTA_SOLS4, NOTA_LA4, NOTA_LA4, 0, NOTA_FAS4, 
  NOTA_SOL4, NOTA_FAS4, NOTA_FA4, NOTA_RE4, NOTA_LA4, 0, NOTA_RE5, 0, NOTA_LA4, 0
};
int duraciones2[] = {
   4, 64, 4, 64, 4, 64, 4, 64, 8, 4, 64, 8, 64, 8, 8, 4, 64, 8, 8, 8, 8, 8, 8, 8, 8,
 3, 2, 4, 64, 4, 64, 4, 64, 4
};
int melodia3[] = {
  NOTA_FA3, NOTA_SOL3, NOTA_FA3, NOTA_RES3, NOTA_RE3, NOTA_FA3, NOTA_SOL3,
NOTA_FA3, NOTA_RES3, NOTA_RE3, NOTA_FA3, NOTA_SOL3, NOTA_FA3, NOTA_RES3, NOTA_RE3,
NOTA_FA3, NOTA_SOL3, NOTA_FA3,NOTA_RES3, NOTA_RE3, NOTA_MI4, NOTA_FAS4, NOTA_SOL4
};
int duraciones3[] = {
  8, 8, 16, 16, 8, 8, 8, 16, 16, 8, 8, 8, 16, 16, 8, 8, 8, 16, 16, 8, 8, 8, 4
};
// declarar arreglo de enteros
// para duracion de 8 notas


// multiplicador de la duracion
// a mayor numero, mas rapido
int multiplicadorDuracion = 1;

// pausa entre notas
float multiplicadorPausa = 1.3;

// pin de conexion del parlante
int pinParlante = 11;

// pin de conexion del pulsador
const int pinPulsador1 = 7;
const int pinPulsador2 = 6;
const int pinPulsador3 = 5;

// variable para almacenar estado pulsador
int estadoPulsador1 = 0;
int estadoPulsador2 = 0;
int estadoPulsador3 = 0;

// setup() ocurre una vez, al principio
void setup() {

  Serial.begin(9600);

}

// loop() ocurre después de setup(), en bucle
void loop() {

  estadoPulsador1 = digitalRead(pinPulsador1);
  estadoPulsador2 = digitalRead(pinPulsador2);
  estadoPulsador3 = digitalRead(pinPulsador3);
   Serial.println(estadoPulsador2);
   
  if (estadoPulsador1 == 1) {
    // bucle for
    // iterador es nota y parte en 0
    // repetir hasta que nota < 8
    // en cada iteracion aumentar nota en 1
    for (int nota = 0; nota < 21 ; nota++) {

      // duracion de la nota en milisegundos
      int duracionNota = 1000 / (duraciones1[nota] * multiplicadorDuracion);

      // tone(pin, frecuencia, duracion)
      tone(pinParlante, melodia1[nota], duracionNota);

      // pausa entre notas
      int pausa = duracionNota * multiplicadorPausa;

      // pausar para mantener nota
      delay(pausa);

    }
  }

  else {
      
  }
  if (estadoPulsador2 == 1) {
     for (int nota = 0; nota < 34 ; nota++) {

      // duracion de la nota en milisegundos
      int duracionNota = 1000 / (duraciones1[nota] * multiplicadorDuracion);

      // tone(pin, frecuencia, duracion)
      tone(pinParlante, melodia2[nota], duracionNota);

      // pausa entre notas
      int pausa = duracionNota * multiplicadorPausa;

      // pausar para mantener nota
      delay(pausa);
     }
  }
  else {
    
  }
  if (estadoPulsador3 == 1) {
     for (int nota = 0; nota < 23 ; nota++) {

      // duracion de la nota en milisegundos
      int duracionNota = 1000 / (duraciones1[nota] * multiplicadorDuracion);

      // tone(pin, frecuencia, duracion)
      tone(pinParlante, melodia3[nota], duracionNota);

      // pausa entre notas
      int pausa = duracionNota * multiplicadorPausa;

      // pausar para mantener nota
      delay(pausa);
     }
  }
  else {
    
  }
}
