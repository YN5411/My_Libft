/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 00:31:56 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/25 20:11:52 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp;
	unsigned char		*s;

	tmp = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (n--)
		*tmp++ = *s++;
	return (dst);
}
