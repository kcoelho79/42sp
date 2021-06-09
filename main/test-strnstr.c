#include "../libft.h"
#include <stdio.h>

int main(void)
{
	char s1[40] = "kleber de olivira sousa";
	char s2[30] = "sousa";
	char *res;

	printf("====================\n");
	printf("TESTE STRNSTR\n");
	printf("====================\n");
	printf("src: \t %s\n",s1);
	printf("procura:%s\n",s2);
	res = ft_strnstr(s1,s2, 20);
	printf("resultado: \t %s",res);
	printf("\n");
	printf("====================\n");
	printf("teste 2\n");
	res = ft_strnstr("kleber","kleber",6);
	printf("resultado: \t %s\n",res);


	return (0);

}