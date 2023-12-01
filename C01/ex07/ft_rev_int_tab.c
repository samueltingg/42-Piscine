/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:51:43 by sting             #+#    #+#             */
/*   Updated: 2023/09/19 15:23:54 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int array[] = {1, 2, 3, 4};
	int	*ptr_array = array;
	int size;
	int	i;

	size = 4;
	ft_rev_int_tab(ptr_array, size);
	i = 0;
	while (i < size) 
	{	
		printf("%d", array[i]);
		i++;
	}
}
*/
