#include "testlibft.h"
#include <limits.h>

void	test_ft_itoa(void)
{
	const char *method_name = "test_ft_itoa";

	fun_start(method_name);
	fun_test_header(0);
	printf("%s expect: %d\n", ft_itoa(0), 0);
	fun_test_header(1);
	printf("%s expect: %d\n", ft_itoa(-1), -1);
	fun_test_header(1);
	printf("%s expect: %d\n", ft_itoa(9), 9);
	fun_test_header(2);
	printf("%s expect: %d\n", ft_itoa(1245), 1245);
	fun_test_header(3);
	printf("%s expect: %d\n", ft_itoa(-1245), -1245);
	fun_test_header(4);
	printf("%s expect: %d\n", ft_itoa(INT_MAX), INT_MAX);
	fun_test_header(5);
	printf("%s expect: %d\n", ft_itoa(INT_MIN), INT_MIN);
	fun_test_header(6);
	// printf("%s expect: %d\n", ft_itoa(INT_MAX + 1), INT_MAX + 1);
	fun_test_header(7);
	printf("%s expect: %d\n", ft_itoa(8124), 8124);
	fun_test_header(8);
	printf("%s expect: %d\n", ft_itoa(INT_MIN + 1), INT_MIN + 1);
	fun_test_header(9);
	printf("%s expect: %d\n", ft_itoa(2147483647), 2147483647);
	fun_test_header(10);
	printf("%s expect: %d\n", ft_itoa(-10004), -10004);
	fun_end(method_name);
}
