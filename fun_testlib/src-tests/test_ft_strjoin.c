#include "test.h"

// #include <bsd/string.h>

void	test_ft_strjoin(void)
{
	const char		*method_name = "test_ft_substr";

	fun_start(method_name);
	fun_test_header(1);
	printf("--- %s \n", ft_strjoin("hola", "adios"));
	printf("--- %s \n", ft_strjoin("", ""));
	fun_end(method_name);
}
