/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 19:46:44 by llescure          #+#    #+#             */
/*   Updated: 2020/12/18 19:48:03 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	if((lst == NULL) || !(*del))
		return ;
	temp = *lst;
	while (temp != NULL)
	{
		(*del)(temp->content);
		free(temp->content);
		temp = temp->next;
	}
	temp->content = NULL;
}
