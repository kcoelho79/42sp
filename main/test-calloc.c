#include "../libft.h"
#include <stdio.h>

int main(void)
{
	void *p;
	void *p1;
	void *p3;
	int *p4;
	char e[]= {0,0,0,0};
	int res;

	res = 0;
	printf("Teste CALLOC\n");
	printf("test 01 \n");
	p4 = ft_calloc(2,1);
	res = ft_memcmp(p, e, 4);
	printf("comparando resultado tem que ser igual 0 : %i\n",res);
	printf("comparando tamnaho %li = %li\n",sizeof(e),sizeof(p));
	printf("tamanho p :%li\n",sizeof(p));
	p1 = calloc(5,2);
	printf("tamanho p1 :%li\n",sizeof(p1));
	printf("tamanho p3 :%li\n",sizeof(p3));

	}
