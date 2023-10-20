#include "Funcionario.h"
#include "Diretor.h"
#include "Gerente.h"
#include "Presidente.h"
#include <vector>
#pragma once

class GerenciarFuncionario 
{
public:
    GerenciarFuncionario();
    ~GerenciarFuncionario();
    void adicionarNovoFuncionario(Funcionario *func);
    //void adicionarNovoFuncionario(int codigo, string nome, string endereco, string telefone, Data dataDeIngresso, string designacao, string areaDeSupervisao, string areaDeFormacao, string formacaoAcademicaMax, float salario);
    void editarRegistroDeUmFuncionario();
    void excluirRegistroDeFuncionario();

    void exibirListaDeFuncionarios();
    void exibirListaDeFuncionariosPorTipo();
    void exibirRegistroDeUmFuncionario();

    void salvarNoArquivo();
    void lerNoArquivo();

protected:
    vector<Funcionario *> funcionarios;
};
