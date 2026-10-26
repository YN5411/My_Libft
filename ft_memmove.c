/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 22:50:16 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/25 20:20:05 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;
	unsigned char	*s;

	if (dst == src)
		return (dst);
	tmp = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (tmp < s)
	{
		while (len--)
		{
			*tmp = *s;
			tmp++;
			s++;
		}
	}
	else
	{
		while (len--)
			tmp[len] = s[len];
	}
	return ((void *) dst);
}
