// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Símbolos, alfabetos y cadenas
// Autor: Edgar Joel Martín Melián
// Correo: alu0101434698@ull.edu.es
// Fecha: 06/10/2021
// Archivo alfabeto.h: 
//          Contiene la definición de la clase Alfabeto.
// Referencias:
//          Enlaces de interés
// Historial de revisiones
//          06/10/2021 - Creación (primera versión) del código
//          07/10/2021 - Continuación de programación
//          08/10/2021 - Continuación de programación
//          10/10/2021 - Revisión de errores
//          11/10/2021 - Última revisión.
#ifndef ALFABETO_H_
#define ALFABETO_H_

#include <iostream>
#include <string>
#include <vector>

#include "simbolo.h"

class Alfabeto{
    private:
        std::vector<Simbolo> alphabet_;
        int size_ {0};

    public:
        // constructores
        Alfabeto() = default;
        Alfabeto(std::string my_string);

        //getters
        std::vector<Simbolo> getAlphabet() const {return alphabet_;};
        int getSize() const {return size_;}
        Simbolo getSymbol(int n) {return alphabet_[n];};

        

        //funciones
        void add(Simbolo symbol);
        bool verify(Simbolo symbol);

        friend std::ostream& operator<<(std::ostream &out, const Alfabeto &alfabet);

};

#endif
