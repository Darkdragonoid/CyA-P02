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
#include "tools.h"
#include "cadena.h"

int main(int argc, char* argv[]){

    Usage(argc, argv);

    std::string input{argv[1]};
    std::string output{argv[2]};
    std::string opcode{argv[3]};

    const int kOpcode = stoi(opcode);

    Function(input, output, kOpcode);

    return 0;
}