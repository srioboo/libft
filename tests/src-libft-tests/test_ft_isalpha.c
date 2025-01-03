#include "testlibft.h"

void	test_ft_isalpha(void)
{
	const char	*method_name = "test_ft_isalpha";
	int			test;

	fun_start(method_name);
	test = 65;
	printf("%d %d \n",isalpha(test), test);
	printf("%d %d \n",ft_isalpha(test), test);
	test = 90;
	printf("%d %d \n",isalpha(test), test);
	printf("%d %d \n",ft_isalpha(test), test);
	test = 2;
	printf("%d %d \n",isalpha(test), test);
	printf("%d %d \n",ft_isalpha(test), test);
	test = 97;
	printf("%d %d \n",isalpha(test), test);
	printf("%d %d \n",ft_isalpha(test), test);
	test = 122;
	printf("%d %d \n",isalpha(test), test);
	printf("%d %d \n",ft_isalpha(test), test);
	test = 130;
	printf("%d %d \n",ft_isalpha(test), test);
	printf("%d %d \n",isalpha(test), test);
	fun_end(method_name);
}
