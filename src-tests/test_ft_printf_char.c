/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:55:49 by srioboo-          #+#    #+#             */
/*   Updated: 2025/01/11 23:20:31 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_chars(int active)
{
	int	size;
	int	size_new;

	if (active != 0)
	{
		fun_test_header_label(2, "NEW/ORI");
		fun_assert_int_fun(printf, ft_printf, " %c ", '0');
		fun_assert_int_fun(printf, ft_printf, " %c", '0' - 256);
		size_new = ft_printf(" %c %c %c ", '0', 0, '1');
		size = printf(" %c %c %c ", '0', 0, '1');
		fun_assert_int(size, size_new);
		size_new = ft_printf(" %c %c %c ", ' ', ' ', ' ');
		size = printf(" %c %c %c ", ' ', ' ', ' ');
		fun_assert_int(size, size_new);
		size_new = ft_printf(" %c %c %c ", '1', '2', '3');
		size = printf(" %c %c %c ", '1', '2', '3');
		fun_assert_int(size, size_new);
		size_new = ft_printf(" %c %c %c ", '2', '1', 0);
		size = printf(" %c %c %c ", '2', '1', 0);
		fun_assert_int(size, size_new);
	}
}

void	test_ft_printf_char(int active)
{
	char	*method_name;

	if (active != 0)
	{
		method_name = fun_method_name("test_ft_printf_char");
		fun_start(method_name);
		test_chars(1);
		fun_end(method_name);
		method_name = fun_free_str(method_name);
	}
}
