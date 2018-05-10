typedef struct{

    int tarjetaCredito;
    char nombre[51];
    char apellido[51];
    char direccion;
    int idPropietario;
    int estado;
}ePropetarios;

int funcionMenu();
void inicializarEstadoPersona(ePropetarios prov[],int tam);

int buscarLibre(ePropetarios prov[],int tam);
int buscarPropietario(ePropetarios prov[],int tam,int id);

void altaPropietario(ePropetarios prov[], int tam,int id);
void modificar(ePropetarios prov[], int tam,int id);

void inicializarPropietarios(ePropetarios[]);

