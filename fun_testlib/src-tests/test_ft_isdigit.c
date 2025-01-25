#include "test.h"

void	test_ft_isdigit(void)
{
	const char	*method_name = "test_ft_isdigit";
	int			test;

	fun_start(method_name);
	test = 48;
	printf("%d %d \n",isdigit(test), test);
	printf("%d %d \n",ft_isdigit(test), test);
	test = 57;
	printf("%d %d \n",isdigit(test), test);
	printf("%d %d \n",ft_isdigit(test), test);
	test = 2;
	printf("%d %d \n",isdigit(test), test);
	printf("%d %d \n",ft_isdigit(test), test);
	test = 97;
	printf("%d %d \n",isdigit(test), test);
	printf("%d %d \n",ft_isdigit(test), test);
	fun_end(method_name);
}
