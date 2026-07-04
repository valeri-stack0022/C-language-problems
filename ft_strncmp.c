/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:05:53 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/11 16:30:06 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (n > 0 && *s1 != 0 && *s2 != 0 && *s1 == *s2)
	{
		if (n != 0)
		{
			s1++;
			s2++;
			n--;
		}
	}
	if (n == 0)
	{
		return (0);
	}
	return ((char)*s1 - (char)*s2);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = {"Valer"};
	char s2[] = {"MAry"};
	printf("%d", ft_strncmp(s1, s2, 1));
	return (0);
}*/
