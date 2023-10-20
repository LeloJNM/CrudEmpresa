#include "Diretor.h"
#include "Funcionario.h"
#include <iostream>

using namespace std;

Diretor::~Diretor(){


}

Diretor::Diretor()
{
    areaDeSupervisao = "";
    areaDeFormacao = "";
}

Diretor::Diretor(int codigo, string nome, string endereco, string telefone, Data dataDeIngresso, string designacao, string areaDeSupervisao, string areaDeFormacao, float salario)
{
    Funcionario::setAtributos(codigo, salario, nome, endereco, telefone, dataDeIngresso, designacao);
    this->areaDeSupervisao = areaDeSupervisao;
    this->areaDeFormacao = areaDeFormacao;
}

string Diretor::getAreaDeSupervisao()
{
    return areaDeSupervisao;
}
string Diretor::getAreaDeFormacao()
{
    return areaDeFormacao;
}

void Diretor::setAreaDeFormacao(string areaDeFormacao)
{
    this->areaDeFormacao = areaDeFormacao;
}

void Diretor::setAreaDeSupervisao(string areaDeSupervisao)
{
    this->areaDeSupervisao = areaDeSupervisao;
}

string Diretor::toString()
{
string data = Funcionario::toString();
data += "Area de formacao: " + areaDeFormacao + "\nArea de supervisao: " + areaDeSupervisao + "\n";
return data;
}
string Diretor::salvarNoArquivo(){
string data = Funcionario::salvarNoArquivo();
data += areaDeFormacao + "," + areaDeSupervisao;
    
}