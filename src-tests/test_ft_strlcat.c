#include "test.h"
#include <bsd/string.h>



static void	test_ft_strlcat_0(void)
{
	size_t	size = 0;
	char *dest = "pqrstuvwxyz";
	char *src = "abcd";
	size_t	size1 = 0;
	char *dest1 = "pqrstuvwxyz";
	char *src1 = "abcd";

	fun_test_header_label(1, dest);
	printf("--- orig:\n\t\t '%s' %lu %p '%s'\n", src, strlcat(dest, src, size), dest, dest);
	printf("---  new:\n\t\t '%s' %lu %p '%s'\n", src1, ft_strlcat(dest1, src1, size1), dest1, dest1);

}

static void	test_ft_strlcat_1(void)
{
	size_t	size = 4;
	size_t	size1 = 4;
	char *dest = "abcd";
	char *src = "pqrstuvwxyz";
	char *dest1 = "abcd";
	char *src1 = "pqrstuvwxyz";

	fun_test_header_label(2, dest);
	printf("--- orig:\n\t\t '%s' %lu %p '%s'\n", src, strlcat(dest, src, size), dest, dest);
	printf("---  new:\n\t\t '%s' %lu %p '%s'\n", src1, ft_strlcat(dest1, src1, size1), dest1, dest1);
}

static void test_ft_strlcat_2(void)
{
	size_t size = 0;
	char *dest = "a";
	char *src = "lorem ipsum dolor sit amet";
	size_t size1 = 0;
	char *dest1 = "a";
	char *src1 = "lorem ipsum dolor sit amet";

	fun_test_header_label(3, dest);
	printf("--- orig:\n\t\t '%s' %lu %p '%s'\n", src, strlcat(dest, src, size), dest, dest);
	printf("---  new:\n\t\t '%s' %lu %p '%s'\n", src1, ft_strlcat(dest1, src1, size1), dest1, dest1);
}

static void test_ft_strlcat_3(void)
{
	size_t size = 15;
	size_t size1 = 15;
	char dest[15] = "a";
	char src[6] = "lorem";
	char dest1[15] = "a";
	char src1[6] = "lorem";

	fun_test_header_label(4, dest);
	printf("--- orig:\n\t\t '%s' %lu %p '%s'\n", src, strlcat(dest, src, size), dest, dest);
	printf("---  new:\n\t\t '%s' %lu %p '%s'\n", src1, ft_strlcat(dest1, src1, size1), dest1, dest1);
}

static void test_ft_strlcat_4(void)
{
	size_t size = 20;
	char dest[20] = "pqrstuvwxyz";
	char src[10] = "abcd";
	size_t size1 = 20;
	char dest1[20] = "pqrstuvwxyz";
	char src1[10] = "abcd";

	fun_test_header_label(5, dest);
	printf("--- orig:\n\t\t '%s' %lu %p '%s'\n", src, strlcat(dest, src, size), dest, dest);
	printf("---  new:\n\t\t '%s' %lu %p '%s'\n", src1, ft_strlcat(dest1, src1, size1), dest1, dest1);
}

static void test_ft_strlcat_5(void)
{
	size_t size = 10;
	char dest[10] = "pqrs";
	char src[10] = "abcdefghi";
	size_t size1 = 10;
	char dest1[10] = "pqrs";
	char src1[10] = "abcdefghi";

	fun_test_header_label(6, dest);
	printf("--- orig:\n\t\t '%s' %lu %p '%s'\n", src, strlcat(dest, src, size), dest, dest);
	printf("---  new:\n\t\t '%s' %lu %p '%s'\n", src1, ft_strlcat(dest1, src1, size1), dest1, dest1);
}

void test_ft_strlcat(void)
{
	const char *method_name = "test_ft_strlcat";

	fun_start(method_name);
	test_ft_strlcat_0();
	test_ft_strlcat_1();
	test_ft_strlcat_2();
	test_ft_strlcat_3();
	test_ft_strlcat_4();
	test_ft_strlcat_5();
	fun_end(method_name);
}
