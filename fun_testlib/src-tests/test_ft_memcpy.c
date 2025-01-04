#include "testlibft.h"

void	test_ft_memcpy(void)
{
	const char *method_name = "test_ft_memcpy";
	void *dest0[10];
	void *dest1[10];

	fun_start(method_name);
	fun_test_header(0);
	printf("--- orig: %p - %s\n", memcpy(dest0, "123456", 4), (char *)(dest0));
	printf("---  new: %p - %s\n", ft_memcpy(dest1, "123456", 4), (char *)(dest1));
	fun_test_header(1);
	printf("--- orig: %p - %s\n", memcpy(dest0, "12345678901", 4), (char *)(dest0));
	printf("---  new: %p - %s\n", ft_memcpy(dest1, "12345678901", 4), (char *)(dest1));
	fun_end(method_name);
}
