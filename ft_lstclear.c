/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 21:41:31 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/25 20:07:22 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nex;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		nex = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nex;
	}
}
