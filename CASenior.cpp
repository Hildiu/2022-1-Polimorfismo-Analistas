//
// Created by Profesor08 on 16/06/2022.
//

#include "CASenior.h"



CASenior::CASenior(string _nombre, double _sb, int _he, double _the, int _na, double _pa):CAnalista(_nombre,_sb,_he,_the)
{
    na = _na;
    pa = _pa;
}


double CASenior::bonificacion()
{
    return( the*he + na*pa);
}


double CASenior::descuento()
{
    return (0.1*sb);
}



