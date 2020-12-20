/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 21:47:00 by llescure          #+#    #+#             */
/*   Updated: 2020/12/20 17:43:40 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	if ((lst == NULL) || !(*f) || !(*del))
		return (NULL);
	if(!(new_list = malloc(sizeof(char) * ft_lstsize(lst))))
		return (NULL);
	while (lst != NULL)
	{
		new_list->content = f(lst->content);
		new_list->next = lst->next;
		ft_lstclear(&lst, *del);
		lst = lst->next;
	}
	return (new_list);
}
