#include <stdio.h>
#include "../libft.h"

int main(void)
{
	char *res = malloc(sizeof(char) * 20);
	printf("teste STRTRIM\n");
	printf("=== test01 ===\n");
	printf("trimate {k,r} in  kleber\n");
	res = ft_strtrim("kleber","kr");
	printf("result:%s\n",res);
	free(res);
	printf("=== test02 ===\n");
	printf("trimate { x} in '   xxxtripouille   xxx  '\n");
	res = ft_strtrim("   xxxtripouille   xxx"," x");
	printf("result:%s\n",res);
	free(res);
	printf("=== test03 ===\n");
	printf("trimate { ""} in '   xxx   xxx'\n");
	res = ft_strtrim("   xxx   xxx"," ");
	printf("result:%s\n",res);
	free(res);
}
