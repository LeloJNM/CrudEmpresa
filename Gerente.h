#pragma once

#include "Funcionario.h"
#include <iostream>

using namespace std;

class Gerente : public Funcionario
{

    public:
        Gerente();
        Gerente(int codigo, string nome, string endereco, string telefone, Data dataDeIngresso, string designacao, string areaDeSupervisao, float salario);
        ~Gerente();
        string getAreaDeSupervisao();
        void setAreaDeSupervisao(string areaDeSupervisao);
        string salvarNoArquivo();
        string toString();
    private:
       string areaDeSupervisao;

};