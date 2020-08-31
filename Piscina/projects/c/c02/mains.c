int main()
{
	char string[]="holaque tal estasss";
	char dest;
	write(1,ft_strcpy(&dest,string),20);
}

int main()
{
	int n=6;
	char string[]="123456789hola";
	char dest;
	write(1,ft_strncpy(&dest,string,n),6);
}

int main()
{
	char string[]="a1234593939";
	printf("%d",ft_str_is_alpha(string));
}

int main()
{
	char string[]="012345is789";
	printf("%d",ft_str_is_numeric(string));
}
int main()
{
    char dest[]="kjnwej";
    char src[]="sdcn";
    unsigned int a= 4;
    //ft_strlcpy(dest,src,a);
    strlcpy(dest,src,a);
    write(1,dest,6);
}
int main()
{
    char cadena[]="S+sp=soo";
    write(1,ft_strcapitalize(cadena),20);
}
