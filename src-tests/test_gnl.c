/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:32:51 by srioboo-          #+#    #+#             */
/*   Updated: 2025/03/01 12:51:58 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_gnl_execute(char *file, int active)
{
	char	*line;
	int		fd;
	int		end;

	if (active > 0)
	{
		end = 1;
		fd = open(file, O_RDONLY);
		printf("=== [%s] === \n\n", file);
		while (end == 1)
		{
			line = get_next_line(fd);
			if (line == NULL)
				end = 0;
			printf("%s", line);
			free(line);
			line = NULL;
		}
		printf("\n\n======================\n\n");
		close(fd);
	}
}

void	test_gnl(int active)
{
	if (active > 0)
	{
		test_gnl_execute("src-tests/files/lorem-short", 1);
		test_gnl_execute("src-tests/files/lorem", 1);
	}
}

void	test_gnl_read_error(int active)
{
	char	*line;
	int		fd;

	if (active > 0)
	{
		fd = open("files/read_error", O_RDONLY);
		printf("=== [%s] === \n\n", "files/read_error");
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
		line = NULL;
		fd = 42;
		line = get_next_line(fd);
		printf("%s\n\n======================\n\n", line);
		close(fd);
	}
}
