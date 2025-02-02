#include "test.h"

void	test_ft_memmove(void)
{
	const char	*method_name = "test_ft_memmove";
	void		*dest0[10];
	void		*dest1[10];

	fun_start(method_name);
	fun_test_header(0);
	printf("--- orig: %p - %s\n", memmove(dest0, "123456", 4), (char *)(dest0));
	printf("---  new: %p - %s\n", ft_memmove(dest1, "123456", 4), (char *)(dest1));
	fun_test_header(1);
	printf("--- orig: %p - %s\n", memmove(dest0, "12345678901", 4), (char *)(dest0));
	printf("---  new: %p - %s\n", ft_memmove(dest1, "12345678901", 4), (char *)(dest1));
	fun_end(method_name);
}
