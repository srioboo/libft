#include "test.h"

static void	test_ft_memcmp_0(void)
{
	void	*src1 = malloc(6);
	void	*src2 = malloc(5);
	size_t	size;

	size = 5;
	src1 = "teste";
	src2 = "test";
	fun_test_header(0);
	printf("--- orig:\n\t\t %d - %s\n",
		memcmp(src1, src2, size), (char *)(src1));
	printf("---  new:\n\t\t %d - %s\n",
		ft_memcmp(src1, src2, size), (char *)(src1));
	fun_test_header(1);
	printf("--- orig:\n\t\t %d - %s\n",
		memcmp(src2, src1, size), (char *)(src2));
	printf("---  new:\n\t\t %d - %s\n",
		ft_memcmp(src2, src1, size), (char *)(src2));
}

static void	test_ft_memcmp_1(void)
{
	void	*src1 = malloc(6);
	void	*src2 = malloc(5);
	size_t	size;

	size = 5;
	src1 = "abcdef";
	src2 = "abc\375xx";
	fun_test_header(0);
	printf("--- orig:\n\t\t %d - %s\n",
		memcmp(src1, src2, size), (char *)(src1));
	printf("---  new:\n\t\t %d - %s\n",
		ft_memcmp(src1, src2, size), (char *)(src1));
	fun_test_header(1);
	printf("--- orig:\n\t\t %d - %s\n",
		memcmp(src2, src1, size), (char *)(src2));
	printf("---  new:\n\t\t %d - %s\n",
		ft_memcmp(src2, src1, size), (char *)(src2));
}
	void test_ft_memcmp(void)
{
	const char	*method_name = "test_ft_memcmp";

	fun_start(method_name);
	test_ft_memcmp_0();
	test_ft_memcmp_1();
	fun_end(method_name);
}
