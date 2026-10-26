/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 22:38:07 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/25 20:02:33 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digi(int n)
{
	int	count;	

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	fill_arr(char *arr, long nbr, int i)
{
	if (nbr < 0)
	{
		nbr *= -1;
		arr[0] = '-';
	}
	while (nbr > 0)
	{
		*(arr + (--i)) = (nbr % 10) + '0';
		nbr /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*arr;
	long	nbr;
	int		i;

	nbr = n;
	i = count_digi(nbr);
	arr = malloc(i + 1);
	if (!arr)
		return (NULL);
	arr[i] = '\0';
	if (nbr == 0)
	{
		arr[0] = '0';
		return (arr);
	}
	else
		fill_arr(arr, nbr, i);
	return (arr);
}
