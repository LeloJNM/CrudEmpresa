#pragma once
#include <iostream>

class Data
{

public:
    Data();
    std::string getDia();
    std::string getMes();
    std::string getAno();
    std::string getData();
    void setDia(std::string dia);
    void setMes(std::string mes);
    void setAno(std::string ano);

protected:
    std::string dia, mes, ano;
};