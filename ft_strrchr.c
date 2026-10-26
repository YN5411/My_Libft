/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:02:24 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/25 20:47:51 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *) s;
	while (*tmp)
		tmp++;
	if (!(char)c)
		return (tmp);
	tmp--;
	while (*tmp)
	{
		if (*tmp == (char) c)
			return (tmp);
		tmp--;
	}
	return (NULL);
}
