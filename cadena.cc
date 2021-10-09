// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Símbolos, alfabetos y cadenas
// Autor: Edgar Joel Martín Melián
// Correo: alu0101434698@ull.edu.es
// Fecha: 05/10/2021
// Archivo cya-P02-Strings.cc: programa cliente.
//          Contiene la función main del proyecto que usa las clases X e Y
//          que realizan el trabajo de leer el fichero de entrada
//          identificando patrones en el texto que dan lugar
//          al fichero de salida.
// Referencias:
//          Enlaces de interés
// Historial de revisiones
//          05/10/2021 - Creación (primera versión) del código
//          06/10/2021 - Continuación del código
//          

#include <iostream>
#include <string>
#include <cstdlib> /// exit
#include "cadena.h"

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
        } 
    }
}

int Cadena::Longitud(){
    return string_.length();
}

std::string Cadena::Inversa(){
    std::string aux;
    for(int i = string_.length() - 1; i >= 0; i--){
        aux = aux.append(string_.substr(i, 1));
    }
    return aux;
}

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
