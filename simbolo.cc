// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Símbolos, alfabetos y cadenas
// Autor: Edgar Joel Martín Melián
// Correo: alu0101434698@ull.edu.es
// Fecha: 06/10/2021
// Archivo simbolo.cc: 
//          Contiene la implementación de la clase Simbolo y sus funciones.
// Referencias:
//          Enlaces de interés
//              https://www.cplusplus.com/reference/string/string/
// Historial de revisiones
//          06/10/2021 - Creación (primera versión) del código
//          07/10/2021 - Continuación de programación
//          08/10/2021 - Continuación de programación
//          10/10/2021 - Revisión de errores
//          11/10/2021 - Última revisión.
#include <iostream>
#include "simbolo.h"

/** Constructor de la clase Simbolo
 *
 *  @param[in] data   String para definir el Símbolo
 */
Simbolo::Simbolo(std::string data){
    data_ = data;
}

/** Funcion para poder imprimir un Símbolo en ficheros
 *
 *  @param[in] out     
 *  @param[in] symbol  Simbolo el cual se va a escribir
 */
std::ostream& operator<<(std::ostream &out, const Simbolo &symbol){
    out << symbol.getData();
    return out;
}