/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaji <ynaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 22:05:21 by ynaji             #+#    #+#             */
/*   Updated: 2026/10/23 22:46:38 by ynaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list			*new;
	t_list			*nd;
	void			*ct;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		ct = f(lst->content);
		nd = ft_lstnew(ct);
		if (!nd)
		{
			del(ct);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, nd);
		lst = lst->next;
	}
	return (new);
}
