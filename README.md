# clase-09-proyecto-mitad-semestre

## Acerca de

Este proyecto de mitad de semestre fue hecho en el día martes 10 de mayo 2022, como parte del curso  aud5i022-2022-1.

los integrantes son Valentina Chapana, Gabriel López, Benjamín Órdenes.

## Lista de materiales

Los materiales son:

* Arduino Uno
* Protoboard
* Cables
* Potenciómetro
* Tres botones
* Resistencia
* Parlante

## Armado de circuito

Estos son los pasos para armar el circuito.

primero hacemos X y se ve así.

![texto descripción de la foto](imagenes/00-ejemplo.jpg)

después hacemos Y y se ve así.

![texto descripción de la foto](imagenes/00-ejemplo.jpg)

## código para microcontrolador Arduino

El código está hecho para Arduino Uno, y está incluido en este repositorio aquí: [codigo_arduino/codigo_arduino.ino](codigo_arduino/codigo_arduino.ino).

Este código está basado en los ejemplos de Arduino que se hicieron en la [clase 7](https://github.com/montoyamoraga/aud5i022-2022-1/tree/main/clases/clase-07), más especificamente en el [ejemplo 1](https://github.com/montoyamoraga/aud5i022-2022-1/tree/main/clases/clase-07/ej_01_melodia) y el [ejemplo 2](https://github.com/montoyamoraga/aud5i022-2022-1/tree/main/clases/clase-07/ej_02_sonido_pulsador). Tambien un ejemplo de la [clase 5](https://github.com/montoyamoraga/aud5i022-2022-1/tree/main/clases/clase-05), el [ejemplo 0](https://github.com/montoyamoraga/aud5i022-2022-1/blob/main/clases/clase-05/ej_00_lectura_pulsador/ej_00_lectura_pulsador.ino). Y también está basado en las melodias del [codigo arduino de jmbondy](https://docs.google.com/document/d/1mRPqbCTv9P8CKg8gseD8ZIad5aAoSBY0S_63e5EqlLg/edit).

Primero que todo declaramos el archivo adjunto [notas.h](https://github.com/montoyamoraga/aud5i022-2022-1/blob/main/clases/clase-07/ej_01_melodia/notas.h) que define la frecuencia de cada nota. Despues de definir eso, declaramos cada melodia con su duración, el multiplicador de duración de las notas en general, el multiplicador de pausa que utiliza el comando "float". Despues se declaro el pin del parlante que es el pin digital 11 y los 3 botones que son el pin 7, 6, 5 respectivamente y por último se declara el estado de cada botón.

En setup solo usamos "Serial.begin(9600)" y en el loop usamos "digitalRead" en cada botón, con el comando "if" programamos cada botón para que toque una meldodía diferente.

## conclusiones

en este proyecto tuvimos los siguientes aprendizajes: 

* Mezclar dos codigos diferentes.
* Buscar codigos de otras personas para usarlos de referencias en nuestro proyectos.
* Nos familiarizamos más con github.
* Aprendimos a colocar una melodía diferente para cada botón.

Lo más dificil de este proyecto fue hacer el codigo para que los 3 botones funcionaran de manera independiente.
