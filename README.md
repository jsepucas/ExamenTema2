# ExamenTema2
https://github.com/jsepucas/ExamenTema2.git
------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## Parte 1: Preguntas de elección múltiple 


1. ¿Cuál es la principal diferencia entre la estructura básica del programa en C y C++?
Respuesta:

  b) C utiliza printf y scanf mientras que C++ utiliza std::cout y std::cin.

2. ¿Qué es un espacio de nombres en C++?
Respuesta:

  a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.

3. En programación orientada a objetos en C++, ¿qué es una clase?
Respuesta:

  d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).

4.¿Qué son los templates en C++?
Respuesta:

  b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar

  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------

## Parte 2: Pregunta de desarrollo de código (80%)

En el primer ejercicio del código la comparativa de los 2 ejercicios es: 

Comparativa de las Implementaciones
- Sintaxis de la Estructura: En C++, las estructuras se definen de manera similar a C, pero C++ permite el uso de string directamente, mientras que en C se debe usar char[] para cadenas de caracteres.

- Impresión de Datos: C++ utiliza el operador << y la biblioteca iostream para imprimir, proporcionando un estilo más sencillo y orientado a objetos. C utiliza printf de la biblioteca stdio.h, que es más tradicional y requiere especificadores de formato.

- Manejo de Cadenas de Texto: C++ puede utilizar el tipo std::string para manejar cadenas de texto de forma más sencilla y segura. En C, se utilizan arreglos de caracteres (char[]) y funciones como strcpy para la manipulación de cadenas.

- Referencia de Estructuras: En C++, cuando se declara una variable de tipo estructura, no es necesario usar la palabra clave struct, mientras que en C sí es necesario.

En el segundo ejercicio: 

- Orientación a Objetos: C++ ofrece orientación a objetos, lo cual es útil para modelar entidades como 'Estudiante'.
- Facilidad de Uso: C++ tiene características como sobrecarga de funciones, plantillas, y manejo más intuitivo de cadenas que pueden simplificar el código.
- Manejo de Memoria: C++ proporciona constructores y destructores para un mejor manejo de memoria.

En el tercer ejercicio:

- En C++, se expande la estructura 'Estudiante' para incluir una lista de materias, con funciones para agregar, eliminar y mostrar estas materias.
- En C, se realiza una implementación similar usando estructuras y arrays.


En el cuarto ejercicio:

- En C++, se diseña una clase o estructura 'Asistencia' con campos para fecha, materia y estado de asistencia, integrándola con 'Estudiante'.
- En C, se sigue un enfoque procedural para lograr una funcionalidad similar.

## En conclusión:

Elección del Lenguaje: Se recomienda C++ sobre C para el proyecto del "Centro Global de Estudios Avanzados" (CGEA) debido a su orientación a objetos, mejor manejo de excepciones y mayor facilidad de uso, lo que es crucial para un sistema de gestión académica complejo y escalable.

En cuanto a la recomendación que daría seria añadir estas cosas:

- Planificación detallada de requisitos y funcionalidades.
- Un uso de patrones de diseño modernos para un código robusto y mantenible.
- La implementación de pruebas continuas (unitarias y de integración).
- El mantenimiento de documentación clara y formación continua al equipo en características avanzadas de C++.
- Evaluación de frameworks y bibliotecas de C++ para eficiencia y funcionalidades adicionales.


