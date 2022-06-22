//
// Created by Profesor08 on 16/06/2022.
//

#include "CAJunior.h"


CAJunior::CAJunior(string _nombre, double _sb, int _he, double _the): CAnalista(_nombre, _sb, _he, _the)
{ }


double CAJunior::bonificacion()
{
  return(1000 + the*he);
}

double CAJunior::descuento()
{
    return( 750 + 0.05*sb);
}