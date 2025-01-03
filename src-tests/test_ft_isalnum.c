#include "testlibft.h"

void	test_ft_isalnum(void)
{
	const char	*method_name = "test_ft_isalnum";

	fun_start(method_name);
	test_ft_isdigit();
	test_ft_isalpha();
	fun_end(method_name);
}
