/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_lstsize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 14:50:35 by llescure          #+#    #+#             */
/*   Updated: 2021/05/11 15:15:17 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft"

int		ft_double_lstsize(t_double_list *lst)
{
	int		compt;
	t_double_list	*temp;

	compt = 0;
	if (lst == NULL)
		return (0);
	temp = lst;
	while (temp != NULL)
	{
		compt++;
		temp = temp->next;
	}
	return (compt);
}
