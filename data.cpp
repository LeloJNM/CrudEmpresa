#include "data.h"
#include <iostream>

using namespace std;


Data::Data(){
    dia = "1";
    mes = "1";
    ano = "1"; 
}

string Data::getDia(){
  return dia;
}

string Data::getMes(){
  return mes;
}

string Data::getAno(){
  return ano;
}

void Data::setDia(string dia){
  this->dia = dia;
};

void Data::setMes(string mes){
  this->mes = mes;
}

void Data::setAno(string ano){
  this->ano = ano;
}

string Data::getData(){
    return dia + "/" + mes + "/" + ano; 
}