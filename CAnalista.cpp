//
// Created by Profesor08 on 16/06/2022.
//

#include "CAnalista.h"


CAnalista::CAnalista(string _nombre, double _sb, int _he, double _the): nombre(_nombre), sb(_sb), he(_he), the(_the)
{
}

double CAnalista::sueldoNeto()
{
    return (sb + bonificacion()  - descuento());
}