#pragma once

#include <iostream>
#include <string>
#include "data.h"

using namespace std;

class Funcionario
{

public:
    Funcionario();
    Funcionario(int codigo, string nome, string endereco, string telefone, Data dataDeIngresso, string designacao,  float salario);
    
    virtual ~Funcionario();

    // funções get
    virtual int getCodigo();          // Retorna o valor do código de um funcionario
    virtual string getNome();         // Retorna o nome de um funcionario
    virtual string getEndereco();     // Retorna o endereço de um funcionario
    virtual string getTelefone();     // Retorna o telefone de um funcionario
    virtual Data getDataDeIngresso(); // Retorna a data de ingresso dd/mm/yyyy de um funcionario
    virtual string getDesignacao();   // Retorna a função no trabalho de um funcionario
    virtual float getSalario();       // Retorna o salario de um funcionario

    // funções set
    virtual void setNome(string nome);                   // Define o nome de um funcionario
    virtual void setEndereco(string endereco);           // Define o endereço de um funcionario
    virtual void setTelefone(string telefone);           // Define o telefone de um funcionario
    virtual void setDataDeIngresso(Data dataDeIngresso); // Define a data de ingresso dd/mm/yyyy de um funcionario
    virtual void setDesignacao(string designacao);       // Define a designação(operador, diretor,gerente,presidente)
    virtual void setSalario(float salario);              // Define o salario do funcionario
    virtual void setCodigo(int codigo);                  // Define o codigo do funcionario
    virtual void setAtributos(int codigo, float salario, string nome, string endereco, string telefone, Data dataDeIngresso, string designacao);
   
    virtual string toString();// Retorna todas as informações do funcionario como string
    virtual string salvarNoArquivo();

protected:
    int codigo;
    float salario;
    string nome;
    string endereco;
    string telefone;
    Data dataDeIngresso;
    string designacao;
};