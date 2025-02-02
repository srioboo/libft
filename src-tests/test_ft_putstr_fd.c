#include "test.h"

void	test_ft_putstr_fd(void)
{
	const char *method_name = "test_ft_putstr_fd";

	fun_start(method_name);
	ft_putstr_fd("hola mundo", 1);
	fun_end(method_name);
}
