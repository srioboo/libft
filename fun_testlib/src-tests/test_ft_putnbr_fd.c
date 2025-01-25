#include "test.h"

void	test_ft_putnbr_fd(void)
{
	const char *method_name = "test_ft_putnbr_fd";

	fun_start(method_name);
	fun_test_header(1);
	ft_putnbr_fd(0, 1);
	fun_test_header(2);
	ft_putnbr_fd(2, 1);
	fun_test_header(2);
	ft_putnbr_fd(342, 1);
	fun_test_header(3);
	ft_putnbr_fd(2147483647, 1);
	fun_test_header(4);
	ft_putnbr_fd(-2147483648, 1);
	fun_test_header(5);
	ft_putnbr_fd(164189, 1);
	fun_test_header(6);
	ft_putnbr_fd(-164189, 1);
	fun_end(method_name);
}
