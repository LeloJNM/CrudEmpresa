#include "Gerente.h"
#include "Funcionario.h"
#include <iostream>

using namespace std;

Gerente::~Gerente(){

}

Gerente::Gerente()
{
    areaDeSupervisao = "";
}

Gerente::Gerente(int codigo, string nome, string endereco, string telefone, Data dataDeIngresso, string designacao, string areaDeSupervisao, float salario)
{
    Funcionario::setAtributos(codigo, salario, nome, endereco, telefone, dataDeIngresso, designacao);
    this->areaDeSupervisao = areaDeSupervisao;
}

string Gerente::getAreaDeSupervisao()
{
    return areaDeSupervisao;
}

void Gerente::setAreaDeSupervisao(string areaDeSupervisao)
{
    this->areaDeSupervisao = areaDeSupervisao;
}

string Gerente::toString(){

    string data = Funcionario::toString();
    data += "Area de supervisao: " + areaDeSupervisao + "\n";
    return data;
}

string Gerente::salvarNoArquivo(){

    string data = Funcionario::salvarNoArquivo();
    data += areaDeSupervisao;
    return data;
}