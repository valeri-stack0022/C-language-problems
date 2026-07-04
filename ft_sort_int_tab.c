/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:06:35 by vahovhan          #+#    #+#             */
/*   Updated: 2025/12/06 13:39:23 by vahovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putnbr(int n)
{
	if(n > 9)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while(i < size)
	{
		ft_putnbr(tab[i]);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
/*int main()
{
	int array[] = {2,1,3,6,5,4};
	int size = 6;

	ft_print_tab(array, size);
	ft_sort_int_tab(array, size);
	ft_print_tab(array, size);

}*/
