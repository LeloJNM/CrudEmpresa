#pragma once

#include <iostream>
#include "Funcionario.h"

using namespace std;

class Presidente : public Funcionario
{

public:
    Presidente();
    Presidente(int codigo, string nome, string endereco, string telefone, Data dataDeIngresso, string designacao,string areaDeFormacao, string FormacaoAcademicaMax, float salario);
    ~Presidente();
    string getAreaDeFormacao();
    string getFormacaoAcademicaMax();
    void setAreaDeFormacao(string areaDeFormacao);
    void setFormacaoAcademicaMax(string formacaoAcademicaMax);
    string toString();
    string salvarNoArquivo();
protected:
    string areaDeFormacao;
    string formacaoAcademicaMax;
};