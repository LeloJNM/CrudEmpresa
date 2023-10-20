#pragma once

#include <iostream>
#include "Funcionario.h"

using namespace std;

class Diretor : public Funcionario{

    public:
        Diretor(); 
        Diretor(int codigo, string nome, string endereco, string telefone, Data dataDeIngresso, string designacao, string areaDeSupervisao, string areaDeFormacao, float salario); //construtor que define as informações do funcionário
        ~Diretor();

        string getAreaDeSupervisao(); //funções get
        string getAreaDeFormacao();
    
        void setAreaDeFormacao(string areaDeFormacao); //funções set
        void setAreaDeSupervisao(string areaDeSupervisao);

        string toString();
        string salvarNoArquivo();
    protected:
        string areaDeSupervisao;
        string areaDeFormacao;



};

