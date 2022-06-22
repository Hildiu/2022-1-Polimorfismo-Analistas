#include <iostream>
#include <string>
#include "CAnalista.h"
#include "CASenior.h"
#include "CAJunior.h"

using namespace std;

int main()
{
  int opcion;
  CAnalista *pObjeto= nullptr;
  string nombre;
  double sb,the,pa;
  int he,na;

  do {
      cout << "Seleccione el tipo de Analista" << "\n";
      cout << "1. Analista Senior " << "\n";
      cout << "2. Analista Junior " << "\n";
      cout << "Seleccione la opcion :";
      cin >> opcion;
  }while(opcion!=1 and opcion!=2);
  if (opcion==1)
  {
     cout << "Nombre :"; cin >> nombre;
     cout << "Sueldo Basico: "; cin >> sb;
     cout << "Horas extras : "; cin >> he;
     cout << "Tarifa por hora extra: "; cin >> the;
     cout << "Numero de acciones   : "; cin >> na;
     cout << "Precio por accion    : "; cin >> pa;
     pObjeto = new CASenior(nombre,sb,na,the,na,pa);
  }
  else
  {   cout << "Nombre :"; cin >> nombre;
      cout << "Sueldo Basico: "; cin >> sb;
      cout << "Horas extras : "; cin >> he;
      cout << "Tarifa por hora extra: "; cin >> the;
      pObjeto = new CAJunior(nombre,sb,he,the);
  }
  cout << "El Sueldo neto es: " << pObjeto->sueldoNeto();
  delete pObjeto;
  pObjeto = nullptr;
  return 0;
}
