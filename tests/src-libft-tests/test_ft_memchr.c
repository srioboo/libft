#include "testlibft.h"

static void	ft_print_test(void *data, int c, size_t size)
{
	printf("--- orig: %p - %p\n", memchr(data, c, size), &c);
	printf("---  new: %p - %p\n", ft_memchr(data, c, size), &c);
}

void	test_ft_memchr(void)
{
	const char	*method_name = "test_ft_memchr";
	char 	data[] = "Hola mundo!";
	int			c;
	size_t		size;

	fun_start(method_name);
	fun_test_header(0);
	c = 97;
	size = 5;
	ft_print_test(data, c, size);
	fun_test_header(1);
	c = 115;
	size = 5;
	ft_print_test(data, c, size);
	fun_test_header(2);
	c = '\251';
	ft_print_test(data, c, size);
	fun_test_header(3);
	char s[] = {0, 1, 2, 3, 4, 5};
	c = 0;
	size = 1;
	ft_print_test(s, c, size);
	fun_test_header(4);
	c = 2;
	ft_print_test(s, c, size);
	fun_test_header(5);
	c = 2 + 256;
	size = 3;
	ft_print_test(s, c, size);
	fun_end(method_name);
}



//KO 20 : /* 2 */ check(ft_memchr(s, 0, 1) == s); showLeaks();
//KO 21 : /* 3 */ check(ft_memchr(s, 2, 3) == s + 2); showLeaks();
//KO 23 : /* 5 */ check(ft_memchr(s, 2 + 256, 3) == s + 2); showLeaks(); // Cast check
