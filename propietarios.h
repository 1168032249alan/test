#ifndef PROPIETARIOS_H_INCLUDED
#define PROPIETARIOS_H_INCLUDED

typedef struct
{
    char nombreApellido[100];
    char direccion[100];
    int idPropietario;
    char tarjetaCredito[20];
    int estado;

}ePropietario;

#endif // PROPIETARIOS_H_INCLUDED

int validarNumero(char numero[]);
int ePropietario_buscarLugarLibre(ePropietario[],int );

int ePropietario_siguienteId(ePropietario[] ,int );
int ePropietario_alta(ePropietario[] ,int );

int validarNombre(char nombre[]);
int ePropietario_buscarPorId(ePropietario[] ,int , int );
int devolverHorasEstadia();

void inicializarPropietariosHardCode(ePropietario[]);
void ePropietario_init(ePropietario[],int);

void ePropietario_modificacion(ePropietario[] ,int);
void ePropietario_baja(ePropietario[] ,int );

void ePropietario_mostrarUno(ePropietario parametro);
void ePropietario_mostrarListado(ePropietario[] ,int limite);

