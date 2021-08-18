#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double taxaComissao = 0.06;
    double CalcularComissao();

    void Print();

};

#endif