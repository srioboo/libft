#include "testlibft.h"

void	test_ft_substr(void)
{
	const char		*method_name = "test_ft_substr";
	const char		*message = "--- '%s' ->\t\t {%s}\t '%s'\n\n";

	fun_start(method_name);
	fun_test_header(1);
	printf(message, ft_substr("", 0, 0), "0,0", "");
	printf(message, ft_substr("", 0, 1), "0,1", "");
	printf(message, ft_substr("", 1, 1), "1,1", "");
	printf(message, ft_substr("hola", -1, 0), "-1,0", "");
	printf(message, ft_substr("hola", 0, -1), "0,-1", "hola");
	printf(message, ft_substr("hola", -1, -1), "-1,-1", "");
	printf(message, ft_substr("hola", 0, 0), "0,0", "");
	printf(message, ft_substr("hola", 0, 1), "0,1", "h");
	printf(message, ft_substr("hola", 0, 3), "0,3", "hol");
	printf(message, ft_substr("hola", 0, 4), "0,4", "hola");
	printf(message, ft_substr("hola", 0, 5), "0,5", "hola");
	printf(message, ft_substr("hola", 2, 0), "2,0", "");
	printf(message, ft_substr("hola", 2, 1), "2,1", "l");
	printf(message, ft_substr("hola", 2, 2), "2,2", "la");
	printf(message, ft_substr("hola", 2, 3), "2,3", "la");
	printf(message, ft_substr("hola", 2, 30), "2,30", "la");
	printf(message, ft_substr("hola", 3, 0), "3,0", "");
	printf(message, ft_substr("hola", 3, 1), "3,1", "a");
	printf(message, ft_substr("hola", 3, 2), "3,2", "a");
	printf(message, ft_substr("hola", 4, 0), "4,0", "");
	printf(message, ft_substr("hola", 4, 1), "4,1", "");
	printf(message, ft_substr("hola", 4, 20), "4,2", "");
	printf(message, ft_substr("hola", 5, 2), "5,2", "");
	// printf(message, ft_substr("hola", 0, 18446744073709551615), "hola");
	// printf(message, ft_substr("hola", 4294967295, 18446744073709551615), "");
	fun_end(method_name);
}
