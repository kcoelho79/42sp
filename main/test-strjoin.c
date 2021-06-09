#include <stdio.h>
#include "../libft.h"

int main(void)
{
	char *res = malloc(sizeof(char) * 20);
	printf("teste STRJOIN\n");
	printf("=== test01 ===\n");
	printf("concatenate kleber + coelho\n");
	res = ft_strjoin("klebersdsdsdsdsdsds"," coelho");
	printf("result:%s\n",res);
	free(res);
	printf("=== test02 ===\n");
	printf("concatenate '/0' + coelho\n");
	res = ft_strjoin(""," coelho");
	printf("result02:%s\n",res);
	free(res);
}

