//
// Created by Profesor08 on 16/06/2022.
//

#ifndef PRO2_CANALISTA_H
#define PRO2_CANALISTA_H

#include <string>
using namespace  std;

class CAnalista {
protected:
    string nombre;
    double sb;
    int    he;
    double the;
public:
    CAnalista(){}
    CAnalista(string _nombre, double _sb, int _he, double _the);
    virtual ~CAnalista(){}
    double sueldoNeto();
    virtual double bonificacion()=0;
    virtual double descuento()=0;
};


#endif //PRO2_CANALISTA_H
