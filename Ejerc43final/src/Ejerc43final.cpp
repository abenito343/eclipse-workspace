//============================================================================
// Name        : Ejerc43final.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void ingresoYevaluo ( int&, string&, string&, int&, char&, string&, bool&);
void datos ( int&, char, int&, double&, int&);
void exedente (int, int, double, int, int&, double&);

int main()
{
   int minutos_excedidos = 0, min_libres = 0;
   double montoT = 0;                           // Datos que debo calcular en las funciones
   string turno = "Mañana";                     // Variable de cambio de turno
   bool b = true;

   int nro_celular, tiempo_util;
   char tipo_abono;                             // Variables de ingreso de datos
   string nombre, direccion;

   while ( turno != "FIN" )                     // Evaluo en que turno estoy
   {
      ingresoYevaluo ( nro_celular, nombre, direccion, tiempo_util, tipo_abono, turno, b );

      if ( turno != "FIN" && b && nro_celular != 0 )  // seteo la varible 'b' para no mostrar mas de una vez la leyenda turno: ___
         {
            cout << "Turno: " << turno << endl;
            b = false;
         }

      if ( nro_celular > 0 )                       // si el numero ingresado no es 0 muestro lo ingresado para dicho turno
         {
            datos( tiempo_util, tipo_abono, minutos_excedidos, montoT, min_libres );

            cout << "Persona de nombre: " << nombre << endl;
            cout << "Direccion: " << direccion << endl;
            cout << "Minutos libres : " << min_libres << " minutos" << endl;
            cout << "Minutos excedidos : " << minutos_excedidos << " minutos" << endl;
            cout << "Monto Total a Abonar : $" << montoT << endl;
         }
   }
   cout << endl << turno << endl;

   return 0;
}

void exedente (int costo, int minLibres, double ValorMinExce, int minUtili, int& minExce, double& montoAAbonar)
{
   minExce = (minUtili - minLibres);   // cantidad de minutos excedidos
   montoAAbonar = costo + double (minExce * ValorMinExce);     // monto total que se debe abonar
}

void datos ( int& tiempo, char tipoAbono, int& minExe, double& montoTotal, int& min_libres)
{
   if ( tipoAbono == 'A' || tipoAbono == 'a' )    // Evaluo el abono que se haya ingresado y evaluo
   {
      if ( tiempo > 300)
      {
         // se excede
         exedente( 70, 300, 0.09, tiempo, minExe, montoTotal);
         min_libres = 0;
      }
      else
      {
         // no se excede
         minExe = 0;
         montoTotal = 70;
         min_libres = 300 - tiempo;
      }
   }
   if ( tipoAbono == 'B' || tipoAbono == 'b' )
   {
      if ( tiempo > 200)
      {
         // se excede
         exedente( 55, 200, 0.15, tiempo, minExe, montoTotal );
         min_libres = 0;
      }
      else
      {
         // no se excede
         minExe = 0;
         montoTotal = 55;
         min_libres = 200 - tiempo;
      }
   }
   if ( tipoAbono == 'C' || tipoAbono == 'c' )
   {
      if ( tiempo > 100)
      {
         // se excede
         exedente( 40, 100, 0.21, tiempo, minExe, montoTotal );
         min_libres = 0;
      }
      else
      {
         // no se excede
         minExe = 0;
         montoTotal = 40;
         min_libres = 100 - tiempo;
      }
   }
   if ( tipoAbono == 'D' || tipoAbono == 'd' )
   {
      if ( tiempo > 60)
      {
         // se excede
         exedente( 28, 60, 0.29, tiempo, minExe, montoTotal );
         min_libres = 0;
      }
      else
      {
         // no se excede
         minExe = 0;
         montoTotal = 28;
         min_libres = 60 - tiempo;
      }
   }
   if ( tipoAbono == 'E' || tipoAbono == 'e' )
   {
      if ( tiempo > 40)
      {
         // se excede
         exedente( 19, 40, 0.37, tiempo, minExe, montoTotal );
         min_libres = 0;
      }
      else
      {
         // no se excede
         minExe = 0;
         montoTotal = 19;
         min_libres = 40 - tiempo;
      }
   }
}

void ingresoYevaluo ( int& nro_celular, string& nombre, string& direccion, int& tiempo_util, char& tipo_abono, string& turno, bool& b )
{
   cout << "Ingrese numero de celular de 9 digitos (0 para cambio de turno): " ;
   cin >> nro_celular;

   if (nro_celular != 0)                     // Si ingresa 0 se vuelve a pedir nro_celular en el int main()
      {
         cout << "Ingrese el nombre: " ; cin >> nombre ;
         cout << "Ingrese direccion: " ; cin >> direccion ;
         cout << "Ingrese el tiempo utilizado: " ; cin >> tiempo_util ;
         cout << "Ingrese el tipo de abono: " ; cin >> tipo_abono ;
      }
      else
      {
         if ( turno == "Mañana" )            // Si ingresa 0 se cambia el turno
         {
            turno = "Tarde";
            b = true;
         }
         else if ( turno == "Tarde")      // Cambio el turno de mañana -> tarde -> noche -> FIN
         {
            turno = "Noche";
            b = true;
         }
         else
            turno = "FIN";
      }
}
