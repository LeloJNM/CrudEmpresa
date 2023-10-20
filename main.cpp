#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <locale>
#include "Funcionario.h"
#include "Gerente.h"
#include "Diretor.h"
#include "Presidente.h"
#include "GerenciarFuncionario.h"
#include "data.h"

using namespace std;

int getOption();

int main()
{
    setlocale(LC_ALL, "portuguese");

    string nome;
    int codigo;
    string endereco;
    string telefone;
    Data dataDeIngresso;
    string designacao;
    float salario;

    GerenciarFuncionario gerenciar;
    gerenciar.lerNoArquivo();

    Data ingresso = Data();
    string dia, mes, ano;

    Gerente gerente = Gerente();
    string areaDeSupervisao;

    Diretor diretor = Diretor();
    string areaDeFormacao;

    Presidente presidente = Presidente();
    string formacaoAcademicaMax;

    enum Options
    {
        CREATE = 1,
        READ,
        READBYTYPE,
        READBYCODE,
        UPDATE,
        DELETE,
        EXIT
    };

    int options = Options::CREATE;

    while (options != EXIT)
    {
        options = getOption();
        system("cls");
        switch (options)
        {
        case CREATE:
            cout << "Adicionar um novo funcionário" << endl;

            cout << "Digite o código do funcionário" << endl;
            cin >> codigo;
            cin.ignore();

            cout << "Digite o nome do funcionário" << endl;
            getline(cin, nome);

            cout << "Digite o endereço do funcionário" << endl;
            getline(cin, endereco);

            cout << "Digite o telefone do funcionário" << endl;
            getline(cin, telefone);

            cout << "Digite a data de ingresso do funcionário" << endl;
            getline(cin, dia);
            getline(cin, mes);
            getline(cin, ano);

            dataDeIngresso.setDia(dia);
            dataDeIngresso.setMes(mes);
            dataDeIngresso.setAno(ano);


            cout << "Digite o salário do funcionário" << endl;
            cin >> salario;
            cin.ignore();

            cout << "Digite a designação do funcionário (Operador, Gerente, Diretor ou Presidente):" << endl;
            getline(cin, designacao);
            if ((designacao == "operador") || (designacao == "Operador")){

                gerenciar.adicionarNovoFuncionario(new Funcionario(codigo, nome, endereco, telefone, dataDeIngresso, designacao, salario));

            } else if((designacao == "gerente") || (designacao == "Gerente"))
            {
                cout << "Digite a area de supervisao" << endl;
                getline(cin, areaDeSupervisao);
               // gerente.setAreaDeSupervisao(areaDeSupervisao);
                gerenciar.adicionarNovoFuncionario(new Gerente(codigo,nome,endereco,telefone,dataDeIngresso,designacao,areaDeSupervisao,salario));
            }
            else if ((designacao == "diretor") || (designacao == "Diretor"))
            {
                cout << "Digite a área de supervisão" << endl;
                getline(cin, areaDeSupervisao);
               // diretor.setAreaDeSupervisao(areaDeSupervisao);
                cout << "Digite a área de formação" << endl;
                getline(cin, areaDeFormacao);
               // diretor.setAreaDeFormacao(areaDeFormacao);
                gerenciar.adicionarNovoFuncionario(new Diretor(codigo,nome,endereco, telefone, dataDeIngresso, designacao, areaDeSupervisao,areaDeFormacao,salario));
            }
            else if ((designacao == "presidente") || (designacao == "Presidente"))
            {
                cout << "Digite a área de formação" << endl;
                getline(cin, areaDeFormacao);
              //  presidente.setAreaDeFormacao(areaDeSupervisao);
                cout << "Digite a formação máxima" << endl;
                getline(cin, formacaoAcademicaMax);
                //presidente.setFormacaoAcademicaMax(formacaoAcademicaMax);
                gerenciar.adicionarNovoFuncionario(new Presidente(codigo, nome, endereco, telefone, dataDeIngresso, designacao, areaDeFormacao, formacaoAcademicaMax, salario));

            }



            //gerenciar.adicionarNovoFuncionario(codigo, nome, endereco, telefone, dataDeIngresso, designacao, areaDeFormacao, areaDeSupervisao, formacaoAcademicaMax, salario);
            break;
            // entrada das variáveis do funcionário e salvamento dessas no vetor de funcionários
        case READ:
            cout << "Exibindo lista de funcionários" << endl;
            gerenciar.exibirListaDeFuncionarios();
            // exibição da lista de funcionário através do vetor de funcionários

            break;

        case READBYTYPE:

            gerenciar.exibirListaDeFuncionariosPorTipo();
            // exibição da lista de funcionário através do tipo do funcionário

            break;

        case READBYCODE:
            cout << "Exibindo lista de funcionários por código" << endl;

            gerenciar.exibirRegistroDeUmFuncionario();
            // exibição da lista de funcionário através do vetor do código

            break;

        case UPDATE:

            gerenciar.editarRegistroDeUmFuncionario();

            break;
        case DELETE:
            gerenciar.excluirRegistroDeFuncionario();
            //Excluir funcionário por código

            break;
        default:
            gerenciar.salvarNoArquivo();
            break;
        }

        // data.close(); //FIM DO WHILE
    }
}

int getOption()
{
    int in;
    cout << "Bem vindo ao Sistema de Controle de funcionários" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "1 - Adicionar um novo funcionário" << endl;
    cout << "2 - Ver a lista de funcionários" << endl;
    cout << "3 - Ver a lista de funcionários por tipo" << endl;
    cout << "4 - Ver a lista de funcionários por código" << endl;
    cout << "5 - Atualizar o cadastro de um funcionário" << endl;
    cout << "6 - Remover um funcionário" << endl;
    cout << "7 - Sair" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Selecione uma opção [1-7]:" << endl;
    cin >> in;
    cin.ignore();

    return in;
}
