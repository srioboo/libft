/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_percent.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:55:49 by srioboo-          #+#    #+#             */
/*   Updated: 2025/01/11 15:39:36 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_percent(int active)
{
	int	size;
	int	size_new;

	if (active != 0)
	{
		fun_test_header_label(1, "NEW/ORI");
		size_new = ft_printf("'%%' \n");
		size = printf("'%%' \n");
		fun_assert_int(size, size_new);
		size_new = ft_printf("%%");
		size = printf("%%");
		fun_assert_int(size, size_new);
	}
}

void	test_ft_printf_percent(int active)
{
	char	*method_name;

	if (active != 0)
	{
		method_name = fun_method_name("test_ft_printf_percent");
		fun_start(method_name);
		test_percent(1);
		fun_end(method_name);
		method_name = fun_free_str(method_name);
	}
}
