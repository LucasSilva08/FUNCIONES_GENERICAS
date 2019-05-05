#include <stdio.h>
#include "PedirDatos.h"
#define LIBRE 0
#define OCUPADO 1
typedef struct
{
    int idGenerica;
    char Nombre[51];
    //-----------
    int estado;
}eGenerico;

int inicializarListaGenerica(eGenerico[],int);
int BuscarLibre(eGenerico[],int);
int BuscarUno(eGenerico[],int,int);
int CargarUno(eGenerico[],int);
void MostrarUno(eGenerico);
void MostrarLista(eGenerico[],int);
void BorrarUno(eGenerico[],int,int);

