
#include <stdio.h>
#include <string.h>
#include <unistd.h>


int main()
{
    char cad[] = "Aola-aa Bsksow";
    ft_strcapitalize(cad);
    write(1,cad, 15);
    
}

int main()
{
    char c[]="sdfsdf";
    char c1[]="sdfswedwe";
    unsigned int a = 8;
    printf("%d",ft_strlcpy(c1,c,a));
    write(1,c1,15);
    
}
int main()
{
    char cad[]="dmcapc \nldkslc";
    ft_putstr_non_printable(cad);
}
