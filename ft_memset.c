/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 20:46:14 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/25 20:23:38 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	t;

	s = (unsigned char *)b;
	t = (unsigned char)c;
	while (len)
	{
		*s = t;
		s++;
		len--;
	}
	return ((void *) b);
}
