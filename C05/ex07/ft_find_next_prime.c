/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:44:11 by sting             #+#    #+#             */
/*   Updated: 2023/09/28 16:00:49 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i <= 46430 && (i * i) <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (ft_is_prime(nb) != 1)
		nb += 2;
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	num;

	num = -100000;
	printf ("next prime of %i is %i", num, ft_find_next_prime(num)); 
}
*/
/* line 37: if nb is even, add 1 to change to odd num
 * line 41 "+2" to skip even numbers */
