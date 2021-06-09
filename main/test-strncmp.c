#include "../libft.h"
#include <stdio.h>

int main(void)
{
	int res,res2 = 0;
	printf("test strncmp\n");
	res = ft_strncmp("kleber","kleber",6);
	printf("resultado 1 :%i\n",res);
	res2 = ft_strncmp("1234","1235",4);
	printf("resultado 2 :%i\n",res2);

}