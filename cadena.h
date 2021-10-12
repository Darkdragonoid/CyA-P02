// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Símbolos, alfabetos y cadenas
// Autor: Edgar Joel Martín Melián
// Correo: alu0101434698@ull.edu.es
// Fecha: 06/10/2021
// Archivo cadena.h: 
//          Contiene la definición de la clase Cadena.
// Referencias:
//          Enlaces de interés
// Historial de revisiones
//          06/10/2021 - Creación (primera versión) del código
//          07/10/2021 - Continuación de programación
//          08/10/2021 - Continuación de programación
//          10/10/2021 - Revisión de errores
//          11/10/2021 - Última revisión.

#ifndef CADENA_H_
#define CADENA_H_

#include <iostream>
#include <string>

#include "alfabeto.h"
#include "simbolo.h"

#pragma once

/** Clase Cadena:
 * Esta clase se usa para separar la cadena de su alfabeto.
 */
class Cadena{
    private:
        Alfabeto alphabet_;
        std::string string_;

    public:
        // constructores
        Cadena(std::string my_string);
        // funciones
        int Longitud();
        std::string Inversa();
        std::string Prefijos();
        std::string Sufijos();
        std::string Subcadenas();
        
        // funciones amiga

};

#endif
