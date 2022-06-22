//
// Created by Profesor08 on 16/06/2022.
//

#ifndef PRO2_CASENIOR_H
#define PRO2_CASENIOR_H

#include "CAnalista.h"

class CASenior:public CAnalista {
private:
    int    na;
    double pa;
public:
    CASenior() {}
    CASenior(string _nombre, double _sb, int _he, double _the, int _na, double _pa);
    virtual ~CASenior(){}

    double bonificacion() override;
    double descuento() override;
};


#endif //PRO2_CASENIOR_H
