#include "test.h"

#include <bsd/string.h>

void	test_ft_strlen(void)
{
	const char		*method_name = "test_ft_strlen";

	fun_start(method_name);
	printf("--- orig: %s (%lu)\n", "hola mundo", strlen("hola mundo"));
	printf("---  new: %s (%lu)\n", "hola mundo", ft_strlen("hola mundo"));
	fun_end(method_name);
}
