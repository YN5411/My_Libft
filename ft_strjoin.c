/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:18:26 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/25 20:44:08 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*arr;
	char	*tmp;

	if (!s1 && !s2)
		return (NULL);
	arr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!arr)
		return (NULL);
	tmp = arr;
	while (*s1)
	{
		*arr = *s1;
		s1++;
		arr++;
	}
	while (*s2)
	{
		*arr = *s2;
		s2++;
		arr++;
	}
	return (tmp);
}
