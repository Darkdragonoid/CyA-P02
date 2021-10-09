// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Símbolos, alfabetos y cadenas
// Autor: Edgar Joel Martín Melián
// Correo: alu0101434698@ull.edu.es
// Fecha: 06/10/2021
// Archivo cya-P02-Strings.cc: programa cliente.
//          Contiene la función main del proyecto que usa las clases X e Y
//          que realizan el trabajo de leer el fichero de entrada
//          identificando patrones en el texto que dan lugar
//          al fichero de salida.
// Referencias:
//          Enlaces de interés
// Historial de revisiones
//          06/10/2021 - Creación (primera versión) del código
//   

#include <iostream>
const std::string kHelpText = "./p02_strings -- Símbolos, Alfabetos y Cadenas \n\
Modo de uso: ./p02_strings fichero_entrada fichero_salida opcode \n \n\
    fichero_entrada: tendrá en cada línea la especificación de los símbolos que definen el alfabeto (separados por espacios) seguidos de la cadena\n\
    fichero_salida:  Fichero de texto que contendrá los resultados de la operación realizada \n\
    opcode: Función a realizar (1)Longitud, (2)Inversa, (3)Prefijos, (4)Sufijos, (5)Subcadenas. \n";

void Usage(int argc, char *argv[]);
void Function(const std::string input_file, const std::string output_file, const int opcode);