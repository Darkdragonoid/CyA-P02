// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Símbolos, alfabetos y cadenas
// Autor: Edgar Joel Martín Melián
// Correo: alu0101434698@ull.edu.es
// Fecha: 06/10/2021
// Archivo tools.h: 
//          Contiene las definiciones de la función de lectura/escriutura de ficheros
//          y la función para el --help por línea de comandos.
// Referencias:
//          Enlaces de interés
// Historial de revisiones
//          06/10/2021 - Creación (primera versión) del código
//          07/10/2021 - Continuación de programación
//          09/10/2021 - Arreglos de errores
//          11/10/2021 - Última revisión

#include <iostream>
const std::string kHelpText = "./p02_strings -- Símbolos, Alfabetos y Cadenas \n\
Modo de uso: ./p02_strings fichero_entrada fichero_salida opcode \n \n\
    fichero_entrada: tendrá en cada línea la especificación de los símbolos que definen el alfabeto (separados por espacios) seguidos de la cadena\n\
    fichero_salida:  Fichero de texto que contendrá los resultados de la operación realizada \n\
    opcode: Función a realizar (1)Longitud, (2)Inversa, (3)Prefijos, (4)Sufijos, (5)Subcadenas. \n";

void Usage(int argc, char *argv[]);
void Function(const std::string input_file, const std::string output_file, const int opcode);