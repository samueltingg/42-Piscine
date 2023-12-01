/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:14:28 by sting             #+#    #+#             */
/*   Updated: 2023/09/26 15:27:08 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		put_char ('-');
	}
	if (nb < 10)
		put_char (nb + '0');
	else
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	ft_putnbr(0);
	return (0);
}
*/

/* line 22: reason for additional case => 
 * line 29: error as when num become +ve, it's larger then max int value  */

/* line 24: write func can be used to print out strings */
/* line 25 can "return" to exit function immediately */
