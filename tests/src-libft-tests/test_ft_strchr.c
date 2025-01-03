#include "testlibft.h"

#include <bsd/string.h>

void	test_ft_strchr(void)
{
	const char		*method_name = "test_ft_strchr";
	char			*test = malloc(11);
	int				c;

	fun_start(method_name);
	test = "teste";
	c = 0;
	printf("--- orig: %s %p\n", strchr(test, c), strchr(test, c));
	printf("---  new: %s %p\n", ft_strchr(test, c), ft_strchr(test, c));
	fun_test_header(1);
	c = 't';
	printf("--- orig: %s %p\n", strchr(test, c), strchr(test, c));
	printf("---  new: %s %p\n", ft_strchr(test, c), ft_strchr(test, c));
	fun_test_header(2);
	c = 'e';
	printf("--- orig: %s %p\n", strchr(test, c), strchr(test, c));
	printf("---  new: %s %p\n", ft_strchr(test, c), ft_strchr(test, c));
	fun_test_header(3);
	c = '\0';
	printf("--- orig: %s %p\n", strchr(test, c), strchr(test, c));
	printf("---  new: %s %p\n", ft_strchr(test, c), ft_strchr(test, c));
	fun_test_header(4);
	c = '\0';
	printf("--- orig: %s %p\n", strchr(test, c), strchr(test, c));
	printf("---  new: %s %p\n", ft_strchr(test, c), ft_strchr(test, c));
	fun_test_header(5);
	c = 'e' + 256;
	printf("--- orig: %s %p\n", strchr(test, c), strchr(test, c));
	printf("---  new: %s %p\n", ft_strchr(test, c), ft_strchr(test, c));
	fun_test_header(6);
	c = 1024;
	printf("--- orig: %s %p\n", strchr(test, c), strchr(test, c));
	printf("---  new: %s %p\n", ft_strchr(test, c), ft_strchr(test, c));
	fun_test_header(7);
	c = 'a';
	printf("--- orig: %s %p\n", strchr(test, c), strchr(test, c));
	printf("---  new: %s %p\n", ft_strchr(test, c), ft_strchr(test, c));
	fun_end(method_name);
}
