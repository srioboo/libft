/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_pointers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:55:49 by srioboo-          #+#    #+#             */
/*   Updated: 2025/01/12 11:31:01 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_pointers(int active)
{
	int	size;
	int	size_new;

	if (active != 0)
	{
		fun_test_header_label(1, "NEW/ORI pointers");
		fun_assert_int_fun(printf, ft_printf, "-1: %p ", -1);
		fun_assert_int_fun(printf, ft_printf, "1: %p ", 1);
		fun_assert_int_fun(printf, ft_printf, "15: %p ", 15);
		fun_assert_int_fun(printf, ft_printf, "16: %p ", 16);
		fun_assert_int_fun(printf, ft_printf, "17: %p ", 17);
		fun_assert_int_fun(printf, ft_printf, " %p %p ", INT_MIN, INT_MAX);
		fun_assert_int_fun(printf, ft_printf, " %p %p ", LONG_MIN, LONG_MAX);
		fun_assert_int_fun(printf, ft_printf, " %p %p ", ULONG_MAX, -ULONG_MAX);
		fun_assert_int_fun(printf, ft_printf, " %p %p ", 0, 0);
		size = printf(" %d %d \n", INT_MIN, INT_MAX);
		size_new = ft_printf(" %d %d \n", INT_MIN, INT_MAX);
		fun_assert_int(size, size_new);
		size = printf(" %ld %ld \n", LONG_MIN, LONG_MAX);
		size_new = ft_printf(" %d %d \n", LONG_MIN, LONG_MAX);
		fun_assert_int(size, size_new);
		size = printf(" %ld %ld \n", ULONG_MAX, -ULONG_MAX);
		size_new = ft_printf(" %d %d \n", ULONG_MAX, -ULONG_MAX);
		fun_assert_int(size, size_new);
	}
}

void	test_ft_printf_pointers(int active)
{
	char	*method_name;

	if (active != 0)
	{
		method_name = fun_method_name("test_ft_printf_pointers");
		fun_start(method_name);
		test_pointers(1);
		fun_end(method_name);
		method_name = fun_free_str(method_name);
	}
}
