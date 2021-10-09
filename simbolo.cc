#include <iostream>
#include "simbolo.h"

Simbolo::Simbolo(std::string data){
    data_ = data;
}

std::ostream& operator<<(std::ostream &out, const Simbolo &symbol){
    out << symbol.getData();
    return out;
}