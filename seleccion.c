#include <stdio.h>

#define N 8

void leerArreglo(int arr[N]);

int main()
{
    int arreglo[N];

    leeArreglo(arreglo);
    ordenacionSeleccion(arreglo);

    return 0;
}

 void ordenacionSeleccion(int arr[N])
 {
     int actual, pos;
     int aux;

     for (actual = 0; actual < N; actual++)
     {
         for(pos= actual + 1; pos < N; pos++)
         {
             if(arr[pos] < arr[actual])
             {
                 aux = arr[pos];
                 arr[pos] = arr[actual];
                 arr[actual] = aux;
             }
         }
     }
 }

void leeArreglo(int arr[N])
{
    int i;

    for(i = 0; i < N; i++)
    {
        printf("arr[i]: ");
        scanf("%d",&arr[i]);
    }
}