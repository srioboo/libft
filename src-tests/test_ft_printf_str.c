/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:55:49 by srioboo-          #+#    #+#             */
/*   Updated: 2025/01/12 20:21:12 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_strings(int active)
{
	int	size;
	int	size_new;

	if (active != 0)
	{
		fun_test_header_label(5, "NEW/ORI");
		size_new = ft_printf("string '%s'\n", "test");
		size = printf("string '%s'\n", "test");
		fun_assert_int(size, size_new);
		size_new = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%\
		 %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%\
		  %c%%\n", 'A', "42", 42, 42, 42, 42, 42, 'B', "-42", -42, -42, -42,
				-42, 42, 'C', "0", 0, 0, 0, 0, 42, 0);
		size = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%\
		 %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%\
		  %c%%\n", 'A', "42", 42, 42, 42, 42, 42, 'B', "-42", -42, -42, -42,
				-42, 42, 'C', "0", 0, 0, 0, 0, 42, 0);
		fun_assert_int(size, size_new);
		size_new = ft_printf(" NULL %s NULL\n", NULL);
		size = printf(" NULL %p NULL \n", NULL);
		fun_assert_int(size, size_new);
	}
}

void	test_ft_printf_str(int active)
{
	char	*method_name;

	if (active != 0)
	{
		method_name = fun_method_name("test_ft_printf_str");
		fun_start(method_name);
		test_strings(1);
		fun_end(method_name);
		method_name = fun_free_str(method_name);
	}
}
