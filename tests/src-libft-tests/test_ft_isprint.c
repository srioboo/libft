#include "testlibft.h"

void	test_ft_isprint(void)
{
	const char	*method_name = "test_ft_isprint";
	int			test;

	fun_start(method_name);
	test = 0;
	printf("%d %d \n",isprint(test), test);
	printf("%d %d \n",ft_isprint(test), test);
	test = 32;
	printf("%d %d \n",isprint(test), test);
	printf("%d %d \n",ft_isprint(test), test);
	test = 126;
	printf("%d %d \n",isprint(test), test);
	printf("%d %d \n",ft_isprint(test), test);
	test = 127;
	printf("%d %d \n",isprint(test), test);
	printf("%d %d \n",ft_isprint(test), test);
	fun_end(method_name);
}
