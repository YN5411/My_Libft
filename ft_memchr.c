/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:29:26 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/20 01:38:54 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tmp;

	tmp = (unsigned char *) s;
	while (n--)
	{
		if (*tmp == (unsigned char) c)
			return ((void *) tmp);
		tmp++;
	}
	return (NULL);
}

#include <stdio.h>

int main()
{
	int str[] = {20, 5, 12};
	int c = 5;
	printf("%i\n", *(int *)ft_memchr(str, c, 8));
}