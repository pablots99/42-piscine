#include <stdio.h>
#include <stdlib.h>
void numeros_mostrados(int *nums);
void imprimearr(int arr[][4]);
void cuentanums(int arr[][4]);
void compruebanumeros(int *numeros, int arr[][4], int num[][2]);
void rellenaUltimo(int arr[][4], int n, int num[][2]);

void rellena_fijos(int arr[4][4],int filas[4][2],int columnas[4][2])
{
   
    int numeros[4] = {0, 0, 0, 0};
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            arr[i][j] = 0;
            //si hay un 1 pone 4  y si hay un 1 y un 2 pone 4 y 3
            if (filas[j][0] == 1)
            {
                arr[0][j] = 4;
                numeros[3]++;
                if (filas[j][1] == 2)
                {
                    arr[3][j] = 3;
                    numeros[2]++;
                }
            }
            else if (columnas[i][0] == 1)
            {
                arr[i][0] = 4;
                numeros[3]++;
                if (columnas[i][1] == 2)
                {
                    arr[i][3] = 3;
                    numeros[2]++;
                }
            }
            else if (filas[j][1] == 1)
            {
                arr[3][j] = 4;
                numeros[3]++;
                if (filas[j][0] == 2)
                {
                    arr[0][j] = 3;
                    numeros[2]++;
                }
            }
            else if (columnas[i][1] == 1)
            {
                arr[i][3] = 4;
                numeros[3]++;
                if (columnas[i][0] == 2)
                {
                    arr[i][0] = 3;
                    numeros[2]++;
                }
            }
            // si hay un 2 y un 3 pone un 4 en posicion mas cercana al 2
            if (columnas[i][0] == 2 && columnas[i][1] == 3)
            {
                arr[i][1] = 4;
                numeros[3]++;
            }
            else if (columnas[i][1] == 2 && columnas[i][0] == 3)
            {
                arr[i][2] = 4;
                numeros[3]++;
            }
            else if (filas[i][0] == 2 && filas[i][1] == 3)
            {
                arr[1][j] = 4;
                numeros[3]++;
            }
            else if (filas[i][1] == 2 && filas[i][0] == 3)
            {
                arr[2][j] = 4;
                numeros[3]++;
            }
            // si hay un 4
            //printf("%d ", arr[i][j]);
            j++;
        }
        //printf("\n");
        i++;
    }
    imprimearr(arr);
    cuentanums(arr);
}
void imprimearr(int arr[][4])
{
    int i;
    int j;

    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            printf("%d ", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
void cuentanums(int arr[][4])
{
    int numeros[4] = {0, 0, 0, 0};
    int i;
    int j;
    int num[16][2];
    i=0;
    while (i < 16)
    {
        j=0;
        while (j < 2)
        {
            num[i][j]=0;
            j++;
        }
        i++;
    }
    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            if (arr[i][j] == 4)
            {
                numeros[3]++;
                num[8 + j][0] = i;
                num[8 + j][1] = j;
            }
            else if (arr[i][j] == 3)
            {
                numeros[2]++;
                num[5 + j][0] = i;
                num[5 + j][1] = j;
            }
            else if (arr[i][j] == 2)
            {
                numeros[1]++;
                num[2 + j][0] = i;
                num[2 +  j][1] = j;
            }
            else if (arr[i][j] == 1)
            {
                numeros[0]++;
                num[j][0] = i;
                num[j][1] = j;
            }
            j++;
        }
        i++;
    }
    compruebanumeros(numeros, arr, num);
}
void compruebanumeros(int *numeros, int arr[][4], int num[][2])
{
    int i;
    i = 0;
    while (i < 4)
    {
        printf("%d=%d, ", i + 1, numeros[i]);

        if (numeros[i] == 3)
        {
            rellenaUltimo(arr, i, num);
        }

        i++;
    }
}
void rellenaUltimo(int arr[][4], int n, int num[][2])
{
    int i;
    int aux1 = 6;
    int aux2 = 6;

    printf("\n\n");
    i = 0;
    while (i < 3)
    {
        printf("%d%d ",num[(n*n - 1)+ i][0],num[(n*n  - 1)+ i][1]);
        aux1 -= num[(n*n - 1)+ i][0];
        aux2 -= num[(n*n  - 1)+ i][1];
        i++;
    }
    printf("\n %d%d \n",aux1,aux2);
    //arr[aux1][aux2] = n + 1;
    imprimearr(arr);
}
void datos()
{

}

int main(int arc, char *argv[])
{
     int matriz[4][4];
     char enunciado[16];
     (void)	arc;
    int filas[4][2] = {{3, 2}, {1, 2}, {3, 1}, {2, 3}};
    int columnas[4][2] = {{2, 2}, {2, 1}, {2, 2}, {3, 2}};
     
     datos(argv[1], enunciado,filas[4][2],columnas[4][2]);
    rellena_fijos(matriz,filas[4][2],columnas[4][2]);

}