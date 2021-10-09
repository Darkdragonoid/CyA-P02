#ifndef SIMBOLO_H_
#define SIMBOLO_H_

#include <iostream>
#include <string>

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
