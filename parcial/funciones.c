#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"

int funcionMenu(){
        int opcion;
        system("cls");
        printf("---M e n u---\n\n");
        printf("1-alta propietario\n");
        printf("2-Modificar producto\n");
        //printf("4-Baja producto\n");
        //printf("5-Informar\n");
        //printf("6-Listar\n");
        printf("ESC-Salir\n\n");
       // printf("Ingrese opcion: ");

        opcion=getch();

    return opcion;
}//funcion

void inicializarEstadoPersona(ePropetarios prov[],int tam){
    for(int i=0;i<tam;i++)
    {
        prov[i].estado = 0;
    }
}
void inicializarPropietarios(ePropetarios propie[])
{
    int id[]= {1,2,3,4};
    char nombre[][20]= {"Juan","Luis","Maria","Jose"};
    char tarjeta[][20]= {"111-111","222-222","333-333","444-444"};
    char direccion[][20]= {"mitre","urquiza","belgrano","alsina"};

    int i;

    for(i=0; i<20; i++)
    {
        propie[i].idPropietario=id[i];
        propie[i].tarjetaCredito=tarjeta[i];
        propie[i].estado = 1;
        strcpy(propie[i].nombre, nombre[i]);

    }

}

int buscarLibre(ePropetarios prov[],int tam){

int indice = -1; //si retorna -1 es que estan todos los espacios llenos, es decir todos los isEmpty en 0. osea que no hay nada vacio
for(int i=0;i<tam;i++){
    if(prov[i].estado == 0){
        indice = i;
        break;
    }
}
return indice;
}

int buscarPropietario(ePropetarios prov[],int tam,int id){

int existe = -1; //busca si existe, si retorna -1 es que no existe.
for(int i=0;i<tam;i++){
    if(prov[i].estado == 1 && prov[i].idPropietario == id)
    {
        existe = i;
        break;
    }
}
return existe;
}

void altaPropietario(ePropetarios prov[], int tam,int id){
system("cls");
int indice = buscarLibre(prov,tam);

if(indice<0){
    printf("Ya no queda espacio disponible en el sistema!.");
}
else{
        printf("---Alta propietario---\n\n");

        prov[indice].idPropietario = id;
        printf("\n su id es: %d", id);
        printf("\nIngrese nombre : ");
        fflush(stdin);
        scanf("%[^\n]",prov[indice].nombre);
        printf("\n ingrese apellido:");
        fflush(stdin);
        scanf("%[^\n]", prov[indice].apellido);
        fflush(stdin);
        printf("\n Ingrese el numero de la tarjeta de credito:");
        scanf("[^\n]",prov[indice].tarjetaCredito);
        printf("\n Ingrese la direccion:");
        fflush(stdin);
        scanf("%[^\n]",prov[indice].direccion);
        fflush(stdin);               bm

        prov[indice].estado = 1;
        system("cls");
        printf("Se han guardado los siguientes datos con exito!\n");
        system("pause");
        }
}
void modificar(ePropetarios prov[], int tam, int id)
{
    int auxPropi;
    int opcion;
    int existe;
    int seguir=1;

        do{
        system("cls");
        printf("---Modificaciones---\n");
        printf("\nIngrese el id del propietario!: ");
        scanf("%d",&auxPropi);
        existe = buscarPropietario(prov,tam,auxPropi);

        if(existe >= 0){

            printf("\nQue desea modificar del producto  %d",existe);
            printf("\n1- nombre");
            printf("\n2- direcion");
            printf("\n3- tarjeta de credito ");
            printf("\n\nIngrese opcion: ");
            scanf("%d",&opcion);

            switch(opcion){
                case 1:
                    system("cls");
                    printf("Modificar nombre!\n");
                    printf("\nDescripcion actual: %s\n",prov[existe].nombre);
                    printf("Ingrese nuevo nombre: ");
                    fflush(stdin);
                    scanf("%s", prov[existe].nombre);
                    printf("\nMODIFICACION EXITOSA\n!");
                    seguir = 0;
                    break;
                case 2:
                    system("cls");
                    printf("Modificar direccion!\n");
                    printf("\n direccion actual: %f\n",prov[existe].direccion);
                    printf("Ingrese nueva direccion: ");
                    fflush(stdin);
                    scanf("%[^\n]", &prov[existe].direccion);
                    printf("\nMODIFICACION EXITOSA\n!");
                    seguir = 0;
                    break;
                case 3:
                    system("cls");
                    printf("Modificar tarjeta de credito!\n");
                    printf("\ncantidad actual: %d\n",prov[existe].tarjetaCredito);
                    printf("Ingrese nueva tarjeta de credito : ");
                    scanf("%d", &prov[existe].tarjetaCredito);
                    printf("\nMODIFICACION EXITOSA\n!");
                    seguir = 0;
                    system("pause");
                    break;
                default:
                    printf("\nError! opcion incorecta\n");
                    }
        }
        else
        {
            printf("\nNo existe un trabajador con esa id!\n");
            system("pause");
        }
        }while(seguir!=0);
}



