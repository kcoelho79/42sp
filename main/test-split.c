#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	**res;
	char	*s;

	s = "sao,paulo,20";
	printf("teste SPLITS\n");
	printf("=== test01 ===\n");
	printf("SPLIT {sao,paulo,20} delimeter , \n");
	res = ft_split(s,',');
	int i = 0;
	while (res[i])
	{
		printf("result:%s\n",res[i]);
		i++;
	}
	free(res);
	printf("=== test02 ===\n");
	printf("SPLIT {  tripouille  42  } delimeter ' ' \n");
	res = ft_split("  tripouille  42  ",' ');
	i = 0;
	while (res[i])
	{
		printf("result:%s\n",res[i]);
		i++;
	}
	free(res);
	printf("=== test03 ===\n");
	printf("SPLIT {'sem a virtula'} delimeter , \n");
	res = ft_split("sem a virgula",',');
	i = 0;
	while (res[i])
	{
		printf("result:%s\n",res[i]);
		i++;
	}
	free(res);
	printf("=== test04 ===\n");
	printf("SPLIT {, virgula no final,} delimeter , \n");
	res = ft_split("virgula no final,",',');
	i = 0;
	while (res[i])
	{
		printf("result:%s\n",res[i]);
		i++;
	}
	free(res);
}