/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_lstdelone.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:16:45 by llescure          #+#    #+#             */
/*   Updated: 2021/05/11 17:09:34 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_double_lstdelone(t_double_list **lst, int pos)
{
	if (*lst == NULL || del == NULL)
		return ;
	while (*lst->prev != NULL)
		*lst = *lst->prev;
	if (pos == 0)
		case_first_node(lst);
	if (pos == ft_double_lstsize(lst))
		case_last_node(lst, del);
}

void	case_first_node(t_double_lst **lst)
{
	t_double_list	*temp;

	temp->next = *lst->next;
	temp->previous = NULL;
	free(*lst->content);
	*lst = temp;
}

void	case_last_node(t_double_lst **lst)
{
	t_double_list	*temp;

	while (*lst->next != NULL)
		*lst = *lst->next;
	temp->previous = *lst->previous;
	temp->next = NULL;
	free(*lst->content);
	*lst = temp;
}
