/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main_test.c                                                              */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_libft_1(int active)
{
	if (active == 1)
	{
		test_ft_isalpha();
		test_ft_isdigit();
		test_ft_isalnum();
		test_ft_isascci();
		test_ft_isprint();
		test_ft_toupper();
		test_ft_tolower();
		test_ft_strlen();
		test_ft_strchr();
		test_ft_strlcpy();
		test_ft_strncmp();
		test_ft_strlcat();
		test_ft_strrchr();
		test_ft_strnstr();
	}
}

static void	test_libft_2(int active)
{
	if (active == 1)
	{
		test_ft_atoi();
		test_ft_memset();
		test_ft_bzero();
		test_ft_memmove();
		test_ft_memcpy();
		test_ft_memchr();
		test_ft_memcmp();
		test_ft_calloc();
		test_ft_strdup();
		test_ft_substr();
		test_ft_strjoin();
		test_ft_strtrim();
		test_ft_split();
	}
}

static void	test_libft_3(int active)
{
	if (active == 1)
	{
		test_ft_itoa();
		test_ft_strmapi();
		test_ft_striteri();
		test_ft_putchar_fd();
		test_ft_putstr_fd();
		test_ft_putend_fd();
		test_ft_putnbr_fd();
	}
}

int	main(int argc, char **argv)
{
	if (!argc)
		printf("%d", argc);
	if (!argv)
		printf("%s", argv[0]);
	test_ft_dummy(1);
	fun_start(" LIBFT =============");
	test_libft_1(0);
	test_libft_2(0);
	test_libft_3(0);
	fun_start(" LIBFT (BONUS) ==========");
	test_ft_lists();
	fun_start(" FT_PRINTFT =============");
	test_ft_printf_char(0);
	test_ft_printf_numbers(0);
	test_ft_printf_str(0);
	test_ft_printf_percent(0);
	test_ft_printf_hex(0);
	test_ft_printf_pointers(0);
	fun_start(" GNL =============");
	test_gnl(1);
	test_gnl_read_error(0);
}
