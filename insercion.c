#include <stdio.h>

#define N 10

void leeArreglo(int arr[N]);
void ordenacionTnsercion(int arr[N]);
void ordenacionInsercionConFor(int arr[N]);

int main()
{
    int arreglo[N];

    leeArreglo(arreglo);
    ordenacionInsercionConFor(arreglo);

    return 0;
}

void  ordenacionTnsercion(int arr[N])
{
    int actual,mover;
    int aux;

    for(actual = 1; actual < N; actual++)
    {
        mover = actual;
        while(mover > 0 && arr[mover]< arr[mover - 1])
        {
            aux = arr[mover];
            arr[mover] = arr[mover - 1];
            arr[mover - 1] = aux;

            mover = mover -1;
        }
    }
}

void ordenaInsercionConFord(int arr[N])
{
    int actual,mover;
    int aux;

    for(actual = 1; actual < N; actual++)
    {
        for(mover = actual; mover > 0 && arr[mover] < arr[mover - 1]; mover = mover -1)
        {
            aux = arr[mover];
            arr[mover] = arr[mover - 1];
            arr[mover - 1] = aux;
        }
    }
}

void leerArreglo(int arr[N])
{
    int i;

    for(i=0; i < N; i++)
    {
        printf("Arreglo[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}