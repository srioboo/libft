#include "test.h"

#include <bsd/string.h>

void	test_ft_strncmp(void)
{
	const char	*method_name = "test_ft_strncmp";
	char	*s1 = "ABCDE";
	char	*s2 = "ABBDE";
	char	*s3 = "AB";
	char	*s4 = "ABCDZ";
	int		c;

	fun_start(method_name);
	fun_test_header(1);
	c = 6;
	printf("orig: %d \t| new: %d\n", strncmp(s1, s2, c), ft_strncmp(s1, s2, c));
	printf("orig: %d\t| new: %d\n", strncmp(s1, s3, c), ft_strncmp(s1, s3, c));
	printf("orig: %d\t| new: %d\n", strncmp(s1, s4, c), ft_strncmp(s1, s4, c));
	c = 2;
	printf("orig: %d \t| new: %d\n", strncmp(s1, s4, c), ft_strncmp(s1, s4, c));
	fun_test_header(2);
	s1 = "test\200";
	s2 = "test\0";
	c = 6;
	printf("orig: %d\t| new: %d\n", strncmp(s1, s2, c), ft_strncmp(s1, s2, c));
	fun_test_header(3);
	s1 = "test";
	s2 = "";
	c = 0;
	printf("orig: %d \t| new: %d\n", strncmp(s1, s2, c), ft_strncmp(s1, s2, c));
	c = 1;
	printf("orig: %d\t| new: %d\n", strncmp(s1, s2, c), ft_strncmp(s1, s2, c));
	s1 = "teste";
	s2 = "testex";
	c = 6;
	printf("orig: %d \t| new: %d\n", strncmp(s1, s2, c), ft_strncmp(s1, s2, c));
	fun_test_header(4);
	s1 = "abc";
	s2 = "abc";
	c = 7;
	printf("orig: %d \t| new: %d\n", strncmp(s1, s2, c), ft_strncmp(s1, s2, c));
	fun_end(method_name);
}
