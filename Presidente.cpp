#include "Funcionario.h"
#include "Presidente.h"
#include <iostream>

using namespace std;


Presidente::~Presidente(){


}

Presidente::Presidente()
{
    areaDeFormacao = "";
    formacaoAcademicaMax = "";
}

Presidente::Presidente(int codigo, string nome, string endereco, string telefone, Data dataDeIngresso, string designacao,string areaDeFormacao, string formacaoAcademicaMax, float salario)
{
    Funcionario::setAtributos(codigo, salario, nome, endereco, telefone, dataDeIngresso, designacao);
    this->areaDeFormacao = areaDeFormacao;
    this->formacaoAcademicaMax = formacaoAcademicaMax;
}


string Presidente::getAreaDeFormacao()
{
    return areaDeFormacao;
}

string Presidente::getFormacaoAcademicaMax()
{
    return formacaoAcademicaMax;
}

void Presidente::setAreaDeFormacao(string areaDeFromacao)
{
    this->areaDeFormacao = areaDeFormacao;
}

void Presidente::setFormacaoAcademicaMax(string formacaoAcademicaMax)
{
    this->formacaoAcademicaMax = formacaoAcademicaMax;
}

string Presidente::toString(){
    
    string data = Funcionario::toString();
    data += "Area de formacao: " + areaDeFormacao + "\nFormacao academica max.: " + formacaoAcademicaMax + "\n";
    return data;
}

string Presidente::salvarNoArquivo(){
    string data = Funcionario::salvarNoArquivo();
    data += areaDeFormacao + "," + formacaoAcademicaMax;
    return data;
}