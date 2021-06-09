#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*res;

	printf("=== test SUBSTR ===\n");
	res = ft_substr("Kleber Coelho", 2, 3);
	printf("resultado : %s\n" ,res);
	free(res);
	printf("test2\n");
	res = ft_substr("tripouille", 1, 1);
	printf("result02: %s\n",res);
	free(res);
	printf("test3\n");
	res = ft_substr("tripouille", 100, 1);
	printf("result03: %s\n",res);
	free(res);
	printf("test4\n");
	res = ft_substr("tripouille", 0, 42000);
	printf("result04: %s\n",res);
	free(res);
	printf("test5\n");
	res = ft_substr("42", 0, 0);
	printf("result05: %s\n",res);
	free(res);
	printf("fim teste\n");
}

