/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 23:27:53 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/20 01:04:13 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*arr;
	size_t			total;

	if (size && count > ((size_t)-1) / size)
		return (NULL);
	total = count * size;
	if (!total)
		total = 1;
	arr = malloc(total);
	if (!arr)
		return (NULL);
	ft_bzero(arr, total);
	return ((void *) arr);
}
