#include "FuncionesGenericas.h"
#include <string.h>


int inicializarListaGenerica(eGenerico listaGenerica[],int largo)
{
    int retorno=-1;
    int i;
    for(i=0;i<largo;i++)
    {
        listaGenerica[i].estado=LIBRE;
        retorno=0;
    }
    return retorno;
}
int BuscarLibre(eGenerico listaGenerica[],int largo)
{
    int indice=-1;
    int i;
    for(i=0;i<largo;i++)
    {
        if(listaGenerica[i].estado==LIBRE)
        {
            indice=i;
            break;
        }
    }
    return indice;
}
int BuscarUno(eGenerico listaGenerica[],int largo,int id)
{
    int i;
    int indice=-1;
    for(i=0;i<largo;i++)
    {
       if(listaGenerica[i].idGenerica==id&&listaGenerica[i].estado==OCUPADO)
       {
           indice=i;
           break;
       }
    }
    return indice;
}
int CargarUno(eGenerico listaGenerica[],int largo)
{
    int retorno =-1;
    int i;
    i=BuscarLibre(listaGenerica,largo);
    if(i!=-1)
    {
        listaGenerica[i].idGenerica=2;
        strcpy(listaGenerica[i].Nombre,"lucas");
        //-------------
    listaGenerica[i].estado=OCUPADO;
    retorno=0;
    }
    else
    {
        printf("\nNO HAY ESPACIO!!!\n");
    }
    return retorno;
}
void MostrarUno(eGenerico Generico)
{
    printf("%d--%s--",Generico.idGenerica,Generico.Nombre);
}
void MostrarLista(eGenerico listaGenerica[],int largo)
{
    int i;
    for(i=0;i<largo;i++)
    {
        if(listaGenerica[i].estado!=LIBRE)
        {
            MostrarUno(listaGenerica[i]);
            break;
        }
    }
}
void BorrarUno(eGenerico listaGenerica[],int largo, int id)
{

    int indice;
    indice=BuscarUno(listaGenerica,largo,id);
    if(indice!=-1)
    {
        listaGenerica[indice].estado=LIBRE;
    }
    else
    {
        printf("\nNO SE ENCONTRO!!!\n");
    }
}
