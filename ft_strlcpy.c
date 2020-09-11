/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 18:23:48 by lea               #+#    #+#             */
/*   Updated: 2020/09/09 18:47:31 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int destsize)
{
	int i;

	i = 0;
	while (i < destsize && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int				main(void)
{
	int i = 0;
	int j = 0;
	char tobecopied[] = "Hello";
	char tocopy[] = "Les amis";
	char test = "Hello";
	char test2[] = "Les amis";
	printf("%i\n", srlcpy(tobecopied, tocopy, 5));
	printf("%i\n", ft_srlcpy(test, test2, 5));
	while (i <= 5)
	{
		
		i++;
	}
}
