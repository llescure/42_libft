/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 19:13:50 by lea               #+#    #+#             */
/*   Updated: 2020/09/22 17:16:37 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int i;
	char *temp;

	i = 0;
	temp = b;
	while (i < len)
	{
		temp[i] = (unsigned char) c;
		i++;
	}
	return (temp);
}
