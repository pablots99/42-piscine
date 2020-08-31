#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void imprimechunks(char **chunks,char *buff, int len);

//[a number][0 to n spaces]:[0 to n spaces][cualquier car\'acter imprimible]\n
char  *leedicccionario(char *ruta)
{
	int fd;
	ssize_t nr_bytes;
  char *buff = (char*)malloc(100000);
	fd = open(ruta, O_RDONLY);
	if (fd == -1)
	{
		write(1,"error",5);
	}
	else
	{
		nr_bytes = read(fd,buff,100000);
    	free(buff);
		close(fd);

		if(nr_bytes == 0)
			write(1,"vacio",5);
	}
  	 
     return (buff);
}
void imprimefila(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\n' && str[i] != 0)
	{
		write(1,&str[i],1);
		i++;
	}
	write(1," ",1);

}
int ft_strlen(char* str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
void encuentra(char *num, char *buff)
{
	int i;
	int j;
	int aux;

	i = 0;
	while (buff[i] != 0)
	{
		j = 0;
		aux = 0;
		while (num[j] != 0)
		{
			if(buff[j + i] == num [j])
				aux++;
			j++;
		}
		if(buff[j] == '\n')
		 	aux = 0;
		if (aux == j && !(buff[i -1] >= '0'  && buff[i - 1] <= '9'))
		{
			imprimefila(&buff[i + aux + 1]);
		}
		i++;	
	}
		
}
void eszero(char *num3, char *buff)
{
	if(num3[0] == '0' && num3[1] == '0' && num3[2] == '0')
		encuentra("0:",buff);
}
void desglosa(char *num3, char *buff)
{
	int len;
	int i;
	char dig1[3];
	char dig2[4];
	int cond;
	
	cond = 0;
	dig1[1] = ':';
	dig1[2] = 0;
	dig2[2] = ':';
	dig2[3] = 0;
	i = 0;
	len = ft_strlen(num3);
	eszero(num3,buff);
	while (len > 0 && len <= 3)
	{
		if(len == 3 && num3[i] !='0' )
		{
			dig1[0] = num3[i];
			encuentra(dig1, buff);
			encuentra("100:",buff);
		}
		if (len == 2 && num3[i] == '1')
		  {
		 	 	dig2[0] = num3[i];
		 	  	dig2[1] = num3[i + 1];
		 	  	encuentra(dig2, buff);
			   	cond = 1;
		 }
		 else if (len == 2)
		 {
		 	dig2[0] = num3[i];
		 	dig2[1] = '0';
		 	encuentra(dig2, buff);
		 }
		 if (len == 1 && cond == 0  && num3[i] != '0')
		 {
		 	dig1[0] = num3[i];
		 	encuentra(dig1, buff);
		}
		len--;
		i++;
	}
}
void reservaMemoria(char **chunks,int len)
{
	int filas = len;
	int columnas = 3;
	int i;

	chunks = (char **)malloc(filas); 

	i = 0;
	while (i < filas)
	{
		chunks[i] = (char*)malloc(columnas);
		i++;
	}
}
void generachunks(char *numeros,char *buff)
{
	int len;
	len = (ft_strlen(numeros)/3);
	if ((ft_strlen(numeros)%3) >= 1)
		len++;
	int i;
	char **chunks;
	int j;
	reservaMemoria(chunks,len);
	i = 0;
	while (i < len -3)
	{
		j = 0;
		while(j < 3)
		{
			chunks[i][j] = numeros[i + j];
			j++;
		}
		i +=3;
	}
	free(chunks);
	imprimechunks(chunks,buff,len);
}
void imprimechunks(char **chunks,char *buff, int len)
{
	int i;
	int lenaux;

	lenaux = len;
	i = 0;
	while (i < len)
	{
		write(1,chunks[i],3);
		desglosa(chunks[i],buff);
		//imprimemiles(lenaux);
		i++;
		lenaux--;
	}
}
// void imprimemiles()
// {

// }

int main(int argc, char **argv)
{
    char *buff;
	 if(argc)
     {
	  	if(argc == 2)
		{
	  		buff = leedicccionario("numbers.dict");
			//desglosa(argv[1],buff);
			generachunks(argv[1],buff);
		}
	  	else if(argc == 3)
	 	    buff = leedicccionario(argv[2]);
     }
}