/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 19:13:50 by lea               #+#    #+#             */
/*   Updated: 2020/09/09 19:18:36 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	*memset(void *b, int c, unsigned int len)
{
	
}
*/

#include <string.h>
#include <stdio.h>

int		main(void)
{
	void *test = NULL;
	printf("%s\n", memset(test, 'c', 1));
}
