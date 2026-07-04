/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 15:43:27 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/06 16:30:04 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int	main()
{
	char src[] = "Hello";
	char dest[20];

	ft_strncpy(dest, src, 3);

	unsigned int	i;
	unsigned int 	n;

	i = 0;
	n = 3;
	while(i < n && dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}	
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (0);
}*/
