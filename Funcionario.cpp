#include "Funcionario.h"
#include "data.h"
#include <sstream>
#include <iostream>

using namespace std;

Funcionario::~Funcionario(){
}

Funcionario::Funcionario()
{
    codigo = 0;
    nome = " ";
    endereco = " ";
    designacao = " ";
    telefone = " ";
    salario = 0;
}

Funcionario::Funcionario(int codigo, string nome, string endereco, string telefone, Data dataDeIngresso,
                         string designacao, float salario)
{

    setCodigo(codigo);
    setNome(nome);
    setEndereco(endereco);
    setDesignacao(designacao);
    setDataDeIngresso(dataDeIngresso);
    setTelefone(telefone);
    setSalario(salario);
}

string Funcionario::getNome()
{
    return nome;
}

int Funcionario::getCodigo()
{
    return codigo;
}

Data Funcionario::getDataDeIngresso()
{
    return dataDeIngresso;
}

string Funcionario::getDesignacao()
{
    return designacao;
}

string Funcionario::getEndereco()
{
    return endereco;
}

string Funcionario::getTelefone()
{
    return telefone;
}

float Funcionario::getSalario()
{
    return salario;
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

void Funcionario::setEndereco(string endereco)
{
    this->endereco = endereco;
}

void Funcionario::setTelefone(string telefone)
{
    this->telefone = telefone;
}

void Funcionario::setDataDeIngresso(Data dataDeIngresso)
{
    this->dataDeIngresso = dataDeIngresso;
}

void Funcionario::setDesignacao(string designacao)
{
    this->designacao = designacao;
}

void Funcionario::setSalario(float salario)
{
    this->salario = salario;
}

void Funcionario::setCodigo(int codigo)
{
    this->codigo = codigo;
}

string Funcionario::toString()
{
    ostringstream salarioStream;
    salarioStream.precision(2);
    salarioStream << fixed << this->salario;
    return "Codigo: " + to_string(this->codigo) + "\nNome: " + this->nome + "\nEndereco: " + this->endereco + "\nTel.: " + this->telefone + "\nData de ingresso: " + this->dataDeIngresso.getData() + "\nDesignacao: " + this->designacao + "\nSalario: " + salarioStream.str() + "\n";
}

void Funcionario::setAtributos(int codigo, float salario, string nome, string endereco, string telefone, Data dataDeIngresso, string designacao){
    this->codigo = codigo;
    this->salario = salario;
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
    this->dataDeIngresso = dataDeIngresso;
    this->designacao = designacao;
}
string Funcionario::salvarNoArquivo(){
    ostringstream salarioStream;
    salarioStream.precision(2);
    salarioStream << fixed << this->salario;
    return to_string(this->codigo) + "," + this->nome + "," + this->endereco + "," + this->telefone + "," + this->dataDeIngresso.getData() + "," + this->designacao + "," + salarioStream.str() + ",";
}