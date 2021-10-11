// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Símbolos, alfabetos y cadenas
// Autor: Edgar Joel Martín Melián
// Correo: alu0101434698@ull.edu.es
// Fecha: 06/10/2021
// Archivo alfabeto.cc: 
//          Contiene la implementación de la clase Alfabeto y sus funciones.
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
#include "alfabeto.h"

/** Constructor para la clase Alfabeto
 *
 *  @param[in] my_string   Simbolo(aunque sea una string) que se va a utilizar para añadir al afabeto
 */
Alfabeto::Alfabeto(std::string my_string){
    Simbolo aux = my_string;
    alphabet_.push_back(aux);
}

/** Añade un Símbolo al alfabeto
 *
 *  @param[in] symbol   Simbolo que será añadido
 */
void Alfabeto::add(Simbolo symbol){
    if(this->verify(symbol) == false){
        alphabet_.resize(alphabet_.size() + 1);
        alphabet_[alphabet_.size()-1] = symbol;
        size_++;
    }
}

/** Verifica si el símbolo pertenece al alfabeto
 *
 *  @param[in] symbol   Simbolo que verificar
 */
bool Alfabeto::verify(Simbolo symbol){
    for(unsigned i = 0; i < alphabet_.size(); i++){
        if(symbol.getData() == alphabet_[i].getData()){
            return true;
        }
    }
    return false;
}

/** Funcion para poder imprimir el afabeto en ficheros
 *
 *  @param[in] out     
 *  @param[in] symbol  Alfabeto que se va a imprimir
 */
std::ostream& operator<<(std::ostream &out, const Alfabeto &alfabet){
    out << "{";
    for(int i = 0; i < alfabet.getSize() - 1; i++){
        out << alfabet.alphabet_[i] << ",";
    }
    out << alfabet.alphabet_[alfabet.getSize() - 1] << "}";
    return out;
}