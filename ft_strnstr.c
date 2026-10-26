/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:52:34 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/20 18:44:38 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	need_len;

	need_len = ft_strlen(need);
	if (!(*need))
		return ((char *) hay);
	while (len >= need_len && *hay)
	{
		if (*hay == *need && ft_strncmp(hay, need, need_len) == 0)
			return ((char *) hay);
		hay++;
		len--;
	}
	return (NULL);
}
