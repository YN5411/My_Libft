/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 01:01:27 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/25 20:40:07 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = 0;
	while (len_dst < dstsize && dst[len_dst])
		len_dst++;
	if (len_dst == dstsize)
		return (dstsize + len_src);
	while (*dst)
		dst++;
	i = 0;
	while (i < dstsize - len_dst - 1 && *src)
	{
		*dst = *src;
		src++;
		dst++;
		i++;
	}
	*dst = '\0';
	return (len_dst + len_src);
}
