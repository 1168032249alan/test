#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"
#define ESC 27
#define CANT 20
#define PRODUC 100


int main()
{
    ePropetarios propietario[CANT];

    int opcion=0;
    int idProv=1;


    inicializarPropietarios(propietario);
    inicializarEstadoPersona(propietario,CANT);

     do{
        int funcionMenu();
        switch(funcionMenu()){
            case '1':
                altaPropietario(propietario,CANT,idProv);
                idProv++;
                break;
            case '2':
                    modificar(propietario,CANT,idProv);
                    break;
            //case '3':
                //modificar(producto,PRODUC);
                //break;
            //case '4':
              //  bajaProducto(producto,PRODUC);
                //break;
            case '5':
            case '6':
            case 27:
                    opcion = 'ESC';
                break;
        }
    }while(opcion != 'ESC');


    return 0;
}
