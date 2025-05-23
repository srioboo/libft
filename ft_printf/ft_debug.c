/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 08:55:51 by srioboo-          #+#    #+#             */
/*   Updated: 2025/05/23 19:45:22 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_debug(char const *s, ...)
{
	va_list	args;
	size_t	size;

	size = 0;
	if (DEBBUG == 1)
	{
		va_start(args, s);
		ft_printf("*** DEGUG ON ***\t");
		while (*s != '\0')
		{
			if (*s == '%')
			{
				s++;
				size += ft_type((char *)s, args);
			}
			else
				write(1, s, 1);
			s++;
			size++;
		}
		va_end(args);
		ft_printf("\n");
	}
	return (size);
}
