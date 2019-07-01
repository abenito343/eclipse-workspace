#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/tads/Coll.hpp"
using namespace std;

struct Vuelo
{
   int idVue;
   int cap;
   int idOri; // idCiu origen
   int idDes; // idCiu origen
};

struct Ciudad
{
   int idCiu;
   string descr;
   int millas;
};
struct Reserva
{
   int idCli;
   int idVue;
   int cant;
};

struct RCiudad
{
   Ciudad ciu;
   int cont;
};

struct RVuelo
{
   Vuelo vue;
   int contRech;
   int contOc;
};

struct RCliente
{
   int idCli;
   int acum;
};

int cmpRCiudadId(RCiudad c,int id)
{
   return c.ciu.idCiu-id;
}

void actualizarContadorDestino(Coll<RCiudad>& c,int idCiu)
{
   int p = collFind<RCiudad>(c,idCiu,cmpRCiudadId,rciudadFromString);
   RCiudad rc = collGetAt<RCiudad>(c,p,rciudadFromString);
   rc.cont++;
   collSetAt<RCiudad>(c,rc,p,rciudadToString);
}

void actualizarCantRechazadas(Coll<RVuelo>& c,int idVue, int cant)
{
   int p = collFind<RVuelo>(c,idVue,cmpRVueloId,rvueloFromString);
   RVuelo rv = collGetAt<RVuelo>(c,p,rvueloFromString);
   rv.contRech+=cant;
   collSetAt<RVuelo>(c,rv,p,rVueloToString);
}


void actualizarCantOcupadas(Coll<RVuelo> &c,int idVue,int cant)
{
   int p = collFind<RVuelo>(c,idVue,cmpRVueloId,rvueloFromString);
   RVuelo rv = collGetAt<RVuelo>(c,p,rvueloFromString);
   rv.contOc+=cant;
   collSetAt<RVuelo>(c,rv,p,rVueloToString);
}


RCiudad buscarCiudad(Coll<RCiudad> c,int id)
{
   int p = collFind<RCiudad>(c,idCiu,cmpRCiudadId,rciudadFromString);
   RCiudad rc = collGetAt<RCiudad>(c,p,rciudadFromString);
   return rc;
}

RVuelo buscarVuelo(Coll<RVuelo> c,int idVue)
{
   int p = collFind<RVuelo>(c,idVue,cmpRVueloId,rvueloFromString);
   RVuelo rv = collGetAt<RVuelo>(c,p,rvueloFromString);
   return rv;
}


int main()
{
   Coll<RCiudad> cciu = collCreate<RCiudad>();
   cargarCiudades(cciu);

   Coll<RVuelo> cvue = collCreate<RVuelo>();
   cargarVuelos(cvue);

   Coll<RCliente> ccli = collCreate<RCliente>();


   Reserva r = leerReserva();
   while( r.idCli>=0 )
   {
      RVuelo rvue = buscarVuelo(cvue,r.idVue);

      // busco ciudad destino
      Ciudad cdes = buscarCiudad(cciu,rvue.vue.idDes);

      // sumo 1 a la cantida de familias que eligieron destino
      actualizarContadorDestino(cciu,rvue.vue.idDes);


      // puedo aceptar la reserva?
      if( r.cant + rvue.contOc <= rvue.vue.cap )
      {
         // busco ciudad ori/des
         Ciudad cori = buscarCiudad(cciu,rvue.vue.idOri);

         // calculo las millas
         int millas = abs(cdes.millas-cori.millas);

         // acumulo millas cliente
         sumarMillascliente(ccli,r.idCli,millas);

         // actualizo cont de plazas ocupadas
         actualizarCantOcupadas(cvue,r.idVue,r.cant);
      }
      else // RECHAZO
      {
         // actualizo cont de plazas rech
         actualizarCantRechazadas(cvue,r.idVue,r.cant);
      }

      r = leerReserva();
   }


   mostrarPunto1(ccli);
   mostrarPunto2(cciu);
   mostrarPunto3(cvue);


   return 0;
}









