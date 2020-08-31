#include <stdio.h>
void   prinhello(int num);
void bucle(void);
int main()
{
    
    bucle();
}

void   prinhello(int num)
{
    if(num == 0 || num==1)
    {
        printf("%d", num);
    }
    else
    {
    printf("el numero no es igual a 0 ni 1");
    }   
}
void bucle()
{
    int num = 0;
    while (num == 0 )
    {
        printf("hola ");
        num ++;
    }
    
}



