#include "../libft.h"
#include <stdio.h>

char	funcao(unsigned int i, char c)
{
	return (i + c);
}

int	main(void)
{
	char	*s;
	char	*ss;
	size_t	len_s;
	size_t	len_ss;

	s = "1234";
	printf("teste 01\n");
	ss = ft_strmapi(s, funcao);
	printf("applie s %s in funcao\nresult: %s\n", s, ss);
	printf("check length pointer\n");
	if (ft_strlen(s) == ft_strlen(ss))
		printf("ok\n");
	else
		printf("size is not equal = error mane\n");
	printf("=x=x=x");
	free(ss);
	s = "";
	printf("teste 0s\n");
	ss = ft_strmapi(s, funcao);
	printf("applie s %s in funcao\nresult: %s\n", s, ss);
	printf("=x=x=x");
	free(ss);
	s = "1234";
	printf("teste 03\n");
	ss = ft_strmapi(s, NULL);
	printf("applie s %s in funcao\nresult: %s\n", s, ss);
	printf("=x=x=x");
	free(ss);
}
