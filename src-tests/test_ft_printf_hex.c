/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:55:49 by srioboo-          #+#    #+#             */
/*   Updated: 2025/01/11 23:21:29 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_hex_may(int active)
{
	if (active != 0)
	{
		fun_assert_int_fun(printf, ft_printf, "-1 %X \n", -1);
		fun_assert_int_fun(printf, ft_printf, "-2 %X \n", -2);
		fun_assert_int_fun(printf, ft_printf, "-10 %X \n", -10);
		fun_assert_int_fun(printf, ft_printf, "-15 %X \n", -15);
		fun_assert_int_fun(printf, ft_printf, "1 %X\n", 1);
		fun_assert_int_fun(printf, ft_printf, "2 %X \n", 2);
		fun_assert_int_fun(printf, ft_printf, "10 %X \n", 10);
		fun_assert_int_fun(printf, ft_printf, "15 %X \n", 15);
	}
}

static void	test_hex_neg(int active)
{
	if (active != 0)
	{
		fun_assert_int_fun(printf, ft_printf, "-1 '%x'\n", -1);
		fun_assert_int_fun(printf, ft_printf, "-2 %x \n", -2);
		fun_assert_int_fun(printf, ft_printf, "-10 %x \n", -10);
		fun_assert_int_fun(printf, ft_printf, "-15 %x \n", -15);
		fun_assert_int_fun(printf, ft_printf, "-16 %x \n", -16);
		fun_assert_int_fun(printf, ft_printf, "-20 '%x'\n", 20);
		fun_assert_int_fun(printf, ft_printf, "-100 '%x'\n", 100);
	}
}

static void	test_hex(int active)
{
	if (active != 0)
	{
		fun_test_header_label(2, "NEW/ORI hexadecimal");
		fun_assert_int_fun(printf, ft_printf, "2 %x \n", 2);
		fun_assert_int_fun(printf, ft_printf, "1 '%x'\n", 1);
		fun_assert_int_fun(printf, ft_printf, "10 '%x'\n", 10);
		fun_assert_int_fun(printf, ft_printf, "16 '%x'\n", 16);
		fun_assert_int_fun(printf, ft_printf, "12 '%x'\n", 12);
		fun_assert_int_fun(printf, ft_printf, "100 '%x'\n", 100);
		fun_assert_int_fun(printf, ft_printf, "0 '%x'\n", 0);
	}
}

void	test_ft_printf_hex(int active)
{
	char	*method_name;

	if (active != 0)
	{
		method_name = fun_method_name("test_ft_printf_hex");
		fun_start(method_name);
		test_hex(1);
		test_hex_neg(1);
		test_hex_may(1);
		fun_end(method_name);
		method_name = fun_free_str(method_name);
	}
}
