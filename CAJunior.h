//
// Created by Profesor08 on 16/06/2022.
//

#ifndef PRO2_CAJUNIOR_H
#define PRO2_CAJUNIOR_H

#include "CAnalista.h"

class CAJunior: public CAnalista {
public:
    CAJunior(){};
    CAJunior(string _nombre, double _sb, int _he, double _the);
    virtual ~CAJunior(){};

    double bonificacion() override;
    double descuento() override;

};


#endif //PRO2_CAJUNIOR_H
