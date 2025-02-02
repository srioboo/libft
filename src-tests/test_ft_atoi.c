#include "test.h"

static void	test_ft_atoi_long(void)
{
	char	*test = malloc(12);

	test = "2147483647";
	fun_test_header_label(1, test);
	fun_show_orig_new(atoi, ft_atoi, test);
	test = "-2147483647";
	fun_test_header_label(2, test);
	fun_show_orig_new(atoi, ft_atoi, test);
}

static void	test_ft_atoi_sign(void)
{
	char *test = malloc(6);

	test = "--123";
	fun_test_header_label(1, test);
	fun_show_orig_new(atoi, ft_atoi, test);
	test = "-+123";
	fun_test_header_label(2, test);
	fun_show_orig_new(atoi, ft_atoi, test);
	test = "+-123";
	fun_test_header_label(3, test);
	fun_show_orig_new(atoi, ft_atoi, test);
	test = "++123";
	fun_test_header_label(4, test);
	fun_show_orig_new(atoi, ft_atoi, test);
}

static void	test_ft_atoi_chars(void)
{
	fun_test_header_label(1, "    123");
	fun_show_orig_new(atoi, ft_atoi, "    123");
	fun_test_header_label(2, " \t\v\n\r\f123");
	fun_show_orig_new(atoi, ft_atoi, " \t\v\n\r\f123");
	fun_test_header_label(3, "");
	fun_show_orig_new(atoi, ft_atoi, "");
}

void	test_ft_atoi(void)
{
	const char	*method_name = "test_ft_atoi";

	fun_start(method_name);
	test_ft_atoi_long();
	test_ft_atoi_sign();
	test_ft_atoi_chars();
	fun_test_header_label(1, "\001 3");
	fun_show_orig_new(atoi, ft_atoi, "\001 3");
	fun_test_header_label(2, "\037 32");
	fun_show_orig_new(atoi, ft_atoi, "\037 32");
	fun_end(method_name);
}
