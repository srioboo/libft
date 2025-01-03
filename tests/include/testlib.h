/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 08:43:54 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/28 11:01:39 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIB_H
# define TESTLIB_H

# include <assert.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

// ft_test_utils.c
void	fun_start(const char *method_name);
void	fun_end(const char *method_name);
void	fun_test_header(int num);
void	fun_test_header_label(int num, char *str);
void	fun_show_data(char **test);
void	fun_show_orig_new(int (*f1)(const char *), int (*f2)(const char *), const char *c);

#endif
