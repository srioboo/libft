#include "test.h"

void	test_ft_isascci(void)
{
	const char	*method_name = "test_ft_isascci";
	int			test;

	fun_start(method_name);
	test = -1;
	printf("%d %d \n",isascii(test), test);
	printf("%d %d \n",ft_isascii(test), test);
	test = 0;
	printf("%d %d \n",isascii(test), test);
	printf("%d %d \n",ft_isascii(test), test);
	test = 127;
	printf("%d %d \n",isascii(test), test);
	printf("%d %d \n",ft_isascii(test), test);
	test = 128;
	printf("%d %d \n",isascii(test), test);
	printf("%d %d \n",ft_isascii(test), test);
	fun_end(method_name);
}
