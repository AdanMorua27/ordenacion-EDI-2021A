#include <stdio.h>

#define N 5

void leerArrgelo(int arr[N]);
void burbuja(int arr[N]);

int main()
{
    int arreglo[N];

    leerArreglo(arreglo);
    burbuja(arreglo);

    return 0;
}

void burbuja(int arr[N])
{
    int i,j;
    int aux;

    for(j=0; j < N-1; j++)
    {
        for(i = 0; i < N -(j + 1); j++)
        {
            if(arr[i] > arr[i + 1])
            {
                aux = arr[i + 1];
                arr[i +1] = arr[i];
                arr[i] = aux;
            }
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