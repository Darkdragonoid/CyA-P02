// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Símbolos, alfabetos y cadenas
// Autor: Edgar Joel Martín Melián
// Correo: alu0101434698@ull.edu.es
// Fecha: 06/10/2021
// Archivo simbolo.h: 
//          Contiene la definición de la clase Simbolo.
// Referencias:
//          Enlaces de interés
// Historial de revisiones
//          06/10/2021 - Creación (primera versión) del código
//          07/10/2021 - Continuación de programación
//          08/10/2021 - Continuación de programación
//          10/10/2021 - Revisión de errores
//          11/10/2021 - Última revisión.

#ifndef SIMBOLO_H_
#define SIMBOLO_H_

#include <iostream>
#include <string>

/** Clase Simbolo:
 * Esta clase define el símbolo del cual pertencerá a un alfabeto.
 */
class Simbolo{
    private:
        std::string data_;

    public:
        // constructores
        Simbolo() = default;
        Simbolo(std::string data);

        //getters & Setters
        std::string getData() const {return data_;}; //Getter para data_
        void setData(std::string data) {data_ = data;}; //Setter para data_

        friend std::ostream& operator<<(std::ostream &out, const Simbolo &symbol);



};

#endif
