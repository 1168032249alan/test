#ifndef AUTOS_H_INCLUDED
#define AUTOS_H_INCLUDED
#include "propietarios.h"

typedef struct
{
    int marca;
    char patente[20];
    int idPropietario;
    int idAuto;
    int estado;
    float importe;

}eAuto;

#endif // AUTOS_H_INCLUDED

void hardcoreIngresos(eAuto[]);
void eAuto_init(eAuto[],int);

void eAuto_ingreso(eAuto listadoAutos[],ePropietario listadoPropietarios[], int largoAutos, int largoPropietarios);
void eAuto_mostrarUno(eAuto parametro);

void eAuto_egreso(eAuto listadoAutos[],ePropietario listadoPropietarios[], int largoAutos, int largoPropietarios);
void eAuto_mostrarListado(eAuto listadoAutos[],int limite);

void egresosHardcode(eAuto listadoAutos[]);
void eAuto_mostrarEgresos(eAuto listadoAutos[], int largoAutos, ePropietario listadoPropietarios[], int largoPropietarios);

void eAuto_recaudacionTotal(eAuto listadoAutos[], int largoAutos);
void eAuto_recaudacionPorMarca(eAuto listadoAutos[], int largoAutos);

void eAuto_buscarPorIdPropietario(eAuto listadoAutos[], int largoAutos, ePropietario listadoPropietarios[], int largoPropietarios);
void eAuto_datosAudi(eAuto listadoAutos[], int largoAutos, ePropietario listadoPropietarios[], int largoPropietarios);
void eAuto_estacionadosPorPatente(eAuto listadoAutos[], int largoAutos, ePropietario listadoPropietarios[], int largoPropietarios);

int eAuto_siguienteId(eAuto listadoAutos[],int limite);
int eAuto_buscarLugarLibre(eAuto listado[],int limite);
int eAuto_buscarPorId(eAuto listadoAutos[] ,int limite, int id);
