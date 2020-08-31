#include <stdio.h>
#include <unistd.h>
void ft_print_combn(int n)
{int tamaño = n;
    int contador = 0;
    int contador2;
    int aux = 0;
    char array[n];
    
    while (aux < n)
    {
        array[aux] = '0' + aux;
        aux++;
    }
    n--;
    while (contador < tamaño - 1)
    {
        write(1, &array, tamaño);
        write(1, ", ", 2);
        if (array[n] < '0' + (9 - contador))
        {

            array[n]++;
        }
        else
        {
            array[n] = array[n - 1] + 2;
            if (array[n - 1] == ('0' + 9 - contador-1))
            {
                n--;
                contador++;
                contador2=n;
            }
            else
            {
                array[n - 1]++;
            }
        }
    }
}