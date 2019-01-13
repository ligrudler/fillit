/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 14:59:27 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/13 19:56:20 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int check_pattern(char *str)
{
	int i;
	int dot;
	int hashtag;
	int line;

	i = 0;
	dot = 0;
	hashtag = 0;
	line = 0;
	while (str[i] && i < 21)
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		if (str[i] == '.')
			dot++;
		if (str[i] == '#')
			hashtag++;
		if (str[i] == '\n')
			line++;
		i++;
	}
	if (hashtag == 4 && dot == 12)
		return (1);
	return (0);
}

int check_newline(char *str)
{
	if (str[4] == '\n' && str[9] == '\n' && str[14] == '\n' && str[19] == '\n' && ((str[20] == '\n' && str[21] != '\0') || str[20] == '\0'))
		return (1);
	return (0);
}

int check_contact(char *str)
{
	int i;
	int contact;

	i = 0;
	contact = 0;
	while (str[i] && i < 21)
	{
		if (str[i] == '#')
		{
			if (str[i + 1] && str[i + 1] == '#' && i < 18)
				contact++;
			if (str[i + 5] && str[i + 5] == '#' && i < 14)
				contact++;
			if (str[i - 1] && str[i - 1] == '#' && i > 0)
				contact++;
			if (str[i - 5] && str[i - 5] == '#' && i > 4)
				contact++;
		}
		i++;
	}
	if (contact == 6 || contact == 8)
		return (1);
	return (0);
}

int check_file(char *str)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(str);
	if (len > 547)
		return (0);
	while (i < len)
	{
		if (!check_pattern(str + i))
			return (0);
		if (!check_contact(str + i))
			return (0);
		if (!check_newline(str + i))
			return (0);
		i = i + 21;
	}
	return (1);
}

char *get_file(const char *file)
{
	int fd;
	char buf[547];
	int ret;
	char *str;

	if ((fd = open(file, O_RDONLY)) < 0)
		return (NULL);
	if ((ret = read(fd, buf, 546)) < 0)
		return (NULL);
	buf[ret] = '\0';
	if (!(str = ft_strdup(buf)))
		return (NULL);
	if (check_file(buf) == 0)
	{
		free(str);
		return (NULL);
	}
	return (str);
}
