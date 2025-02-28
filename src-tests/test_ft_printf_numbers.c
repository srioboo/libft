/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_numbers.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:55:49 by srioboo-          #+#    #+#             */
/*   Updated: 2025/01/12 00:37:44 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_numbers_1(int active)
{
	if (active != 0)
	{
		fun_test_header_label(1, "NEW/ORI");
		fun_assert_int_fun(printf, ft_printf, " %d ", -10);
		fun_assert_int_fun(printf, ft_printf, " %d ", -11);
		fun_assert_int_fun(printf, ft_printf, " %d ", -14);
		fun_assert_int_fun(printf, ft_printf, " %d ", -15);
		fun_assert_int_fun(printf, ft_printf, " %d ", -16);
		fun_assert_int_fun(printf, ft_printf, " %d ", -99);
		fun_assert_int_fun(printf, ft_printf, " %d ", -100);
		fun_assert_int_fun(printf, ft_printf, " %d ", -101);
		fun_assert_int_fun(printf, ft_printf, " %d ", INT_MAX);
		fun_assert_int_fun(printf, ft_printf, " %d ", INT_MIN);
	}
}

static void	test_numbers_2(int active)
{
	int	size;
	int	size_new;

	if (active != 0)
	{
		fun_test_header_label(2, "NEW/ORI");
		size_new = ft_printf("i '%i' '%i %i' %d\n", -1, 2, 13, 15);
		size = printf("i '%i' '%i %i' %d\n", -1, 2, 13, 15);
		fun_assert_int(size, size_new);
		fun_assert_int_fun(printf, ft_printf, " %d ", 10);
		fun_assert_int_fun(printf, ft_printf, " %d ", 11);
		fun_assert_int_fun(printf, ft_printf, " %d ", 15);
		fun_assert_int_fun(printf, ft_printf, " %d ", 16);
		fun_assert_int_fun(printf, ft_printf, " %d ", 17);
		fun_assert_int_fun(printf, ft_printf, " %d ", 99);
		fun_assert_int_fun(printf, ft_printf, " %d ", 100);
		fun_assert_int_fun(printf, ft_printf, " %d ", 101);
	}
}

static void	test_unsigned_numbers(int active)
{
	if (active != 0)
	{
		fun_test_header_label(3, "NEW/ORI");
		fun_assert_int_fun(printf, ft_printf, " %i ", -1);
		fun_assert_int_fun(printf, ft_printf, " %u \n", -42);
		fun_assert_int_fun(printf, ft_printf, "ULONG %u\n", ULONG_MAX);
		fun_assert_int_fun(printf, ft_printf, " %u\n", LONG_MAX);
		fun_assert_int_fun(printf, ft_printf, " %u\n", LONG_MIN);
	}
}

void	test_ft_printf_numbers(int active)
{
	char	*method_name;

	if (active != 0)
	{
		method_name = fun_method_name("test_ft_printf_numbers");
		fun_start(method_name);
		test_numbers_1(1);
		test_numbers_2(1);
		test_unsigned_numbers(1);
		fun_end(method_name);
		method_name = fun_free_str(method_name);
	}
}
