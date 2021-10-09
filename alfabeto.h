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
