#include <iostream>
#include "alfabeto.h"

Alfabeto::Alfabeto(std::string my_string){
    Simbolo aux = my_string;
    alphabet_.push_back(aux);
}

void Alfabeto::add(Simbolo symbol){
    if(this->verify(symbol) == false){
        alphabet_.resize(alphabet_.size() + 1);
        alphabet_[alphabet_.size()-1] = symbol;
        size_++;
    }
}

bool Alfabeto::verify(Simbolo symbol){
    for(unsigned i = 0; i < alphabet_.size(); i++){
        if(symbol.getData() == alphabet_[i].getData()){
            return true;
        }
    }
    return false;
}

std::ostream& operator<<(std::ostream &out, const Alfabeto &alfabet){
    out << "{";
    for(int i = 0; i < alfabet.getSize() - 1; i++){
        out << alfabet.alphabet_[i] << ",";
    }
    out << alfabet.alphabet_[alfabet.getSize() - 1] << "}";
    return out;
}