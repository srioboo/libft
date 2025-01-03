#include "testlibft.h"

#include <bsd/string.h>

void test_ft_strrchr(void)
{
	const char *method_name = "test_ft_strrchr";
	char	*test = malloc(6);
	char	*hola = malloc(6);

	test = "teste";
	hola = "holao";
	fun_start(method_name);
	fun_test_header(0);
	printf("--- orig: %s %p\n", strrchr(test, 0), strrchr(test, 0));
	printf("---  new: %s %p\n", ft_strrchr(test, 0), ft_strrchr(test, 0));
	fun_test_header(1);
	printf("--- orig: %s %p\n", strrchr(test, 101), strrchr(test, 101));
	printf("---  new: %s %p\n", ft_strrchr(test, 101), ft_strrchr(test, 101));
	fun_test_header_label(2, hola);
	printf("--- orig: %s %p\n", strrchr(hola, 97), strrchr(hola, 97));
	printf("---  new: %s %p\n", ft_strrchr(hola, 97), ft_strrchr(hola, 97));
	fun_test_header_label(3, hola);
	printf("--- orig: %s %p\n", strrchr(hola, 111), strrchr(hola, 111));
	printf("---  new: %s %p\n", ft_strrchr(hola, 111), ft_strrchr(hola, 111));
	fun_test_header_label(4, hola);
	printf("--- orig: %s %p\n", strrchr(hola, '\0'), strrchr(hola, '\0'));
	printf("---  new: %s %p\n", ft_strrchr(hola, '\0'), ft_strrchr(hola, '\0'));
	fun_test_header_label(5, hola);
	printf("--- orig: %s %p\n", strrchr(hola, 'x'), strrchr(hola, 'x'));
	printf("---  new: %s %p\n", ft_strrchr(hola, 'x'), ft_strrchr(hola, 'x'));
	fun_test_header_label(6, hola);
	printf("--- orig: %s %p\n", strrchr(hola, 1024), strrchr(hola, 1024));
	printf("---  new: %s %p\n", ft_strrchr(hola, 1024), ft_strrchr(hola, 1024));
	fun_test_header_label(7, hola);
	printf("--- orig: %s %p\n",
		strrchr(hola, (1024 + 'a')), strrchr(hola, (1024 + 'a')));
	printf("---  new: %s %p\n",
		ft_strrchr(hola, (1024 + 'a')), ft_strrchr(hola, (1024 + 'a')));
	fun_test_header_label(8, "bounjourno");
	printf("--- orig: %s %p\n", strrchr("bounjourno", 'o'), strrchr("bounjourno", 'o'));
	printf("---  new: %s %p\n", ft_strrchr("bounjourno", 'o'), ft_strrchr("bounjourno", 'o'));
	fun_end(method_name);
}
