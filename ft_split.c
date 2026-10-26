/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:53:24 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/25 19:37:02 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_count(const char *s, char c)
{
	int	count;
	int	in;

	count = 0;
	in = 0;
	while (*s)
	{
		if (*s != c && in == 0)
		{
			in = 1;
			count++;
		}
		else if (*s == c)
			in = 0;
		s++;
	}
	return (count);
}

static void	anti_memleak(char **arr, int i)
{
	while (i)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		str_len;
	int		i;

	arr = malloc((str_count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			str_len = 0;
			while (s[str_len] && s[str_len] != c)
				str_len++;
			arr[i] = ft_substr(s, 0, str_len);
			if (!arr[i])
				return (anti_memleak(&arr[i], i), NULL);
			i++;
			s += str_len;
		}
		else
			s++;
	}
	return (arr);
}
