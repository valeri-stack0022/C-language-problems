/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:00:27 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/10 15:53:48 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	can_up;

	i = 0;
	can_up = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && can_up)
		{
			str[i] = str[i] - 32;
			can_up = 0;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && can_up)
			can_up = 0;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !can_up)
			str[i] = str[i] + 32;
		else if (str[i] >= '0' && str[i] <= '9')
			can_up = 0;
		else if ((str[i] >= 'a' && str[i] <= 'z') && !can_up)
			can_up = 0;
		else
			can_up = 1;
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int main()
{
	char	arr[] = {"hello, cool, keygen, july"};
	printf("%s", ft_strcapitalize(arr));
	return (0);
}*/
