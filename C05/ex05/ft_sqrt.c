/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:52:09 by sting             #+#    #+#             */
/*   Updated: 2023/09/28 11:49:48 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i <= 46340 && (i * i) < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	num;

	num = 0;
	printf ("sqrt of %i is %i", num, ft_sqrt (num));
}
*/
/* when i > 46340, i*i will cause int overflow */
