// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Símbolos, alfabetos y cadenas
// Autor: Edgar Joel Martín Melián
// Correo: alu0101434698@ull.edu.es
// Fecha: 06/10/2021
// Archivo cadena.cc: 
//          Contiene la implementación de la clase Cadena y sus funciones.
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
#include <string>
#include <cstdlib> /// exit
#include "cadena.h"

/** Constructor de la clase Cadena
 *
 *  @param[in] my_string   La cadena más su alfabeto
 */
Cadena::Cadena(std::string my_string){

    //Buscar si hay ' (espacio)' en la frase
    int counter{0};
    for(unsigned i = 0; i < my_string.length(); i++){
        if(my_string[i] == ' '){
            counter++;
        }
    }
    //Caso 1: Incluya Alfabeto
    if(counter > 0){
        //cadena
        for(unsigned i = my_string.find_last_of(' ') + 1; i < my_string.length(); i++){
            string_ += my_string[i];
        }
        //alfabeto
        for(unsigned i = 0; i < my_string.find_last_of(' '); i++){
            if(my_string[i] != ' '){
                Simbolo aux;
                std::string aux_string{my_string[i]};

                aux.setData(aux_string);
                alphabet_.add(aux);
            }
        }
    }
    //Caso 2: No incluya Alfabeto, sino solo la cadena
    else{
        for(unsigned i = 0; i < my_string.length(); i++){
            //Alfabeto
            Simbolo aux;
            std::string aux_string{my_string[i]};
            aux.setData(aux_string);

            if(alphabet_.verify(aux) == false){
                alphabet_.add(aux);
            }
            //Cadena
            string_+= my_string[i];
        }
    }

    //Verificar que la cadena pertenece a su alfabeto;
    for(unsigned i = 0; i < string_.length(); i++){
        Simbolo aux;
        std::string aux_string{string_[i]};
        aux.setData(aux_string);

        if(alphabet_.verify(aux) == false){
            std::cerr << "La cadena <<" << string_ << ">> no pertenece al alfabeto dado: " << alphabet_ <<  std::endl;
            exit(EXIT_SUCCESS);
        } 
    }
}

//Función que devuelve la longitud de la cadena
int Cadena::Longitud(){
    return string_.length();
}

//Función que devuelve la cadena en orden inverso
std::string Cadena::Inversa(){
    std::string aux;

    for(int i = string_.length() - 1; i >= 0; i--){
        aux = aux.append(string_.substr(i, 1));
    }
    return aux;
}

//Función que calcula los prefijos de la cadena
std::string Cadena::Prefijos(){
    std::string aux = "& ";
    unsigned counter{1};

    while(counter <= string_.length()){
        for(unsigned i = 0; i < counter; i++){
            aux += string_[i];
        }
        aux += " ";
        counter++;
    }
    return aux;
}

//Función que calcula los sufijos de la cadena
std::string Cadena::Sufijos(){
    std::string out = "& ";
    for(unsigned i = 1; i <= string_.length(); i++){

        std::string aux;

        for(unsigned j = 0; j < i; j++){
            aux += string_[string_.length() - 1 - j];
        }

        std::string aux_2;

        for(unsigned j = aux.length(); j > 0; j--){
            aux_2 += aux.substr(j - 1, 1);
        }

        out += aux_2 + " ";
    }
    return out;
}

//Función que calcula las subcadenas de la cadena
std::string Cadena::Subcadenas(){
    std::string aux = "& ";
    int max = string_.length() - 1;
    int sub[string_.length()];

    for(int n = 1; n <= (max + 1); n++){
        for(int i = 0; i < n; i++){
            sub[i] = i;
        }
        int a{0};
        while(a >= 0){
            for(int b = 0; b < n; b++){
                aux += string_[sub[b]];
            }
            aux += " ";

            if(sub[0] == max - (n - 1)){
                break;
            }
            else{
                int pos = n - 1;
                while(pos >= 0){
                    if(sub[pos] == max - (n - 1 - pos)){
                        pos --;
                    }
                    else{
                        break;
                    }
                }
                sub[pos]++;
                for(int a = pos + 1; a < n; a++){
                    sub[a] = sub[a-1] + 1;
                }
            }
            a++;
        }
    }
    return aux;
}
