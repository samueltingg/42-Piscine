/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:50:25 by sting             #+#    #+#             */
/*   Updated: 2023/09/28 14:43:37 by sting            ###   ########.fr       */
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
/*
#include <stdio.h>

int	main(void)
{
	int	num;

	num = 2147483647;
	printf ("%i\n", ft_is_prime(num));
	if (ft_is_prime(num) == 1)
		printf ("%i is a prime num", num);
	else
		printf ("%i is NOT a prime num", num);
}
*/
/* prime num: only divisible by itself & 1 
 * line 21: so num divisible by 2/3 don't need to enter while 
 * line 23: i start from 5, and not 4 as 
 * 		all num divisible by 4 can be divisible by 2*/
