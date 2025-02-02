#include "test.h"

#include <bsd/string.h>

void	test_ft_putchar_fd(void)
{
	const char *method_name = "test_ft_putchar_fd";

	fun_start(method_name);
	// printf("--- orig: %s %p\n", ft_split(test, c), strchr(test, c));
	// printf("---  new: %s %p\n", ft_strchr(test, c), ft_strchr(test, c));
	fun_end(method_name);
}
