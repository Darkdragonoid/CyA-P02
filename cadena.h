
#ifndef CADENA_H_
#define CADENA_H_

#include <iostream>
#include <string>

#include "alfabeto.h"
#include "simbolo.h"

#pragma once

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
