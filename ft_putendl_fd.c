/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:41:55 by llescure          #+#    #+#             */
/*   Updated: 2020/10/17 23:48:01 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_write(s[i], fd);
		i++;
	}
	ft_write('\n', fd);
	return ;
}
