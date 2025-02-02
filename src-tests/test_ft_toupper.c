#include "test.h"

void	test_ft_toupper(void)
{
	const char	*method_name = "test_ft_toupper";
	int			test;

	fun_start(method_name);
	test = 97;
	fun_test_header(1);
	printf("%d %d \n",toupper(test), test - 32);
	printf("%d %d \n",ft_toupper(test), test - 32);
	test = 122;
	fun_test_header(2);
	printf("%d %d \n",toupper(test), test - 32);
	printf("%d %d \n",ft_toupper(test), test - 32);
	fun_end(method_name);
}
