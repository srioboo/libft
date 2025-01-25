#include "test.h"

void	test_ft_bzero(void)
{
	const char	*method_name = "test_ft_bzero";
	void		*ptr[10];
	char		*test;

	test = (char *)ptr;
	fun_start(method_name);
	printf("--- orig :\n");
	bzero(ptr, 10);
	printf("---  new :\n");
	ft_bzero(ptr, 10);
	printf("%s", test);
	fun_end(method_name);
}
