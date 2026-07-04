/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 14:45:52 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/06 15:41:46 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	char src[] = "Hello";
	char dest[20];
	
	ft_strcpy(dest, src);

	int	i;
	i = 0;
	while(dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
}*/
