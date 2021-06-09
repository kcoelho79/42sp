#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*res;

	printf("=== test ft_itoa==\n");
	printf("test01\n");
	printf("numero: -1213434 \n");
	res = ft_itoa(-1213434);
	printf("res: %s \n",res);
	free(res);
	printf("test02\n");
	printf("numero: 1213434 \n");
	res = ft_itoa(1213434);
	printf("res: %s \n",res);
	printf("=== fim test ===\n");
}
