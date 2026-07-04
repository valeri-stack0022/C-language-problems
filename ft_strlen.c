/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:21:51 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/11 19:26:28 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
	char	str[] = {"Hello"};
	printf("%d", ft_strlen(str));
	return (0);

}*/
