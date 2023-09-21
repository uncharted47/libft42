/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 00:06:56 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/21 14:48:16 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iswhitespace(char sep, char c)
{
	if (c == sep)
		return (1);
	return (0);
}

static size_t	ft_count_word(char const *str, char sep)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	if (str[i] == '\0')
		return (count);
	while (str[i])
	{
		while (iswhitespace(sep, str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !iswhitespace(sep, str[i]))
			i++;
	}
	return (count);
}

static size_t	ft_strlenchar(char *str, char sep)
{
	size_t	i;

	i = 0;
	while (str[i] && !iswhitespace(sep, str[i]))
	{
		i++;
	}
	return (i);
}

static char	*ft_alloc(char *src, char sep)
{
	int		i;
	char	*split;
	int		size;

	i = 0;
	size = ft_strlenchar(src, sep);
	split = (char *)malloc(sizeof(char) * (size + 1));
	if (!split)
		return (NULL);
	while (i < size)
	{
		split[i] = src[i];
		i++;
	}
	split[i] = '\0';
	return (split);
}

char	**ft_split(char const *str, char sep)
{
	int		i;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	split = (char **)malloc(sizeof(char *) * (ft_count_word(str, sep) + 1));
	if (!split)
		return (NULL);
	if (ft_count_word(str, sep) == 0)
		split[0] = NULL;
	while (str && str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i])
			split[k++] = ft_alloc((char *)&str[i], sep);
		while (str[i] && str[i] != sep)
			i++;
	}
	split[k] = NULL;
	return (split);
}
