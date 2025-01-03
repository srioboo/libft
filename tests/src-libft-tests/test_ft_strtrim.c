#include "testlibft.h"

#include <bsd/string.h>

void	test_ft_strtrim(void)
{
	const char	*method_name = "test_ft_strtrim";
	const char *message = "---\n result: '%s' set: '%s' expect: '%s'\n\n";

	fun_start(method_name);
	fun_test_header(1);
	// printf(message, ft_strtrim("hola mundo, adios hohoho", "ho"), "ho", "la mundo, adios ");
	printf(message, ft_strtrim("", ""), "", "");
	printf(message, ft_strtrim("así es asa", "as"), "as", "í es ");
	printf(message, ft_strtrim("abcd", ""), "", "abcd");
	printf(message, ft_strtrim("", ""), "", "");
	printf(message, ft_strtrim("", "cdef"), "cdef", "");
	printf(message, ft_strtrim(" . abcd", " "), " ", ". abcd");
	printf(message, ft_strtrim("ab cd  f    ", " "), " ", "ab cd  f");
	printf(message, ft_strtrim("xxxz  test with x and z and x .  zx  xx z", "z x"), "test with x and z and x .");
	printf(message, ft_strtrim("   abxfg  ", "x"), "x", "   abxfg  ");
	printf(message, ft_strtrim(".teste, bla ,.,.", ",."), ",.", "teste, bla ");
	fun_end(method_name);


}
