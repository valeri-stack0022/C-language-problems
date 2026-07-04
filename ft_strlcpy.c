/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:38:45 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/10 17:33:50 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_of_src;

	i = 0;
	size_of_src = 0;
	while (src[size_of_src] != '\0')
	{
		if (src[size_of_src] != 0 && size_of_src < size - 1)
		{
			dest[i] = src[i];
		}
		size_of_src++;
		i++;
	}
	dest[i] = '\0';
	return (size_of_src);
}
/*#include <stdio.h>

int main()
{
	char src[] = {"Hello"};
	char dest[10] = {0};
	unsigned int	ret = ft_strlcpy(dest, src, 0);
	printf("%d:%s\n", ret, dest);
	return (0);
}*/
