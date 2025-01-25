#include "test.h"

void	test_ft_tolower(void)
{
	const char	*method_name = "test_ft_tolower";
	int			test;

	fun_start(method_name);
	test = 65;
	fun_test_header(1);
	printf("%d %d \n",tolower(test), test + 32);
	printf("%d %d \n",ft_tolower(test), test + 32);
	test = 90;
	fun_test_header(2);
	printf("%d %d \n",tolower(test), test + 32);
	printf("%d %d \n",ft_tolower(test), test + 32);
	fun_end(method_name);
}
