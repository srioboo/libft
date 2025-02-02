#include "test.h"

#include <bsd/string.h>

void	test_ft_strnstr_1(const char *str)
{
	// printf("--- orig: %s - %s\n", str, strnstr(str, "Bar", 5));
	printf("---  new: %s - %s\n", str, ft_strnstr(str, "Bar", 5));
	// printf("--- orig: %s - %s\n", str, strnstr(str, "Baz", 5));
	printf("---  new: %s - %s\n", str, ft_strnstr(str, "Baz", 5));
}

void	test_ft_strnstr_2(const char *str)
{
	// printf("--- orig: %s - %s\n", str, strnstr(str, "Bar", 11));
	printf("---  new: %s - %s\n", str, ft_strnstr(str, "Bar", 11));
	// printf("--- orig: %s - %s\n", str, strnstr(str, "Baz", 11));
	printf("---  new: %s - %s\n", str, ft_strnstr(str, "Baz", 11));
}

void	test_ft_strnstr_3(const char *str)
{
	// printf("--- orig: %s - %s\n", str, strnstr(str, "Bar", 26));
	printf("---  new: %s - %s\n", str, ft_strnstr(str, "Bar", 26));
	// printf("--- orig: %s - %s\n", str, strnstr(str, "Bar", 26));
	printf("---  new: %s - %s\n", str, ft_strnstr(str, "Bar", 26));
}

void	test_ft_strnstr(void)
{
	const char	*method_name;
	const char	*str;

	method_name = "test_ft_strnstr";
	str = "Foo Bar Baz";
	fun_start(method_name);
	fun_test_header(1);
	test_ft_strnstr_1(str);
	fun_test_header(2);
	test_ft_strnstr_2(str);
	fun_test_header(3);
	test_ft_strnstr_3(str);
	fun_end(method_name);
}


