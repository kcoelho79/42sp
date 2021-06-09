#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;

	printf("=== test ft_putchar ===\n");
	ft_putchar_fd('c', 1);
	printf("\n=== test ft_putstr ===\n");
	ft_putstr_fd("kleber", 1);
	printf("\n=== test ft_endl ===\n");
	ft_putendl_fd("coelho",1);
	printf("=== test ft_putnbr ===\n");
	s = ft_itoa(-123);
	printf("aplicando itoa em -123, result: %s\n",s);
	printf("aplicando pustr result:\n");
	ft_putstr_fd(s,1);
	printf("\n");
	//ft_putnbr_fd(121,1);
}
