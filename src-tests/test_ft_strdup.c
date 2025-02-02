#include "test.h"

#include <bsd/string.h>

void	test_ft_strdup(void)
{
	const char *method_name = "test_ft_strdup";
	char	*s1 = "ABCDE";

	fun_start(method_name);
	fun_test_header(1);
	printf("orig: %s | new: %s\n", ft_strdup(s1), s1);
	fun_test_header(2);
	printf("orig: %s | new: %s\n", ft_strdup(""), "");
	fun_end(method_name);
}
