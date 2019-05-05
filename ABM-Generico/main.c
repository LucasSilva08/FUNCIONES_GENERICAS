//#include <stdio.h>
#include <stdlib.h>
#include "FuncionesGenericas.h"
#define LARGO_ARRAY 5

int main()
{
    eGenerico listaGenerica[LARGO_ARRAY];
    inicializarListaGenerica(listaGenerica,LARGO_ARRAY)
    CargarUno(listaGenerica,LARGO_ARRAY);
    MostrarLista(listaGenerica,LARGO_ARRAY);
    return 0;
}
