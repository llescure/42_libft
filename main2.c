/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 19:46:46 by llescure          #+#    #+#             */
/*   Updated: 2020/12/21 21:52:24 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	dst1[0xF0];
	char	dst2[0xF0];
	char	*data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	int		size = 0xF0 - 0xF;

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));
	memcpy(dst1, data, strlen(data));
	memcpy(dst2, data, strlen(data));
	printf("true function :%s\n", memmove(dst1 + 3, dst1, size));
	printf("my function :%s\n", ft_memmove(dst2 + 3, dst2, size));
}
