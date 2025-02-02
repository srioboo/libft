#include "test.h"

#include <bsd/string.h>

char ft_map(unsigned int i, char c)
{
	char result = 'c';

	if (i == 2)
		result = c;
	return (result);
}

void	test_ft_strmapi(void)
{
	const char *method_name = "test_ft_strmapi";

	fun_start(method_name);
	printf("--- orig: %s\n", ft_strmapi("test", ft_map));
	fun_end(method_name);
}
