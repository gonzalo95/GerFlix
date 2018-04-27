
#include "Usuario.h"
#include <string.h>

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }
}

void mostrarListaUsuarios(eUsuario usuario[], int len)
{
    int i;

    for(i = 0; i < len; i++)
    {
        if(usuario[i].estado ==1)
            printf("%d, %s, %d\n", usuario[i].idUsuario, usuario[i].nombre, usuario[i].idSerie);
    }
}

void mostrarUsuarioConSuSerie(eUsuario usuario[], int lenUsuario, eSerie serie[], int lenSerie)
{
    int i;
    int j;
    char serieNombre[50];

    for(i = 0; i < lenUsuario; i++)
    {
        for(j = 0; j < lenSerie; j++)
        {
            if(serie[j].idSerie == usuario[i].idSerie && serie[j].estado == 1)
                strcpy(serieNombre, serie[j].nombre);
        }
        if(usuario[i].estado ==1)
            printf("%s -- %s\n", usuario[i].nombre, serieNombre);
    }
}

